#include <iostream>
#include <vector>
#include "Player.h"

using namespace std;

//�ʿ��Ѱ�
// �г��� ��� ���� ü�� MAXü�� ���� ����ġ �κ��丮

void Player::levelUp() // �������� ü�� Ǯ ȸ��
{
	health += (level * 20); // ������ ü��
	attack += (level * 5); // ������ ���ݷ�

}