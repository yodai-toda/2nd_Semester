#ifndef POSITION_H
#define POSITION_H

/* テンプレートクラス
■概要
	クラスのメンバに対してテンプレートを使ったクラス

■書き方
	template <class T>
	class クラス名
	{
		T メンバ変数；

		T 関数名(引数)
		{
		}
	};

	// クラス外に定義を書く場合
	template <typename パラメータ名>
	戻り値の型 クラス名<パラメータ名>::関数名(引数)
	{
	
	}

■補足
	・テンプレートを使ったクラスのことを汎用クラスと呼んだりする
	・typenameとclassについては、その機能に違いはない
	　そのテンプレートを使う時の T の型が class であるかのうせいがあるなら class
	　intや、floatなどのデータ型である場合は typename を使うルールにすることで
	　コードの可読性を上げることがあるかも…。
	・ T と書いた部分は、変数と同様にどのような名前でも構わない
	　'T'emplateなので、 T として解説している技術書やサイトが多い

■注意点
	クラスのテンプレートについては、基本的に定義(実装)も含め、
	すべてヘッダーファイルに書くようにする
	※cppを用意してそちらに定義(実装)を書くと、対策をとらない限りエラーが出てしまう
*/

template <class T>
class Position
{
public:
	Position()
		: m_PosX( 0 )
		, m_PosY( 0 )
	{
	}

public:
	void SetPosX( T x_ ){ m_PosX = x_; }
	void SetPosY( T y_ ){ m_PosX = y_; }

	T GetPosX() const { return m_PosX; }
	T GetPosY() const { return m_PosY; }

	// + のオーバーロード(クラス外での定義用)
	T operator + (const Position& pos_);
	// = のオーバーロード(クラス外での定義用)
	T& operator = (const Position& pos_);

private:
	T m_PosX;
	T m_PosY;
};

// テンプレートクラスの関数定義(クラス外)
// + オーバーロード(クラス外での実装例用)
template <class T>
T Position<T>::operator + (const Position& pos_)
{
	Position ans;	// 上で<T>型用のPositionであると宣言しているので、ここでは不要
	ans.SetPosX( this->GetPosX() + pos_.GetPosX() );
	ans.SetPosY( this->GetPosY() + pos_.GetPosY() );

	return ans;
}

// テンプレートクラスの関数定義(クラス外)
// = オーバーロード(クラス外での実装例用)
template <class T>
T& Position<T>::operator = (const Position& pos_)
{
	this->GetPosX( pos_.GetPosX() );
	this->GetPosY( pos_.GetPosY() );

	return *this;
}


#endif	// POSITION_H

