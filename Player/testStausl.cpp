#include "Playerl.h"
#include <iostream>
using namespace std;

//�г��� ��� ���� ü�� MAXü�� ���� ����ġ �κ��丮
void Player::displayStatus()
{
	cout << " * Character status * " << endl;
	cout << "======================" << endl;
	cout << "�г��� : " << name << endl;
	cout << "Level : " << level << endl;
	cout << "HP : " << health << endl;
	cout << "���ݷ� : " << attack << endl;
	cout << "����ġ : " << experience << endl;
	cout << "��� : " << gold << endl;
	cout << "======================" << endl;

}