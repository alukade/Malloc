#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* ptr;//����һ��������ͱ�����ָ��

	ptr =(int *) malloc(sizeof(int));//����malloc�Ĺ���������һ��int���ȵĵ�ַ��malloc����ֵ������void����ָ�룬Ȼ��*int��ǿ��ת��Ϊint��ָ�벢��ֵ��ptr
	if (ptr == NULL)
	{
		printf("�����ڴ�ʧ����\n");
		exit(1);
	}

	printf("������һ��������");
	scanf_s("%d", ptr);

	printf("�������������:%d\n", *ptr);

	return 0;
}