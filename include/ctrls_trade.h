#ifndef CTRLS_TRADE
#define CTRLS_TRADE
void showProduct(int itemId, int price, int ownedAmount);
void showMarketPrices();
int cin_getChoiceOfProductId();
int cin_getBuyOrSell();
int cin_getTradeQuantity(bool isBuying);
#endif
