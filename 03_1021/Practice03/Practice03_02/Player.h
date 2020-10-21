
#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"

//--------------------
// プレイヤークラス
//--------------------
// 基底クラス(Base)を継承する
// 派生クラス名 : public(or private) 基底クラス名
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
