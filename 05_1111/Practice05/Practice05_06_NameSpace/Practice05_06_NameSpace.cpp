
#include <iostream>
#include "Enemy.h"
#include "Shot.h"

int main()
{
    // namespaceに属しているデータを使うときの書き方(namespaceの外)
    // namespace::所属しているデータ
    printf("敵の最大数 = %d\n", Enemy::Max);
    printf("弾の最大数 = %d\n", Shot::Max);

    // std も名前空間
    std::cout << "std::も名前空間" << std::endl;

    return 0;
}

