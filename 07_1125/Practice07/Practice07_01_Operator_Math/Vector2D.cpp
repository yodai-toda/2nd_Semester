#include "Vector2D.h"

Vector2D::Vector2D()
	: m_X( 0.0f )
	, m_Y( 0.0f )
{
}

Vector2D::Vector2D(float x_, float y_)
	: m_X( x_ )
	, m_Y( y_ )
{
}

// = のオーバーロード
Vector2D& Vector2D::operator = (const Vector2D& vec)
{
	this->m_X = vec.m_X;
	this->m_Y = vec.m_Y;
	return *this;
}

// += のオーバーロード
// 左辺値へ、計算して代入を行うので、基本的には代入演算子と同じ形になる
Vector2D& Vector2D::operator += (const Vector2D& vec)
{
	this->m_X += vec.m_X;
	this->m_Y += vec.m_Y;
	return *this;
}

// + のオペレーターオーバーロード
Vector2D Vector2D::operator + (const Vector2D& vec)
{
	Vector2D ans;
	ans.m_X = this->m_X + vec.m_X;
	ans.m_Y = this->m_Y + vec.m_Y;
	return ans;
}