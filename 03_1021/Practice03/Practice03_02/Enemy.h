
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

public:
	// 引数の矩形情報と、自分が当たっているか判定
	bool CheckHit(int x, int y, int width, int height);

private:
	// 行動管理用の変数
	int m_Routine;
};

#endif  // ENEMY_H
