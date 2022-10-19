#pragma once

struct Vector3
{
	float x, y, z;

	Vector3() : x(0), y(0), z(0) {};

	Vector3(float _x, float _y) : 
		x(_x), y(_y), z(0) {};

	Vector3(float _x, float _y, float _z) : 
		x(_x), y(_y), z(_z) {};

	// & <= ���۷��� ������. 
	Vector3 operator*(const float& _f)const{return Vector3(this->x * _f,this->y * _f,this->z * _f);}
	Vector3 operator/(const float& _f)const
	{
		return Vector3
		(
			this->x / _f,
			this->y / _f,
			this->z / _f
		);
	}

	Vector3 operator+(Vector3 _v1)
	{
		return Vector3
		(
			this->x + _v1.x,
			this->y + _v1.y,
			this->z + _v1.z
		);
	}

	Vector3 operator-(Vector3 _v1)
	{
		return Vector3
		(
			this->x - _v1.x,
			this->y - _v1.y,
			this->z - _v1.z
		);
	}
	// const�� ���� ���� = �ܺ� �����͸� �޾������ �� �����Ͱ�
	// ���Ƿ� �ٲ��� �ʰ� �ϱ� ���ؼ�(���ϴ� ���� ��� ���ؼ�)
	Vector3 operator+=(const Vector3& _v1)
	{
		//_v1.x = 100;

		this->x += _v1.x;
		this->y += _v1.y;
		this->z += _v1.z;
		return Vector3
		(
			this->x,
			this->y,
			this->z
		);
	}

	Vector3 operator-=(const Vector3& _v1)
	{
		this->x -= _v1.x;
		this->y -= _v1.y;
		this->z -= _v1.z;
		return Vector3
		(
			this->x,
			this->y,
			this->z
		);
	}


};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};