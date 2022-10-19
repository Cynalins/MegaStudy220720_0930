#pragma once
#include "Scene.h"

class Object; // 껍데기만 있는 Object클래스 <- 원형이존재하는 형태가 아님. 원형 인스턴스를 만들 수 없음. 따라서 포인터를 사용하여 변수를 선언하여야함.
class Stage : public Scene
{
private:
	Object* Testcase;
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	Stage();
	virtual ~Stage();

};

