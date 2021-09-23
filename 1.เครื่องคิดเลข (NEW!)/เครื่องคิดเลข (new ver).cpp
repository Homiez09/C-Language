#include <iostream>
#include <stdio.h>

using namespace std;

double x;
double y;
int num;
double Answer; 
double base,exponent,i,pow=1;
main()
{
	printf("Version 5.1   (NEW UPDATE)   !\n"); 
	printf("Choose Mode                  !\n");
	printf(" 1:plus                      !\n");
	printf(" 2:minus                     !\n");
	printf(" 3:multiply                  !\n");
	printf(" 4:divide                    !\n");
	printf(" 5:power                     !\n");
	printf("_____________________________!\n");

	
	printf("Choose Mode : ");
	scanf("%d",&num);
	system("cls");
	
	switch(num)
	{
		case 1 :
			printf("You choose plus\nenter num : ");
		    scanf("%lf",&x);
	        printf("enter num : ");
		    scanf("%lf",&y);
		    printf("Answer : %lf\n",x+y);
		    printf("_____________________________\n");    
		break;
		
		case 2 :                                         
			printf("You choose minus\nenter num : ");
		    scanf("%lf",&x);
	        printf("enter num : ");
		    scanf("%lf",&y);
		    printf("Answer : %lf\n",x-y);
		    printf("_____________________________\n");   
	    break;
	    
	    case 3 :
			printf("You choose multiply\nenter num : ");
		    scanf("%lf",&x);
	        printf("enter num : ");
		    scanf("%lf",&y);
		    printf("Answer : %lf\n",x*y);
		    printf("_____________________________\n");	    
		break;   
		
		case 4 :
			printf("You choose divide\nenter num : ");
		    scanf("%lf",&x);
	        printf("enter num : ");
		    scanf("%lf",&y);
		    printf("Answer : %lf\n",x/y);
		    printf("_____________________________\n");		    
		break;   
		
		case 5 :
			printf("You choose power\nenter num : ");
	    	scanf("%lf",&base);    
	    	printf("enter num : ");
		    scanf("%lf",&exponent);  
	    	
		  for(i=1;i<=exponent;i++)
            {
                pow = pow * base;                   
            }
  			printf("Answer : %lf\n",pow) ;
	    	
		    printf("_____________________________\n");		    
		break;   
		
		default :
			printf("NO COMMAND\n");
			printf("_____________________________\n");		
		break;			
	}	
	main();		
}

