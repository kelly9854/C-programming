#include<stdio.h>

int main(void)
{
int h;
double 표준체형;

printf("키 :      cm\b\b\b\b\b");
scanf("%d", &h);

표준체형=(h-100)*0.9;
printf(“표준체형: %lf", 표준체형);
}

