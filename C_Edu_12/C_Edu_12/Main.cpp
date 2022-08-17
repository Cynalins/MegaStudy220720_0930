/*
* chapter 12
*/

#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{
	/*
	// �迭, ���ڿ�, ������ => �����ּҿ� ������ �ּҸ�
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple"+1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);
	*/

	{
		// malloc : memory location�� ����
		// ���� : L(last)I(in)F(first)O(out) ����, ����
		// �� : 
		// ť : F(first)I(in)F(first)O(out)

		int* pi;
		double* pd;


		// (����ȯ())malloc
		// ����      ��
		pi = (int*)malloc(sizeof(int));
		if (pi == NULL)
		{
			printf("# �޸𸮰� �����մϴ�.\n");
			exit(1);
		}
		pd = (double*)malloc(sizeof(double));

		*pi = 10;
		*pd = 3.4;

		printf("���������� ��� : %d\n", *pi);
		printf("�Ǽ������� ��� : %.1f\n", *pd);

		// ** �߿� **
		free(pi);
		free(pd);
	}

	{
		printf("(void*) size : %d\n", sizeof(void*));


	}
	{
		// ** void�������� ���(void* )
		int Array[5] = { 0 };
		
		void* pArr = Array;
		int* i = (int*)pArr;
		float* f = (float*)pArr;

		// ���°� �����Ǿ��� �� ���
		// int* i = (int*)pArr;
		printf("%d\n", *i);

		// ���°� �ٲ� �߻��� �� �ִ� ����
		printf("%f\n", *f);

	}

	// ===========================================================
	{
		// ** int* pi = (int*)malloc(�޸𸮸� �Ҵ��� ũ��);
		// ** int* pi = (int*)malloc(sizeof(int));
		// ** int* pi = (int*)malloc(4); ���ڸ� ����ص���.
		const int max = 10;
		int* pi = (int*)malloc(sizeof(int) * max); // sizeof(int)*max => ��, pi => ���� �Ҵ�� �ּҸ� ����. �ڱ��ڽ��� ���ؿ� ��ġ.
		for (int i = 0; i < max; ++i)
		{
			pi[i] = 10 * i + 10;
			printf("%d, ", *(pi+i));
		}


	}








	return 0;
}

