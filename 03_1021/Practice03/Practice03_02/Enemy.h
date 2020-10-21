
#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"

//--------------------
// �G�l�~�[�N���X
//--------------------
// ���N���X(Base)���p������
// �h���N���X�� : public(or private) ���N���X��
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

public:
	// �����̋�`���ƁA�������������Ă��邩����
	bool CheckHit(int x, int y, int width, int height);

private:
	// �s���Ǘ��p�̕ϐ�
	int m_Routine;
};

#endif  // ENEMY_H
