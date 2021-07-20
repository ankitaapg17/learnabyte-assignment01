//WAP to print the following output
#include <stdio.h>
#include <string.h>

int main()
{
	//remove special characters
	int length;
	char line[100],i,j;
	printf("\nEnter the string: ");
	gets(line);
	for(i=0;line[i]!='\0';++i)
	{
		while(!(line[i]>='a'&&line[i]<='z')&&!(line[i]>='A'&&line[i]<='Z')&&!(line[i]=='\0')&&!(line[i]==' '))
		{
			for(j=i;line[j]!='\0';++j)
			{
				line[j]=line[j+1];
			}
			line[j]='\0';
		}
	}
	//Swap Case
	length=strlen(line);
	
	for(i=0;i<length;i++)
	{
		if(i==0||i==(length-1)) //Converting first and last index to caps
		{
			line[i]=toupper(line[i]);
		}
		else if(line[i]==' ')//After and before space
		{
			line[i-1]=toupper(line[i-1]);
			line[i+1]=toupper(line[i+1]);
		}

	}
	
	printf("Output string: ");
	puts(line);
	
	
	
}










