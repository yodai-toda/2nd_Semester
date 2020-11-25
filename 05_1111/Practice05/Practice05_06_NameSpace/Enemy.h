#ifndef ENEMY_H
#define ENEMY_H

// namespace 名前空間の書き方
// namespace namespaceの名前
// {
//		// グローバル変数や、クラス定義、など
// }

// Enemy名前空間
namespace Enemy
{
	static const int Max = 10;	// 敵最大数	

	// namespaceに属しているデータを使う時の書き方(namespaceの内)
	// namespace名:: は省略出来る
	void PrintMax()
	{
		printf("敵の最大数 = %d\n", Max);
	}
}



#endif //ENEMY_H

