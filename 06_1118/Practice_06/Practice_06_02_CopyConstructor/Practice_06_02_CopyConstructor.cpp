
#include <iostream>
#include "CharacterBase.h"

int main()
{
	CharacterBase player(10, 8);
	CharacterBase enemy = player;	// コピーコンストラクタ呼び出し

	// 引数 attacker = player と同義になるため、
	// コピーコンストラクタが呼び出される
	enemy.ReceiveDamage(player);

	player.PrintPram();
	enemy.PrintPram();

	CharacterBase dummy = enemy.CreateCopy();
	printf("\n");
	enemy.CreateCopy();

	return 0;
}
