#include <iostream>
using namespace std;


int main()
{

printf ("Welcome to my calculator \n");
	int a,b;
	int num;
	num = 1,2,3,4;

    printf("choose mode \n1 is plus\n2 is minus\n3 is multiply\n4 is divide\n");
    cin >> num;
    
    
	if (num==1){
		printf("You choose + \n\n enter num :");
		cin >> a;
		printf("+ \n");
		cin >> b;
		printf("%d",a+b);
		
	}
	if (num==2){
		printf("You choose - \n\n enter num :");
		cin >> a;
		printf("- \n");
		cin >> b;
		printf("%d",a-b);
	}
	if (num==3){
		printf("You choose * \n\n enter num :");
		cin >> a;
		printf("* \n");
		cin >> b;
		printf("%d",a*b);
	}
	if (num==4){
		printf("You choose / \n\n enter num :");
		cin >> a;
		printf("/ \n");
		cin >> b;
		printf("%d",a/b);
	}
    return 0;
    system("cls");
    main();
     
}

