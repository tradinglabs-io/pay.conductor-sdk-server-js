import {
  Configuration,
  CustomersApi,
  type Customer,
  type CustomerAddress,
  type Customer1,
  DocumentType,
} from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID || 'your_client_id',
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET || 'your_client_secret',
});

const customersApi = new CustomersApi(config);

export async function createCustomer() {
  console.log('=== Creating Customer ===\n');

  const address: CustomerAddress = {
    street: 'Main Street',
    number: '123',
    neighborhood: 'Downtown',
    city: 'Sao Paulo',
    state: 'SP',
    zipCode: '01234567',
    country: 'BR',
  };

  const customer: Customer = {
    documentNumber: '12345678900',
    documentType: DocumentType.Cpf,
    email: 'john.doe@example.com',
    name: 'John Doe',
    phoneNumber: '+55 11 999999999',
    address,
  };

  try {
    const response = await customersApi.postCustomers(customer);
    const data = response.data as any;

    console.log('Customer created successfully!');
    console.log('Customer ID:', data?.id);
    console.log('Name:', data?.name);
    console.log('Email:', data?.email);

    return data;
  } catch (error: any) {
    console.error('Error creating customer:', error.response?.data || error.message);
    throw error;
  }
}

export async function listCustomers() {
  console.log('=== Listing Customers ===\n');

  try {
    const response = await customersApi.getCustomers(1, 10);
    const data = response.data as any;

    console.log('Customers found:', data?.length || 0);
    return data;
  } catch (error: any) {
    console.error('Error listing customers:', error.response?.data || error.message);
    throw error;
  }
}

export async function getCustomerById(customerId: string) {
  console.log('=== Getting Customer by ID ===\n');

  try {
    const response = await customersApi.getCustomersById(customerId);
    const data = response.data as any;

    console.log('Customer found:');
    console.log('ID:', data?.id);
    console.log('Name:', data?.name);
    console.log('Email:', data?.email);

    return data;
  } catch (error: any) {
    console.error('Error getting customer:', error.response?.data || error.message);
    throw error;
  }
}

export async function updateCustomer(customerId: string) {
  console.log('=== Updating Customer ===\n');

  const updateData: Customer1 = {
    email: 'new.email@example.com',
    phoneNumber: '+55 11 888888888',
  };

  try {
    const response = await customersApi.patchCustomersById(customerId, updateData);
    const data = response.data as any;

    console.log('Customer updated successfully!');
    console.log('New Email:', data?.email);

    return data;
  } catch (error: any) {
    console.error('Error updating customer:', error.response?.data || error.message);
    throw error;
  }
}

if (import.meta.main) {
  createCustomer();
}
