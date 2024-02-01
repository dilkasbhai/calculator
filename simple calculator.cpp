#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your first number:");
	scanf("%d",&b);
	
	int sum=a+b;
	int sub=a-b;
	int mul=a*b;
	float div=a/b;
    float mod=a%b;
	
	printf("sum:%d\n",sum);
	printf("substraction:%d\n",sub);
	printf("multiplication:%d\n",mul);
	printf("division:%.2f\n",div);
	printf("modulus:%.2f\n",mod);
	return 0;
}
