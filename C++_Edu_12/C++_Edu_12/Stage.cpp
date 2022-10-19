#include "Stage.h"
#include "SceneManager.h"
#include "Child.h"

Stage::Stage()
{
}

Stage::~Stage()
{
	Release();
}

void Stage::Start()
{
	Testcase = new Child; 
	Testcase->Start();
}

void Stage::Update()
{
	Testcase->Update(); // ������ �Ҹ�(������ ����)
	
	if(GetAsyncKeyState(VK_RETURN))				// 
		SceneManager::GetInstance->SetScene(EXITID)   // 
	
	//  ��������� ������� ���� ��.
	// ť �޸� ������ ����Ͽ� ���� �ذ�.

	// �����̳� ������ �߻��� �����̶� ����. �����̳ʴ� �߻����̶� ������ �� �� ����.(ť)

}

void Stage::Render()
{
	Testcase->Render();
}

void Stage::Release()
{
	delete Testcase;
	Testcase = nullptr;
}

