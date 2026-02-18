# PayConductor TypeScript Examples

Examples of how to use the PayConductor SDK with TypeScript.

## Prerequisites

- [Bun](https://bun.sh/) installed
- PayConductor API credentials (Client ID and Client Secret)

## Installation

```bash
bun install
```

## Configuration

Set your PayConductor credentials as environment variables:

```bash
export PAYCONDUCTOR_CLIENT_ID=your_client_id
export PAYCONDUCTOR_CLIENT_SECRET=your_client_secret
```

Or edit `index.ts` and replace the credentials directly.

## Running

```bash
bun run index.ts
```

## Example Code

```typescript
import { Configuration, OrdersApi, CustomersApi, GetOrdersPeriodEnum } from 'payconductor-sdk';

const config = new Configuration({
  username: process.env.PAYCONDUCTOR_CLIENT_ID,
  password: process.env.PAYCONDUCTOR_CLIENT_SECRET,
});

const ordersApi = new OrdersApi(config);

// Get orders
const orders = await ordersApi.getOrders(GetOrdersPeriodEnum.Last7Days, 1, 10);
```
