#pragma once
#include "Item.h"
#include <string>

class AttackBoost : public Item {
private:
	std::string name; // ������ �̸� (ex: �Ŀ� ����)
	int attackIncrease; // ������ (ex: ���ݷ�+10)
public:
	AttackBoost(std::string n, int Increase); //������: �̸�(n), ȸ����(Restore)
	std::string getName() override; //�θ�Ŭ���� getName(������ �̸� ��ȯ) �޾ƿ� ����
	void use(character: Character*) override; //�θ�Ŭ����(���� ���) �޾ƿ� ����
};