#include <stdio.h>
#include "Test.h"

// sutatic�����o�ϐ��̏�����(��`��)
// �^�� �N���X��::�ϐ��� (= ������)
// ���Fstatic�����o�ϐ��́A�錾�ƕʂɎ��̂�����Ă����K�v������
//    ���̂���鎞�́A�K��cpp�ɏ�������
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

// static�����o�֐��̏�����(��`��)
// �߂�l �֐���(����)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;

	// ���Fstatic�����o�֐��̒��ł́A
	//     static�o�Ȃ������o�ϐ��𑀍�ł��邱�Ƃ��o���Ȃ�
	// value = value_; // error!
}

void Test::PrintCount()
{
	printf("Instance Count = %d\n", instanceCount);
}
