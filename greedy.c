#include <stdio.h>
int countCoins(int denomination, int money)
{
    return money/denomination; 
}

int main ()
{
    float dollarMoney;
    int count;
    int centMoney;
    printf("Hello, enter dollarMoney \n");
    scanf("%f", &dollarMoney);
    while (dollarMoney<0) {
        printf("Hello, enter money \n");
        scanf("%f", &dollarMoney);
    }
    printf("%f", dollarMoney);
    printf("\n");
    centMoney =(int) (dollarMoney * 100);
    count = 0;
    printf("%d", centMoney);
    printf("\n");
    count = count + countCoins(25, centMoney);
    centMoney -= 25*countCoins(25, centMoney);
    count = count + countCoins(10, centMoney);
    centMoney -= 10*countCoins(10, centMoney);
    count = count + countCoins(5, centMoney);
    centMoney -= 5*countCoins(5, centMoney);
    count = count + countCoins(1, centMoney);
    centMoney -= 1*countCoins(1, centMoney);
    printf("%d", count);
    return 0;
}