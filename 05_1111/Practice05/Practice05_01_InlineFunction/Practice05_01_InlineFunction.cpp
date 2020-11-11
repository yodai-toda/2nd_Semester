/*
インライン関数とは処理の高速化で使用される手法
メリット
	関数呼び出しの負荷がなくなるため、処理の高速化が見込める
デメリット
	関数の規模が大きいと判断された場合、展開されない
	展開するという特性上、ファイルサイズが増大する
	展開するという特性上、インライン関数を変更した場合のビルドファイル数が増える
	クラスの場合、ヘッダーファイルに直接コーディングするので隠蔽性が下がる
*/


#include <iostream>
#include <Windows.h>
#include <stdio.h>

#define USE_INLINE	// インライン関数を使うか

/*
インライン関数の書き方
inline 戻り値の型 関数名(引数)
{
	処理
}
*/

inline int AddSum(int a, int b)
{
	return (a + b);
}

// クラスにインライン関数を定義するには
// クラスの宣言部分に直接関数定義を書けばよい
class Test
{
public:
	// 関数の宣言時に定義を書いてしまうと、
	// 自動的にinline関数として扱われる
	int AddSum(int a, int b){ return (a + b); }
};

#ifdef USE_INLINE
inline unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}

#else 

unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}

#endif

int main()
{
	int a = AddSum(1, 3);
	// コンパイル時、 a = (a + b) -> a = (1 + 3) に展開される

	LARGE_INTEGER f;
	if (!QueryPerformanceFrequency(&f))
	{
		return 0;
	}

	LARGE_INTEGER s, e;
	QueryPerformanceCounter(&s);
	unsigned int pow = 0;
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 10000; j++)
		{
			pow = Pow(i, j);
		}
	}
	printf("pow = %d\n", pow);

	QueryPerformanceCounter(&e);
	double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
	printf("time = %f sec\n", t);

	return 0;
}

