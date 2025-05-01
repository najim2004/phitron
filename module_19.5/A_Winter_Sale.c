#include <stdio.h>

int main()
{
    int discount, discounted_price;
    scanf("%d %d", &discount, &discounted_price);
    float main_price = (float)(discounted_price * 100) / (100 - discount);
    printf("%.2f\n", main_price);
    return 0;
}