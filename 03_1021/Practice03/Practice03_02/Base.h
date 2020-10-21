#ifndef BASE_H
#define BASE_H


// ���N���X(�e�N���X)
class Base
{
public:
	Base();
	virtual ~Base();

public:
	// �����̋�`���ƁA�������������Ă��邩����
	// �֐��錾�̑O��virtual ������ƁA����͉��z�֐��ɂȂ�
	virtual bool CheckHit(int x, int y, int width, int height);

	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;

	int		m_Width;	// �����蔻��_��
	int		m_Height;	// �����蔻��_����
};

#endif // BASE_H
