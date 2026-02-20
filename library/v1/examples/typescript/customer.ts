import {
  Configuration,
  CustomerApi,
  type CustomerCreateRequest,
  type CustomerUpdateRequest,
  type AddressCreateRequest,
  DocumentType,
} from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID || 'your_client_id',
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET || 'your_client_secret',
});

const customerApi = new CustomerApi(config);

export async function createCustomer() {
  console.log('=== Creating Customer ===\n');

  const address: AddressCreateRequest = {
    street: 'Main Street',
    number: '123',
    neighborhood: 'Downtown',
    city: 'Sao Paulo',
    state: 'SP',
    zipCode: '01234567',
    country: 'BR',
  };

  const customer: CustomerCreateRequest = {
    documentNumber: '12345678900',
    documentType: DocumentType.Cpf,
    email: 'john.doe@example.com',
    name: 'John Doe',
    phoneNumber: '+55 11 999999999',
    address,
  };

  try {
    const response = await customerApi.customerCreate(customer);
    const data = response.data;

    console.log('Customer created successfully!');
    console.log('Customer ID:', data.id);
    console.log('Name:', data.name);
    console.log('Email:', data.email);

    return data;
  } catch (error: any) {
    console.error('Error creating customer:', error.response?.data || error.message);
    throw error;
  }
}

export async function listCustomers() {
  console.log('=== Listing Customers ===\n');

  try {
    const response = await customerApi.customerListCustom(1, 10);
    const data = response.data;

    console.log('Customers found:', data.data?.length || 0);
    return data;
  } catch (error: any) {
    console.error('Error listing customers:', error.response?.data || error.message);
    throw error;
  }
}

export async function getCustomerById(customerId: string) {
  console.log('=== Getting Customer by ID ===\n');

  try {
    const response = await customerApi.customerRead(customerId);
    const data = response.data;

    console.log('Customer found:');
    console.log('ID:', data.id);
    console.log('Name:', data.name);
    console.log('Email:', data.email);

    return data;
  } catch (error: any) {
    console.error('Error getting customer:', error.response?.data || error.message);
    throw error;
  }
}

export async function updateCustomer(customerId: string) {
  console.log('=== Updating Customer ===\n');

  const updateData: CustomerUpdateRequest = {
    email: 'new.email@example.com',
    phoneNumber: '+55 11 888888888',
  };

  try {
    const response = await customerApi.customerUpdate(customerId, updateData);
    const data = response.data;

    console.log('Customer updated successfully!');
    console.log('New Email:', data.email);

    return data;
  } catch (error: any) {
    console.error('Error updating customer:', error.response?.data || error.message);
    throw error;
  }
}

if (import.meta.main) {
  createCustomer();
}
