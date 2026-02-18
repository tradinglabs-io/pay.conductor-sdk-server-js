# openapi.model.PostOrdersRequestPayment

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | **String** |  | 
**expirationInSeconds** | [**PixExpirationInSeconds**](PixExpirationInSeconds.md) |  | [optional] 
**card** | [**CartODeCrDitoCard**](CartODeCrDitoCard.md) |  | 
**installments** | [**CartODeCrDitoInstallments**](CartODeCrDitoInstallments.md) |  | 
**softDescriptor** | **String** | Texto que aparecerá na fatura do cartão (soft descriptor) | [optional] 
**expirationInDays** | [**BoletoExpirationInDays**](BoletoExpirationInDays.md) |  | [optional] 
**nuPay** | [**NuPayNuPay**](NuPayNuPay.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


