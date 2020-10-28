#include <stdio.h>
#include "Test.h"

// sutaticメンバ変数の書き方(定義部)
// 型名 クラス名::変数名 (= 初期化)
// 注：staticメンバ変数は、宣言と別に実体を作っておく必要がある
//    実体を作る時は、必ずcppに書くこと
int Test::staticValue = 0;
int Test::instanceCount = 0;

Test::Test()
{
	value = 0;

	instanceCount++;
}

Test::~Test()
{
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf("value       = %d\n", value);
	printf("staticValue = %d\n", staticValue);
}

// staticメンバ関数の書き方(定義部)
// 戻り値 関数名(引数)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;

	// 注：staticメンバ関数の中では、
	//     static出ないメンバ変数を操作できることが出来ない
	// value = value_; // error!
}

void Test::PrintCount()
{
	printf("Instance Count = %d\n", instanceCount);
}
