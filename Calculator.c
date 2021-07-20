//WAP to create a calculator system

#include <stdio.h>
#include <conio.h>

int main()
{
	
	int num1,num2,choice,result;
	printf("Press 1 for sum,\n 2 for Mul,\n 3 for Div,\n 4 for Sub:\n");
	scanf("%d",&choice);
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	switch(choice)
	{
		case 1:
			result=num1+num2;
			printf("The sum is: %d",result);
			break;
		case 2:
		    result=num1*num2;
			printf("The product is: %d",result);
			break;
		case 3:
		    result=num1/num2;
			printf("The sum is: %d",result);
			break;
		case 4:
		    result=num1-num2;
			printf("The difference is: %d",result);
			break;			
			
	}
	
}




