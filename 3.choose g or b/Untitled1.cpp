#include<Stdio.h>
#include<iostream>

int main()
{
    int num;
    
	printf("your boy or girl\nboy=1\ngirl=2\nenter num : ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("You are boy");
			break;
		case 2:
			printf("You are girl");
			break;
		default:
			printf("no commands");
		}	
		return 0;
		
}
