
#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"

//--------------------
// �v���C���[�N���X
//--------------------
// ���N���X(Base)���p������
// �h���N���X�� : public(or private) ���N���X��
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();
};

#endif  // PLAYER_H
