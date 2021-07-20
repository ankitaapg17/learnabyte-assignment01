//WAP to create a voting system

#include <stdio.h>
#include <conio.h>

int main()
{
	int sum1,sum2,sum3;
	int i,n,choice,sum=sum1=sum2=0;
	printf("How many voters can cast their vote: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Press 1 to vote for AAA, 2 to vote for BBB, 3 to vote for CCC, 4 for NOTA: ");
		scanf("%d",&choice);
		if(choice==1)
		{
			sum=sum+1;
		}
		else if(choice==2)
		{
			sum1=sum1+1;
		}
		else if(choice==3)
		{
			sum2=sum2+1;
		}
		else if(choice==4)
		{
			sum=sum+0;
		}
	}
	//Find greatest among sum, sum1, sum2
	if(sum>sum1 && sum>sum2)
	{
		printf("Team AAA wins the vote");
	}
	else if(sum1>sum2)
	{
		printf("Team BBB wins the vote");
	}
	else
	{
		printf("Team CCC wins the vote");
	}
}






