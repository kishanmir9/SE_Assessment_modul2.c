//write a programe  menu driven with function .
#include<stdio.h>
	int add(int, int);
	int sub(int, int);
	int mul(int, int);
	int div(int, int);

main()
{
	int i,choice,a,b,c;
	
	printf("\n\n\t-------------MENU--------------");
	
	printf("\n\n\t1. Addition");
	printf("\n\n\t2. Subtraction");
	printf("\n\n\t3. Miltiplication");
	printf("\n\n\t4. Divition");
	
	printf("\n\n\tEnter the number a : ");
	scanf("%d",&a);
	printf("\n\n\tEnter the number b : ");
	scanf("%d",&b);
	printf("\n\n\tEnter the choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	c= add(a,b);
				printf("\n\n\tAddition :%d",c);
				break;
		
		case 2: c= sub(a,b);
				printf("\n\n\tSubtraction :%d",c);
				break;
		
		case 3: c = mul(a,b);
				printf("\n\n\tMiltiplication :%d",c);
				break;
		
		case 4: c = div(a,b);
				printf("\n\n\tDivition :%d ",c);
				break;
		
		default: printf("\n\n\tinvalid choice!...");
				 
	}
}


int add(int a, int b)
{
	return a+b;
}


int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}
