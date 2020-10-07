#include "Common.h"
#include "Unit.h"


int main()
{
	Unit unit;
	// Unit内の各変数をprintfで出力	
	printf("unit\n");	
	printf("hp :%d\n",unit.m_hp);
	printf("str:%d\n",unit.m_str);
	printf("mag:%d\n",unit.m_mag);
	printf("tec:%d\n",unit.m_tec);
	printf("spd:%d\n",unit.m_spd);
	printf("def:%d\n",unit.m_def);
	printf("luc:%d\n",unit.m_luc);
	printf("mde:%d\n",unit.m_mde);	

	system("pause");
	return 0;
}

