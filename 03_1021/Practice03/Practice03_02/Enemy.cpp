
#include <stdio.h>
#include "Enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy�F�R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy�F�f�X�g���N�^\n");
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

