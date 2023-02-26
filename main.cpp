#include<stdio.h>
typedef union
{
	int A;
	struct 
	{
		char low;
		char high;
	}Data;
}Tach_byte_t;
int main()
{
	Tach_byte_t B;
	B.A = 0x1234;
	printf("So cao la: 0x%x\r\n", B.Data.high);
	printf("So thap la: 0x%x\r\n", B.Data.low);
	return 0;
}