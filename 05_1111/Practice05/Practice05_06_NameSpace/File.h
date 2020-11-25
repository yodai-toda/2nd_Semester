
#ifndef FILE_H
#define FILE_H

// namespace 名前空間の書き方(入れ子)
/*
namespace namespaceの名前その１
{
	namespace namespaceの名前その２
	{
			// グローバル変数や、クラス定義、など
	}
}
*/

// ファイル
namespace File
{
	// テクスチャ
	namespace Texture
	{
		static const int Max = 100;
	}

	// サウンド
	namespace Sound
	{
		static const int Max = 20;
	}

	static const int Max = Texture::Max + Sound::Max;
}

#endif	// #ifndef FILE_H

