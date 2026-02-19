# PayConductor SDK - TypeScript Examples

Complete examples demonstrating how to use the PayConductor SDK for TypeScript.

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

## Running

```bash
bun run index.ts
```

## Example Files

| File | Description |
|------|-------------|
| `order-pix.ts` | PIX payment order example |
| `order-credit-card.ts` | Credit card payment order example |
| `order-bank-slip.ts` | Bank slip payment order example |
| `customer.ts` | Customer CRUD operations |
| `card-tokenization.ts` | Card tokenization example |
| `withdraw.ts` | PIX withdrawal examples |
| `order-management.ts` | Order listing, refund, confirmation |
| `index.ts` | Main entry point |
