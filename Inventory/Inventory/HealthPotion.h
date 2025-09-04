#pragma once
#include "Item.h"
#include <string>

class HealthPotion : public Item {
private:
	std::string name; // ������ �̸� (ex: ���� ����)
	int healthRestore; // ȸ���� (ex: ü��+50)
public:
	HealthPotion(std::string n, int Restore); //������: �̸�(n), ȸ����(Restore)
	std::string getName() override; //�θ�Ŭ���� getName(������ �̸� ��ȯ) �޾ƿ� ����
	void use(character: Character*) override; //�θ�Ŭ����(���� ���) �޾ƿ� ����
};