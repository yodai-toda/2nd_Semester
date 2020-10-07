#include "Common.h"
#include"Unit.h"

Unit::Unit()
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
Unit::~Unit()
{

}
// Unit“à‚ÌŠe•Ï”‚ğprintf‚Åo—Í
void Unit::PrintStatus()
{	
	printf("unit\n");
	printf("hp :%d\n", m_hp);
	printf("str:%d\n", m_str);
	printf("mag:%d\n", m_mag);
	printf("tec:%d\n", m_tec);
	printf("spd:%d\n", m_spd);
	printf("def:%d\n", m_def);
	printf("luc:%d\n", m_luc);
	printf("mde:%d\n", m_mde);
}
