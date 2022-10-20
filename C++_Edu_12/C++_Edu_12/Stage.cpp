#include "Stage.h"
#include "SceneManager.h"
#include "Child.h"
#include "ObjectManager.h"
#include "CursorManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
	Release();
}

void Stage::Start()
{
	/*
	Testcase->Start();
	Testcase = new Child; 
	*/
}

void Stage::Update()
{
	/*
	Testcase->Update(); // 완전한 소멸(오류는 남음)
	
	if (GetAsyncKeyState(VK_RETURN))				// 
		SceneManager::GetInstance->SetScene(EXITID); // 
	*/
	
	//  어느시점에 만들어질 지를 모름.
	// 큐 메모리 구조를 사용하여 문제 해결.

	// 컨테이너 가상의 추상적 공간이라 생각. 컨테이너는 추상적이라 이해할 수 가 없음.(큐)

	for (int i = 0; i < EndID; ++i)
		for (int j = 0; j < MaxID; ++i)
			Objects[i][j]->Update;
	

}

void Stage::Render()
{
	/*
	Testcase->Render();
	*/
}

void Stage::Release()
{
	/*
	delete Testcase;
	Testcase = nullptr;
	*/
}

