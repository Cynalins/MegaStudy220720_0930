#pragma once

template <typename T>
inline void Safe_Release(T* _Obj)
{
	if (_Obj)
	{
		delete _Obj;
		_Obj = nullptr;
	}
}

#define ErorrMessage(str) (\
cout << "Erorr : where (" << __FILE__ << ") " << __LINE__ << endl;\
system("pause");)

/*
bool Failed()
{
	if()
}

#define FALED(std){\

}
*/
#define FAILED(Obj) {\
	if(Obj == nullptr)\
	{
		ErorrMessage(str)\
	}\
}

const int KEYID_UP		= 0x00000001; // 1
const int KEYID_DOWN	= 0x00000002; // 2
const int KEYID_LEFT	= 0x00000004; // 4
const int KEYID_RIGHT	= 0x00000008; // 8
const int KEYID_SPACE	= 0x00000010; // 16
const int KEYID_RETURN	= 0x00000020; // 32
const int KEYID_ESC		= 0x00000040; // 64
const int KEYID_CTRL	= 0x00000080; // 128
const int KEYID_ALT		= 0x00000100; // 256


