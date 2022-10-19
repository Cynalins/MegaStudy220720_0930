#pragma once
#include "Scene.h"

class Object; // �����⸸ �ִ� ObjectŬ���� <- �����������ϴ� ���°� �ƴ�. ���� �ν��Ͻ��� ���� �� ����. ���� �����͸� ����Ͽ� ������ �����Ͽ�����.
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

