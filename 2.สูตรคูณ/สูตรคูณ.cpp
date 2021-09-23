#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

main()
{
	ofstream home;
	home.open("home.txt");
	int num;
	
	printf("enter num : ");
	
	scanf("%d",&num);
	
    for (int x = 0;x<=12;x++){
	printf("%d * %d = %d\n",num,x,num*x);

    }
    
   home.close();
   
}



	


