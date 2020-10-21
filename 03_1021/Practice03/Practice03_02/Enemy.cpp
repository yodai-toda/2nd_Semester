
#include <stdio.h>
#include "Enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy：コンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemy：デストラクタ\n");
}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy：当たりませんでした！\n");
	return false;
}

