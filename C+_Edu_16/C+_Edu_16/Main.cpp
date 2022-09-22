/*
 * Vector
 */

 // 리스트는 위치가 마구잡이로 형성(가상 메모리)
 // 힙에는 트리구조라는게 있다. 
#include <stdio.h>
#include <malloc.h>

int* front;
int* Back;

int size = 0;
int capacity = 0; // 수용량. vector에 존재, 총사이즈의 int형 절반을 더 키워줌.

void push_back(int _value);
void erase(int _where);
void output();

int main(void)
{
	int* Vector = nullptr;
	front = (int*)malloc(sizeof(int));

	push_back(10);
	push_back(20);
	push_back(30);
	push_back(40);
	push_back(50);
	push_back(60);
	push_back(70);

	printf("%d\n", *front);
	printf("%d\n", *Back);
	printf("%d\n", size);

	output();
	/*
	for (int i = 0; i < 10; ++i)
	{
		Vector[i] = i;
	}
	Fornt = &Vector[0];
	Back = &Vector[9];
	printf("%d\n", *Fornt);
	printf("%d\n", *Back);
	*/
	return 0;
}

void push_back(int _value)
{
	// **capacity(수용량) 가(이) size(현재 원소의 개수)와 값이 같다면
	// ** 원소를 더이상 추가 할 수 없는 상태이므로
	if (capacity == size)
	{
		// ** 수용량을 늘려준다.
		int result = (capacity >> 1); // 커패시터의 반
		capacity += (result < 1) ? 1 : result; 

		// ** 수용량이 늘어나게 되면 실제 메모리 상의 수용량도 늘려야 하기 때문에
		// ** 늘리는 과정에서 데이터를 보존 할 수 없으므로 미리 데이터를 옮겨 두어야 한다.
		// ** 그러기 위해 필요한 임시의 공간을 생성.
		//int* Temp = (int*)malloc(sizeof(int) * size); // 커패시티가 증가햇다면 복사 공간 할당
		//printf("size : %d\n", size);
		//printf("capacity : %d\n", capacity);
		
		// ** 임시의 공간을 수용량만큼 새롭게 생성
		int* Temp = (int*)malloc(sizeof(int) * capacity); // 변경후

		// ** 임시의 공간에 기존 데이터를 복사 한다.
		// ** 이때! 주소의 복사가 아니라 값의 복사가 이루어 져야 한다.
		for (int i = 0; i < size; ++i)
			Temp[i] = front[i];

		// ** 기존 메모리 공간을 초기화 해준다.(해제해준다)
		free(front);

		// ** 늘어난 수용량 만큼의 크기로 새롭게 공간을 할당 한다.
		//front = (int*)malloc(sizeof(int) * capacity);

		// ** 새롭게 할당된 공간에 복사해둔 데이터를 다시 들고온다.
		//for (int i = 0; i < size; ++i)
		//	front[i] = Temp[i];

		// ** 임시의 공간할당을 해제한다.
		//free(Temp);
		// ** 임시 공간의 주소를 front에게 전달.(받아온다)
		// ** Temp는 생성된 해당 영역을 빠져나가면 소멸된다.(스택)
		// ** 하지만 할당된 메모리 주소는 front에 전달되어(남아) 있으므로 사용 가능.
		front = Temp; // 변경후
		// ** 시작지점의 주소가 바뀌었으므로 새롭게 셋팅 해준다.
		Back = &front[size];
	}

	// ** 현재 위치에서는 항상 수용량이 남는다.
	// ** size < capacity와 같은 상태이므로 원소 추가가 가능하다.
	front[size] = _value;

	// ** 원소가 추가되었으므로 size를 더해준다.
	++size;
}
	

void output()
{
	printf("\n[ 전체 출력]\n");

	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", front[i]);
		// printf("%p\n", &front[i]);
	}
}

void erase(int _where)
{
	--size;
	for (int i = _where - 1; i < size; ++i)
		front[i] = front[i + 1];
}