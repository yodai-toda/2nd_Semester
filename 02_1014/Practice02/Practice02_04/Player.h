
#ifndef PLAYER_H
#define PLAYER_H

//--------------------
// プレイヤークラス
//--------------------
class Player
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GeyPosX();
	float GeyPosY();
	float GeyMoveSpeed();

public:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;
};

#endif  // PLAYER_H
