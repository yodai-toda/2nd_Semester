#include <stdio.h>
#include <stdlib.h>
#include <string>	// string���������߂̃w�b�_�[
#include <iostream> // C++�Ŋg�����ꂽ���o�͗p�̃w�b�_�[

int main()
{
	// C����̕����A������
	char word = 'a';					// 1����
	char name[] = "yodai toda";			// �����z��
	const char* cstr = "Hello World!";	// const char �|�C���^�^


	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	// string�^�̏������i���������@���낢��j
//	std::string str = "������";
//	std::string str;			// ""(�����)
//	std::string str = "";		// ""(�����)
//	std::string str = "ABC";	// "ABC"
//	std::string str("ABC");		// "ABC"
	std::string str2(3, 'A');	// "AAA"
	std::string str = str2;		// "AAA"

	// C����̊֐���string�^�ɓ��͂���Ă��镶������g���ɂ�
	// .c_str()�Ƃ����֐��ŁA�A������̃|�C���^���󂯎��K�v������
//	printf("%s\n", str.c_str());

	// C++�I�ȏ�����(iostream��string�̃C���N���[�h���K�v)
	std::cout << str << std::endl;

	// �����T�C�Y���擾 .size() or .length()
	std::cout << "str size = " << str.size() << std::endl;

	// �����̑}�� +=. .push_back(), append(), insert()
	str += "BBC";			// "AAABBC"		�����ɕ������ǉ�
	str.push_back('D');		// "AAABBCD"	�����ɂP������ǉ�
	str.append("EE");		// "AAABBCDEE"	�����ɕ������ǉ�
	str.insert(1, "FG");	// "AFGAABBCDEE"�w��̏ꏊ�ɁA�������ǉ�
	std::cout << str << std::endl;

	// �����̌��� .find()
	str = "ABC ABC";
	int index = str.find('C');		// 2 �擪����P������T��
	index     = str.find("BC");		// 1 �擪���當�����T��
	index     = str.find("BC", 2);	// 5 �w��̈ʒu(2)���當�����T��
	index     = str.find("Z");		// -1 ����
									// std::string::npos���g���Ĕ��肷��
//	std::string::npos;

	// ���ɂ�
	// .rfind()					��납�猟��
	// .find_first_of()			�w�蕶�����A�擪���猟��
	// .find_last_of()			�w�蕶�����A�Ōォ�猟��
	// .find_first_not_of()		�w�蕶���łȂ��������A�ŏ����猟��
	// .find_last_not_of()		�w�蕶���łȂ��������A�Ōォ�猟��

	// �����̒u������ .repalce(�������ځA���������A�u������������)
	str = "ABC ABC";
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);	// "AX ABC"
	std::cout << str << std::endl;

	// �����̍폜 .clear()
	str.clear();
	std::cout << str << std::endl;

	system("pause");
	return 0;
}
