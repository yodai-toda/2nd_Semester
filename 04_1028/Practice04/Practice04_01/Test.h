#ifndef TEST_H
#define TEST_H

class Test
{
public:
	Test();
	~Test();

	void SetValue(int value);
	int GetValue();
	void PrintValue();

	// staticメンバ関数の書き方(宣言部)
	// static 戻り値 関数名(引数)
	static void SetStaticValue(int value_);

	// Testクラスを使っている実体が何個あるか表示
	static void PrintCount();

private:
	int value;

	// staticメンバ変数の書き方(宣言部)
	// static 型名 変数名
	static int staticValue;

	// 作られている実体の数
	static int instanceCount;
};

#endif //TEST_H
