#include "main.h"
int print_convert(unsigned int b)
{ 
	if(b == 0){
		_printf("0");
		return;
	}
	int BinaryNum[32];
	int i = 0;
	for ( ;b > 0; )
	{
		BinaryNum[i++] = b % 2;
		b /= 2;
	}
	for (int j = i-1; j >= 0; j--)
		_printf("%d", BinaryNum[j]);
}
int main() {
	int b = 98;
	print_convert(b);
	return 0;
}
