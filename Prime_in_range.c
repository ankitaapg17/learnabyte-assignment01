//WAP to find all prime numbers in a given range
#include <stdio.h>
#include <conio.h>
#include <math.h>

int check(int n);

int main()
{
	int a,b,i,k;
	printf("Insert the starting number: ");
	scanf("%d",&a);
	printf("Insert the ending number: ");
	scanf("%d",&b);
	printf("The prime numbers are: ");
	for(i=a;i<=b;i++)
	{
		k=check(i);
		if(k==0)
		{
			printf("%d,",i);
		}
		
	}
	
}
int check(int i)
{
	int j,s=0;
	for(j=2;j<sqrt(i);j++)
	{
		if(i%j==0)
		{
			s=s+1;
		}
		
	}
	return(s);
	
	
}
