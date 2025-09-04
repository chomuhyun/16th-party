#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Player
{
public: // ����Լ�

	void levelUp();

	void useItem(int index); // ������ ���

	void displayStatus(); // ĳ���� �������ͽ� â

private: // �������

	//���� ���ݷ� �ʱ�ü�� ����
	string name;
	int level;
	int health;
	int MaxHealth;
	int attack;
	int experience;
	int gold;

	vector<Item*>inventory;


};