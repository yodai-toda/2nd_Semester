#ifndef ENEMY_MANAGER_H
#define ENEMY_MANAGER_H

#include <vector>

// �G�l�~�[�Ǘ��N���X
class EnemyManager
{
public:
	EnemyManager();		// �R���X�g���N�^
	~EnemyManager();	// �f�X�g���N�^

public:
	// �G�l�~�[�𐶂ݏo��
	class Base* CreateEnemy(int enemy_type);
	// �G�l�~�[���폜����
	bool DestroyEnemy(class Base* ptr);
	// �G�l�~�[�̏��������s����
	void Exec();
	// �G�l�~�[�̕`������s����
	void Draw();
	// �w�肵����`��Enemy�̓����蔻����Ƃ�
	class Base* CheckHit(int x, int y, int width, int height);

private:
	// �쐬�����G�l�~�[���Ǘ�����
	std::vector<class Base*> m_Enemies;
};


#endif // ENEMY_MANAGER_H
