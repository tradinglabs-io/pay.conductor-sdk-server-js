import {
  Configuration,
  WithdrawApi,
  type WithdrawCreateRequest,
  PixType,
} from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID || 'your_client_id',
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET || 'your_client_secret',
});

const withdrawApi = new WithdrawApi(config);

export async function createWithdraw() {
  console.log('=== Creating PIX Withdrawal ===\n');

  const request: WithdrawCreateRequest = {
    amount: 50.00,
    externalId: `withdraw-${Date.now()}`,
    payoutAccount: {
      ownerDocument: '12345678900',
      ownerName: 'John Doe',
      pixKey: 'john.doe@example.com',
      pixType: PixType.Email,
    },
  };

  try {
    const response = await withdrawApi.withdrawCreate(request);
    const data = response.data;

    console.log('Withdrawal created successfully!');
    console.log('Withdrawal ID:', data.id);
    console.log('Status:', data.status);

    return data;
  } catch (error: any) {
    console.error('Error creating withdrawal:', error.response?.data || error.message);
    throw error;
  }
}

export async function createWithdrawWithCPF() {
  console.log('=== Creating Withdrawal with CPF PIX Key ===\n');

  const request: WithdrawCreateRequest = {
    amount: 100.00,
    externalId: `withdraw-cpf-${Date.now()}`,
    payoutAccount: {
      ownerDocument: '12345678900',
      ownerName: 'John Doe',
      pixKey: '12345678900',
      pixType: PixType.Cpf,
    },
  };

  try {
    const response = await withdrawApi.withdrawCreate(request);
    return response.data;
  } catch (error: any) {
    console.error('Error creating withdrawal:', error.response?.data || error.message);
    throw error;
  }
}

export async function createWithdrawWithPhone() {
  console.log('=== Creating Withdrawal with Phone PIX Key ===\n');

  const request: WithdrawCreateRequest = {
    amount: 75.50,
    externalId: `withdraw-phone-${Date.now()}`,
    payoutAccount: {
      ownerDocument: '12345678900',
      ownerName: 'John Doe',
      pixKey: '+5511999999999',
      pixType: PixType.Phone,
    },
  };

  try {
    const response = await withdrawApi.withdrawCreate(request);
    return response.data;
  } catch (error: any) {
    console.error('Error creating withdrawal:', error.response?.data || error.message);
    throw error;
  }
}

export async function createWithdrawWithRandomKey() {
  console.log('=== Creating Withdrawal with Random PIX Key ===\n');

  const request: WithdrawCreateRequest = {
    amount: 200.00,
    externalId: `withdraw-random-${Date.now()}`,
    payoutAccount: {
      ownerDocument: '12345678900',
      ownerName: 'John Doe',
      pixKey: '123e4567-e12b-12d1-a456-426614174000',
      pixType: PixType.Random,
    },
  };

  try {
    const response = await withdrawApi.withdrawCreate(request);
    return response.data;
  } catch (error: any) {
    console.error('Error creating withdrawal:', error.response?.data || error.message);
    throw error;
  }
}

export async function listWithdraws() {
  console.log('=== Listing Withdrawals ===\n');

  try {
    const response = await withdrawApi.withdrawList(1, 10);
    const data = response.data as any;

    console.log('Withdrawals found:', data?.length || 0);
    return data;
  } catch (error: any) {
    console.error('Error listing withdrawals:', error.response?.data || error.message);
    throw error;
  }
}

export async function getWithdrawById(withdrawId: string) {
  console.log('=== Getting Withdrawal by ID ===\n');

  try {
    const response = await withdrawApi.withdrawRead(withdrawId);
    return response.data as any;
  } catch (error: any) {
    console.error('Error getting withdrawal:', error.response?.data || error.message);
    throw error;
  }
}

if (import.meta.main) {
  createWithdraw();
}
