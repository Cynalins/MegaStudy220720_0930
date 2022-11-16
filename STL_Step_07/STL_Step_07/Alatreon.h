#pragma once
#include "Object.h"

class Alatreon : public Object
{
public:
	virtual Object* Initialize()override;
	void Start()override;
	int Update()override;
	void Render()override;
	void OnDestroy(Object* pObj)override;
public: // �Լ��� Ŭ���� ���ο� ���� �Է��ϸ� ���� ó���ȴ�.
	virtual Object* Clone()override // ����ó��
	{
		return new Alatreon(*this);
	}
public:
	Alatreon();
	Alatreon(INFO _Info) : Object(_Info) {};
	~Alatreon();
};

