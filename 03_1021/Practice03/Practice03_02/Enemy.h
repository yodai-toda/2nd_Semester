
#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"

//--------------------
// エネミークラス
//--------------------
// 基底クラス(Base)を継承する
// 派生クラス名 : public(or private) 基底クラス名
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

private:
	// 行動管理用の変数
	int m_Routine;
};

#endif  // ENEMY_H
