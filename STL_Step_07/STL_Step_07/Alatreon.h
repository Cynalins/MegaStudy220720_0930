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
public: // 함수를 클래스 내부에 직접 입력하면 먼저 처리된다.
	virtual Object* Clone()override // 복사처리
	{
		return new Alatreon(*this);
	}
public:
	Alatreon();
	Alatreon(INFO _Info) : Object(_Info) {};
	~Alatreon();
};

