
#include <stdio.h>
#include "Enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy�F������܂���ł����I\n");
	return false;
}

