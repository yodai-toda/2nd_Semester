#include "Base.h"
#include <stdio.h>

Base::Base()
{
	m_Hp = 0;
	m_PosX = 0.0f;
	m_PosY = 0.0f;
	m_MoveSpeed = 0.0f;
	
	m_Width = 10;
	m_Height = 10;
}

Base::~Base()
{

}

// 引数の矩形情報と、自分が当たっているか判定
bool Base::CheckHit(int x, int y, int width, int height)
{
	// 仮に、当たらなかったことにする
	printf("Base：当たりませんでした！\n");
	return false;
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



