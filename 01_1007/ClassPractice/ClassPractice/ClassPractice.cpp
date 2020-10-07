#include <stdio.h>
#include <stdlib.h>

class Fighter
{
public:
	Fighter();
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;	
};

Fighter::Fighter()
{
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;

}
Fighter::~Fighter()
{

}

int main()
{
	Fighter fighter;
	// fighter内の各変数をprintfで出力	
	printf("fighter\n");	
	printf("hp :%d\n",fighter.m_hp);
	printf("str:%d\n",fighter.m_str);
	printf("mag:%d\n",fighter.m_mag);
	printf("tec:%d\n",fighter.m_tec);
	printf("spd:%d\n",fighter.m_spd);
	printf("def:%d\n",fighter.m_def);
	printf("luc:%d\n",fighter.m_luc);
	printf("mde:%d\n",fighter.m_mde);	

	system("pause");
	return 0;
}

