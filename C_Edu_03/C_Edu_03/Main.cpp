/*
*  chapter 03
*/

#include <stdio.h>

// 1 bit = 0 or 1 => 2��
// 2 bit = 00, 01, 10 ,11 => 4��
// 3 bit = 000,001,010,011,100,101,110,111 => 8��
// * 4 bit = 0000, 0001, 0010, 0011, 0100, 0101, 0110, 0111
// * 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111 => 16��
// 5 bit = 32��
// 6 bit = 64��
// 7 bit = 128��
// 0 0 0 0 0 0 0 0 (256���� ǥ�������� ����.)8bit == 1byte (�ƽ�Ű�ڵ� 1byte�� ǥ������)
// 11111111 = -1
// 11111110 = -2
// 1000                                     0000 = -128
// 01111111 = 127
// unsigned = ��ȣ�� ����.(�׻� ���)

// 0(��ȣǥ�� ��Ʈ 0 = ��, 1 = ��) 0000000

// int << 2����Ʈpc������ 2����Ʈ��ŭ 4����Ʈpc������ 4����Ʈ��ŭ.

int main(void)
{
	__int64;

	// sizeof == �������� ũ�⸦ ������ ��ȯ.
	printf("%d\n", sizeof(__int64));
	printf("\n");

	// * ��������
	char c;    // (�ڷ��� : char) (�����̸� : c)

	// * ���� �ʱ�ȭ (������ �ݺ� ����)
	c = 127; // ( �����̸� : c )( ���Կ����� : = )( �� = 127 )
	
	// * ���� ���� �� �ʱ�ȭ
	short s = 32767;
	int i = 2147483647;
	long n = 2147483647;

	// ** �ʱ�ȭ �� ������ ���� ���
	printf("char : %d\n", c);
	printf("short : %d\n", s);
	printf("int : %d\n", i);
	printf("long : %d\n", n);
	printf("\n");

	// *������ Ÿ���� �ִ� ǥ���������� +1 �� �� ���Ե� ��� ��� ��µǴ��� Ȯ��
	c = c + 1;
	s = s + 1;
	i = i + 1;
	n = n + 2;


	// ** �ʱ�ȭ �� ������ ���� ���
	printf("char : %d\n", c);
	printf("short : %d\n", s);
	printf("int : %d\n", i);
	printf("long : %d\n", n);
	printf("\n");

	// unsigned
	printf("%d\n", sizeof(unsigned char));
	printf("%d\n", sizeof(unsigned short));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n", sizeof(unsigned long));
	printf("%d\n", sizeof(unsigned __int64));
	printf("\n");


	// *unsigned ������ ������ Ÿ������ ���� ��, �� ������ �Ȱ��� ������ �ʱ�ȭ
	unsigned char uc = 127;
	unsigned short us = 32767;
	unsigned int ui = 2147483647;
	unsigned long un = 2147483647;

	// *���� 1�� ������
	uc = uc + 1;
	us = us + 1;
	ui = ui + 1;
	un = un + 2;
	
	printf("unsigned char : %d\n", uc);
	printf("unsigned short : %d\n", us);
	printf("unsigned int : %u\n", ui);
	printf("unsigned long : %u\n", un);
	printf("\n");

	// ���ֻ���ϴ� �Ǽ��� float , double �Ⱦ��� ���� > ��ȿ����.
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	printf("\n");

	return 0;
}
// cpu ���� ����