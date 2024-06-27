#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	int a;
	printf("enter first angle : ");
	scanf("%d",&a);
	int b;
	printf("enter second angle : ");
	scanf("%d",&b);
	int c= 180-(a+b);
	printf("Third angle is : %d",c);
}
