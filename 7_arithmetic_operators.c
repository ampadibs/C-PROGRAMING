#include <stdio.h>

int main(){
	int num1 = 10;
	int num2 = 20;
	float num3 = 40.10;
	float num4 = 50.20;
	
	//addition
	int a = num1+num2;

	//substraction
	int b= num1-num2;

	//MULTIPLICATION
	int c=num1*num2;

	//division
	int d=num1/num2;

	//modules
	int e=num1%num2;

	// changing data types
	float f = num1 * (int) num3;

	printf("%d + %d = %d\n",num1,num2,a);
	printf("%d - %d = %d\n",num1,num2,b);
	printf("%d * %d = %d\n",num1,num2,c);
	printf("%d / %d = %d\n",num1,num2,d);
	printf("%d modules %d = %d\n",num1,num2,e);
	printf("%d * %d = %f\n",num1,num3,f);
	return 0;
}
