#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* ptr;//定义一个存放整型变量的指针

	ptr =(int *) malloc(sizeof(int));//这里malloc的功能是申请一块int长度的地址，malloc返回值本来是void类型指针，然后（*int）强制转换为int型指针并赋值给ptr
	if (ptr == NULL)
	{
		printf("分配内存失败了\n");
		exit(1);
	}

	printf("请输入一个整数：");
	scanf_s("%d", ptr);

	printf("你输入的整数是:%d\n", *ptr);

	return 0;
}