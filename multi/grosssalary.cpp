#include<stdio.h>
#include<conio.h>
main()
{
	char name;
	int bs;
	float hra,da ,ta;
	// printf("Enter your name :");
	// scanf("%c",&name);
	printf("Enter your base Salary :");
	scanf("%d",&bs);
	hra =(bs*10)/100;
	da = (bs*5)/100;
	ta = (bs*8)/100;
	printf("hra : %f\n",hra);
	printf("da : %f\n",da);
	printf("ta : %f\n",ta);
	int grossSalary = bs + hra + da + ta;
	printf("Gross Salary : %d",grossSalary);
	getch();
}
