import {
  Configuration,
  OrderApi,
  type CustomerCreateRequest,
  type AddressCreateRequest,
  type OrderBankSlipPaymentRequest,
  DocumentType,
  PaymentMethod,
} from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID || 'your_client_id',
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET || 'your_client_secret',
});

const orderApi = new OrderApi(config);

export async function createBankSlipOrder() {
  console.log('=== Creating Bank Slip Order ===\n');

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
    email: 'customer@example.com',
    name: 'John Doe',
    phoneNumber: '+55 11 999999999',
    address,
  };

  const payment: OrderBankSlipPaymentRequest = {
    paymentMethod: PaymentMethod.BankSlip,
    expirationInDays: 7,
  };

  const orderRequest = {
    chargeAmount: 200.00,
    clientIp: '192.168.1.1',
    customer,
    discountAmount: 10.00,
    externalId: `boleto-order-${Date.now()}`,
    payment,
    shippingFee: 15.00,
    taxFee: 0,
    items: [
      {
        id: 'item-1',
        isPhysical: true,
        name: 'Sample Product',
        qty: 2,
        unitPrice: 100.00,
      },
    ],
  };

  try {
    const response = await orderApi.orderCreate(orderRequest as any);
    const data = response.data;

    console.log('Bank slip order created successfully!');
    console.log('Order ID:', data.id);
    console.log('Status:', data.status);
    console.log('Barcode:', data.bankSlip?.barCode);
    console.log('Digitable Line:', data.bankSlip?.digitableLine);
    console.log('PDF URL:', data.bankSlip?.pdfUrl);

    return data;
  } catch (error: any) {
    console.error('Error creating bank slip order:', error.response?.data || error.message);
    throw error;
  }
}

if (import.meta.main) {
  createBankSlipOrder();
}
