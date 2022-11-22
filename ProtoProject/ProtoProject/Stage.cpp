#include "Stage.h"
#include "SceneManager.h"
#include "CursorManager.h"
#include "Player.h"
#include "Prototype.h"
#include "InputManager.h"
#include "ObjectManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Start()
{

	// try ~ catch -> throw를 날리면 catch가 잡아줌 catch(... = else, default랑 같음.)
	/*
	try
	{
		//Prototype::GetInstance()->Initialize();
		Object* ProtoObject = Prototype::GetInstance()->FindObject("Player");

		if (ProtoObject == nullptr)
			throw __LINE__;
		
		pPlayer = ProtoObject->Clone();
		pPlayer->Start();
	}
	catch(...)
	{
		cout << "Erorr : while (" << __FILE__ << ") " << __LINE__ << endl;

		system("apause");
		pPlayer = (new Player)->Initalize("nullptr_key");
		pPlayer->Start();
	}
	*/
	
	/*
	pPlayer = new Player;
	pPlayer->Start();
	*/
	Object* pObj = nullptr;
	//FAILED(pObj)

	DWORD key = InputManager::GetInstance()->GetwKey();

	if(key & KEYID_ENTER)
		ObjectManager::GetInstance()->Dist
}

void Stage::Update()
{
	cout << "Stage" << endl;
	
	pPlayer->Update();
	
	if (GetAsyncKeyState('G'))
		SceneManager::GetInstance()->SetScene(Scene_ID::EXITID);
	
	/*
	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(Scene_ID::EXITID);
	*/
	
}

void Stage::Render()
{
	/*
	pPlayer->Render();
	*/
	
	/*
	InputManager::GetInstance()->InputKey();
	name = InputManager::GetInstance()->GetwKey();

	cout << name << endl;
	*/
}

void Stage::Release()
{
}

