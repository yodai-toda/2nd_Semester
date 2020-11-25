#include "CharacterBase.h"
#include <stdio.h>

// コピーコンストラクタの書き方(定義)
//	クラス名::コンストラクタ(const クラス名& 引数名)
//	{
//	}
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::コピーコンストラクタ\n");
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}

// デフォルトの引数付きコンストラクタ
CharacterBase::CharacterBase(int hp, int mp)
	: m_Hp(hp)
	, m_Mp(mp)
{
}

CharacterBase::~CharacterBase()
{
}

// パラメータ表示
void CharacterBase::PrintPram()
{
	printf("Hp   = %d\n", m_Hp);
	printf("Mp   = %d\n", m_Mp);
}

// ダメージを与える
// 値渡しによるコピーコンストラクタ呼び出しテスト
void CharacterBase::ReceiveDamage(CharacterBase attacker)
{
	printf("--ReceiveDamage--\n");
	m_Hp -= attacker.m_Mp;
}

// 自身を複製を作る
// インスタンスを戻り値に使う時のコピーコンストラクタ呼び出しテスト
CharacterBase CharacterBase::CreateCopy()
{
	// 変数copyが有効なのは、CreateCopy内までなので、
	// 呼び出した側で使うために、戻り値変数ともいえるものに
	// 値を代入(戻り値 = copy)しているため、
	// コピーコンストラクタが呼び出される
	CharacterBase copy(m_Hp, m_Mp);
	return copy;
}
