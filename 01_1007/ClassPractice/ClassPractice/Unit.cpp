#include "Common.h"
#include"Unit.h"

Unit::Unit()
{
	status._hp = 0;
	status._str = 0;
	status._mag = 0;
	status._tec = 0;
	status._spd = 0;
	status._def = 0;
	status._luc = 0;
	status._mde = 0;

}
Unit::~Unit()
{

}
// Unit“à‚ÌŠe•Ï”‚ğprintf‚Åo—Í
void Unit::PrintStatus()
{	
	printf("unit\n");
	printf("hp :%d\n", status._hp);
	printf("str:%d\n", status._str);
	printf("mag:%d\n", status._mag);
	printf("tec:%d\n", status._tec);
	printf("spd:%d\n", status._spd);
	printf("def:%d\n", status._def);
	printf("luc:%d\n", status._luc);
	printf("mde:%d\n", status._mde);
}
