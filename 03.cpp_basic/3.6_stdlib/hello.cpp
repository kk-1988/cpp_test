#include <stdio.h>

#ifdef __cplusplus
#define USECPP 1
#else
#define USECPP 0
#endif

int main(void)
{
	//c程序时没有定义，c++编译时则有定义
	printf("%ld.\r\n", USECPP);
	printf("hello cpp\r\n");
	return 0;
}