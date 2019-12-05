#include<stdio.h>

main void()
{
	int bread_price;
	int p;
	int milk_price;
	int j;
	int money;

	printf("<입력화면>\n");
	printf(“빵 값: ”);
	scanf("%d", &bread_price);
	printf(“빵 개수: ”);
	scanf("%d", &p);
	printf(“우유 값: ”);
	scanf("%d", &milk_price);
	printf(“우유 개수: ”);
	scanf("%d", &j);
	printf("지불한 돈 : ");
	scanf("%d", &money);

	printf("거스름돈: %d \n", 	money-bread_price*p-milk_price*j);
}
