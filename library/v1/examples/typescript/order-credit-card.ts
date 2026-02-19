import {
  Configuration,
  OrdersApi,
  type Customer,
  DocumentType,
  type PostOrdersRequest,
} from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID || 'your_client_id',
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET || 'your_client_secret',
});

const ordersApi = new OrdersApi(config);

export async function createCreditCardOrder() {
  console.log('=== Creating Credit Card Order ===\n');

  const customer: Customer = {
    documentNumber: '12345678900',
    documentType: DocumentType.Cpf,
    email: 'customer@example.com',
    name: 'John Doe',
    phoneNumber: '+55 11 999999999',
  };

  const orderRequest: PostOrdersRequest = {
    chargeAmount: 150.00,
    clientIp: '192.168.1.1',
    customer,
    discountAmount: 0,
    externalId: `cc-order-${Date.now()}`,
    payment: {
      paymentMethod: 'CreditCard',
      card: {
        number: '4111111111111111',
        holderName: 'JOHN DOE',
        cvv: '123',
        expiration: { month: 12, year: 2028 },
        token: '',
      },
      installments: 1,
      softDescriptor: 'PAYCONDUCTOR',
    } as any,
    shippingFee: 10.00,
    taxFee: 0,
    items: [
      {
        id: 'item-1',
        isPhysical: true,
        name: 'Sample Product',
        qty: 1,
        unitPrice: 150.00,
      },
    ],
  };

  try {
    const response = await ordersApi.postOrders(orderRequest);
    const data = response.data as any;

    console.log('Credit card order created successfully!');
    console.log('Order ID:', data.id);
    console.log('Status:', data.status);
    console.log('Amount:', data.amount);
    console.log('Authorization Code:', data.creditCard?.authorizationCode);

    return data;
  } catch (error: any) {
    console.error('Error creating credit card order:', error.response?.data || error.message);
    throw error;
  }
}

export async function createCreditCardOrderWithTokenizedCard(token: string) {
  console.log('=== Creating Order with Tokenized Card ===\n');

  const customer: Customer = {
    documentNumber: '12345678900',
    documentType: DocumentType.Cpf,
    email: 'customer@example.com',
    name: 'John Doe',
  };

  const orderRequest: PostOrdersRequest = {
    chargeAmount: 300.00,
    clientIp: '192.168.1.1',
    customer,
    discountAmount: 0,
    externalId: `cc-token-order-${Date.now()}`,
    payment: {
      paymentMethod: 'CreditCard',
      card: {
        token,
        cvv: '123',
        expiration: { month: 12, year: 2028 },
        holderName: 'JOHN DOE',
        number: '',
      },
      installments: 3,
    } as any,
    shippingFee: 0,
    taxFee: 0,
    items: [
      {
        id: 'item-1',
        isPhysical: false,
        name: 'Product with Installments',
        qty: 1,
        unitPrice: 300.00,
      },
    ],
  };

  try {
    const response = await ordersApi.postOrders(orderRequest);
    const data = response.data as any;

    console.log('Tokenized card order created successfully!');
    console.log('Order ID:', data.id);
    console.log('Status:', data.status);

    return data;
  } catch (error: any) {
    console.error('Error creating tokenized card order:', error.response?.data || error.message);
    throw error;
  }
}

if (import.meta.main) {
  createCreditCardOrder();
}
