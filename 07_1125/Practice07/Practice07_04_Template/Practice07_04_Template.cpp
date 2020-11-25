#include <iostream>

/* テンプレート(template)
　C++のテンプレートとはクラスのメンバ変数や関数の引数や戻り値を
　定義する際、あいまい状態で定義できる機能

	// 書式例
	template <typename パラメータ名>
	パラメータ名　関数名(パラメータ名 引数1, パラメータ名 引数2 ...)
	{
	}
*/

// 引数、戻り値の方はあいまいだがその数や処理内容は決まっているCalcSum関数
template <typename T>
T CalcSum(T a, T b)
{
	return (a + b);
}

// 半径rと、円周率を渡し、円の面積を計算する関数
// piは整数かもしれないし、実数かもしれない
template <typename T, typename U>
double CalcCircleArea( T r, U pi )
{
	return (r * r) * pi;
}

int main()
{
	printf("int   CalcSum(10,    10)    = %d\n", CalcSum(10, 10));
	printf("float CalcSum(20.0f, 20.0f) = %f\n", CalcSum(20.0f, 20.0f));

	printf("int r float pi CalcCircleArea = %f\n", CalcCircleArea(5, 3.14f));
	printf("int r int   pi CalcCircleArea = %f\n", CalcCircleArea(2, 3));
	return 0;
}

