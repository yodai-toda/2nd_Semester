#include "Base.h"

Base::Base()
{

}

Base::~Base()
{

}

void Base::SetHp(int hp)
{
	m_Hp = hp;
}

void Base::SetPos(float x, float y)
{
	m_PosX = x;
	m_PosY = y;
}

void Base::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Base::GetHp()
{
	return m_Hp;
}

float Base::GetPosX()
{
	return m_PosX;
}

float Base::GetPosY()
{
	return m_PosY;
}

float Base::GetMoveSpeed()
{
	return m_MoveSpeed;
}



