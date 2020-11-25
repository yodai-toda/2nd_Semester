#ifndef VECTOR_2D_H
#define VECTOR_2D_H

//	必要な演算子のオーバーロードや、関数の用意などを行った、実例バージョン

// 2次元ベクトル
class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	// ベクトルの長さを求める
	float GetLength() const;

	// = のオーバーロード
	Vector2D& operator = (const Vector2D& vec);
	// += のオーバーロード
	Vector2D& operator += (const Vector2D& vec);
	// + のオーバーロード
	Vector2D operator + (const Vector2D& vec);
	// + のオーバーロード(m_X,m_Yへ同じ数値を足す)
	Vector2D operator + (float val);
	// > のオーバーロード
	bool operator > (const Vector2D& vec) const;

private:
	float m_X;
	float m_Y;
};

#endif // VECTOR_2D_H
