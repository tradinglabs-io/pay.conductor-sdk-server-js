import {
  Configuration,
  OrderApi,
  type CustomerCreateRequest,
  type OrderCreditCardPaymentRequest,
  DocumentType,
  PaymentMethod,
} from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID || 'your_client_id',
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET || 'your_client_secret',
});

const orderApi = new OrderApi(config);

export async function createCreditCardOrder() {
  console.log('=== Creating Credit Card Order ===\n');

  const customer: CustomerCreateRequest = {
    documentNumber: '12345678900',
    documentType: DocumentType.Cpf,
    email: 'customer@example.com',
    name: 'John Doe',
    phoneNumber: '+55 11 999999999',
  };

  const payment: OrderCreditCardPaymentRequest = {
    paymentMethod: PaymentMethod.CreditCard,    
    card: {
      number: '4111111111111111',
      holderName: 'JOHN DOE',
      cvv: '123',
      expiration: { month: 12, year: 2028 },
    },
    installments: 1,
    softDescriptor: 'PAYCONDUCTOR',
  };

  const orderRequest = {
    chargeAmount: 150.00,
    clientIp: '192.168.1.1',
    customer,
    discountAmount: 0,
    externalId: `cc-order-${Date.now()}`,
    payment,
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
    const response = await orderApi.orderCreate(orderRequest as any);
    const data = response.data;

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

  const customer: CustomerCreateRequest = {
    documentNumber: '12345678900',
    documentType: DocumentType.Cpf,
    email: 'customer@example.com',
    name: 'John Doe',
  };

  const payment: OrderCreditCardPaymentRequest = {
    paymentMethod: PaymentMethod.CreditCard,
    card: {
      token,
    },
    installments: 3,
  };

  const orderRequest = {
    chargeAmount: 300.00,
    clientIp: '192.168.1.1',
    customer,
    discountAmount: 0,
    externalId: `cc-token-order-${Date.now()}`,
    payment,
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
    const response = await orderApi.orderCreate(orderRequest as any);
    const data = response.data;

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
