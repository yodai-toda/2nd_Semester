#include "Character.h"
#include <stdio.h>
#include <string.h>

// デフォルトの引数付きコンストラクタ
Character::Character(const char* name, int hp, int mp)
#ifdef PATTERN_01
	: m_Hp(hp)
	, m_Mp(mp)
#else
	: m_pName(nullptr)
	, m_Hp(hp)
	, m_Mp(mp)
#endif
{
#ifdef PATTERN_01
	strcpy_s(m_pName, 32, name);
#else
	m_pName = new char[32];
	strcpy_s(m_pName, 32, name);
#endif
	printf("コンストラクタ\n");
}

#ifdef PATTERN_03
// コピーコンストラクタの中で正しく対策をとる
Character::Character(const Character& ch)
{
	m_pName = new char[32];
	strcpy_s(m_pName, 32, ch.GetName());
	printf("コピーコンストラクタ\n");
}
#endif


Character::~Character()
{
#ifndef PATTERN_01
	delete[] m_pName;
#endif
	printf("デストラクタ\n");
}

#ifdef PATTERN_02
// パラメータを表示するだけ
void PrintParam(Character* ch)
{
	printf("名前：%s\n", ch->GetName());
	printf("HP　：%d\n", ch->GetHp());
	printf("MP　：%d\n", ch->GetHp());
}
#else
// パラメータを表示するだけ
void PrintParam(Character ch)
{
	printf("名前：%s\n", ch.GetName());
	printf("HP　：%d\n", ch.GetHp());
	printf("MP　：%d\n", ch.GetHp());
}
#endif