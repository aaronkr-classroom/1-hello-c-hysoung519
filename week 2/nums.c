//nums.c
#include <stdio.h>
#include <limits.h>//최대값,최소값 볼 때

int main() {

	//char 1 byte				(문자)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n",ch);
	printf("Max: %d\n", CHAR_MAX); //limit.h 상수
	printf("Min: %d\n", CHAR_MIN); 
	
	//signed short int 2byte	(정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit.h 상수
	printf("Min: %d\n", SHRT_MIN);
	
	//unsigned short int 2byte
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h 상수
	
	//signed int 4byte			(정수)
	signed int sint = 1234;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); //limit.h 상수
	printf("Min: %d\n", INT_MIN);
	
	//unsigned int 4byte		(정수)
	unsigned short int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h 상수
	

	//long은 다른 운영체제에서 다른 바이트 크기입니다.
	//보통 4바이트인데 Linux/Unix/Mac에서 8바이트입니다.
	//window에서 longlong하면 8바이트 사용할 수 있다.	

	//signed long int 4byte			(정수)
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX); //limit.h 상수
	printf("Min: %d\n", LONG_MIN);
	
	//unsigned long int 4byte		(정수)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); //limit.h 상수
	
	//float(항상부호) 4byte		(실수)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value: %f\n", f);
	//printf("Max: %d\n", FLT_MAX); //limit.h 상수
	//printf("Min: %d\n", LONG_MIN);

	//double(항상부호)	 8byte	(실수)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", FLT_MAX); //limit.h 상수
	//printf("Min: %d\n", LONG_MIN);

	return 0;
}