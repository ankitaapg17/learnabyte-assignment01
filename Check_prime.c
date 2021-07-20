//WAP to check prime number, if not then find out its factors

#include <stdio.h>
#include <conio.h>
#include <math.h>

int check(int i)
{
	int j,s=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			s=s+1;
		}
	}
	return s;
}


int main()
{
	
	int a,i,j,fact=1,k;
	printf("Insert a number: ");
	scanf("%d",&a);
	
		k=check(a);
		if(k==0)
		{
			printf("%d is a prime number",a);
			
		}
		else
		{
			printf("Not a prime number\n");
			printf("Its factors are:");
			for(j=1;j<=a;j++)
			{
				if(a%j==0)
				{
					printf("%d ",j);
				}
			}
		}
	
	
}




