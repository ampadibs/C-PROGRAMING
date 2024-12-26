#include <stdio.h>

int main(){
	//character
	char c = 'c';
	//%c (stands for character) is used in printf function
	printf("character is %c\n",c);

	//string (list/array of characters)
	char string[] = "name";
	//%s (stands for string) is used in printf function
	printf("string is %s\n",string);

	//float (pont values eg:1.1)
	float fltnumber=10.1;
	//%f (stands for float) is used in printf function
	printf("float number is %f\n",fltnumber);
	//%2f only tow digits will print in point value
	printf("2 digit of float numeber is %2f\n",fltnumber);

	//double (it can store high bits of float value)
	double dblnumber = 10.2;
	//%lf (stands for long float) is used in printf function
	printf("long float value is %lf\n",dblnumber);
	//%2lf only 2 point value will be print
	printf("2 point long float value is %2lf\n",dblnumber);

	return 0;
}
