#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int number,i,count=0;
	printf("Enter a numberber:");
	scanf("%d",&number);
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		
			count++;
			break;
		
	}
	if(count==0)
	
		printf("This is a prime numberber");
	
	else
	
		printf("This is not a prime numberber");
	
	getch();
}
