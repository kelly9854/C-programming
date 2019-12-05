# C-programming
C프로그래밍 실습


1.슈퍼마켓에서 빵, 우유를 몇 개씩 사고, 돈을 얼마를 지불하면 거스름돈이 얼마인지를 알려주는 프로그램 작성

조건 1)프로젝트 이름은 Super
2)빵 값, 빵 개수, 우유 값, 우유 개수, 지불한 돈은 입력 받도록 한다.
3)필요한 변수는 모두 정수형으로 선언한다. int bread_price;
4)키보드로부터 사용자가 입력한 값을 받아들일 때는 scanf를 사용한다.
       scanf("%d",&bread_price);

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



2.
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

1.등차수열의 초항과 공차를 입력 받아 원하는 항의 값을 출력하는 프로그램을 작성하라
#include<stdio.h>
int main()
{
	int a1, d, n, an;
 
	printf(“초항은?”);
	scanf("%d", &a1);
	printf(“공차는?”);
	scanf("%d", &d);
	printf("원하는 항은?");
	scanf("%d", &n);

	printf("원하는 항의 값은 %d", an=a1+(n-1)*d);
}


2. 다음과 같이 4시간 30분은 모두 몇 초인지 출력하는 프로그램을 작성하라
ex) 4시간 30분은 16200초입니다.
#include<stdio.h>
int main()
{
printf("4시간 30분은 %d초입니다.\n", 4*60*60+30*60);
}
 
3.국어, 영어, 수학점수를 정수형 변수에 입력 받아 합과 평균을 출력하는 프로그램을 작성하라
국어? 76
영어? 87
수학? 91
합: 254, 평균:84.666667

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




1. 거리의 단위인 킬로미터(km)를 입력받아 마일(mile)로 계산하는 프로그램을 작성하라.
#include<stdio.h>
void main()
{
double 거리;

printf("거리 입력?(킬로미터)");
scanf("%lf", &거리);

printf("%lf 마일\n", 거리/1609);
}

2.scanf를 이용하여 F,C와 온도를 입력받고 3항 연산자를 이용하여 섭씨(F), 화씨(C) 온도를 변환하여 출력하여라.
 
#include<stdio.h>
main void()
{
double C,F,F1,C1;

printf("C온도:");
scanf("%lf", &C);
printf("F온도:");
scanf("%lf", &F);

F1=(C*1.8)+32;
C1=(F-32)/1.8;
printf("비교했을 때 더 높은 온도는?");
F1>C1? printf("%lf", F1) : printf("%lf", C1);

}



1.
#include<stdio.h>
void main()
{
int i, j;

printf("윤년을 확인할 년도를 입력하세요");
scanf("%d", &i);

if(0==i%4)
	if(i%100==0 &&i%400!=0) 	
printf("%d 년은 윤년이 아닙니다!", i);
	else printf("%d년은 윤년!",i);
else printf("%d년은 윤년이 아닙니다!", i);

}


2.
#include<stdio.h>
void main()
{
char c;
int j;

for (j=0; j<=25; j++)
	{ for (c='A'; c<=65+j;c++)
		{printf("%c", c);
	}
	printf("\n");
	}
}
