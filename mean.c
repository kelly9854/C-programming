#include<stdio.h>
int main()
{
int 국어점수, 영어점수, 수학점수;
double 합, 평균;

printf("국어?");
scanf("%d", &국어점수);
printf("영어?");
scanf("%d", &영어점수);
printf("수학?");
scanf("%d", &수학점수);

printf("합: %.0lf", 합=국어점수+영어점수+수학점수);
printf("평균: %lf", 평균=(국어점수+영어점수+수학점수)/3);
}
