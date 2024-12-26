#include <stdio.h>

int main(){
	//string format specifier is (%s)
	char string[] ="THESE IS A STRING";
	printf("STRING is %s\n",string);

	//CHARACTER format specifier is (%c)
	char a='a';
	printf("CHARACTER is %c\n",a);

	//FLOAT VALUE format specifier is (%f)
	float number_float = 10.001;
	printf("FLOAT VALUE is %f\n",number_float);


	//INTEGER / DIGIT flormat specifier is (%d)
	int number = 10;
	printf("INTEGER is %d",number);

	return 0;
}
