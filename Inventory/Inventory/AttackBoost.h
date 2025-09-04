#pragma once
#include "Item.h"
#include <string>

class AttackBoost : public Item {
private:
	std::string name; // 아이템 이름 (ex: 파워 포션)
	int attackIncrease; // 증가량 (ex: 공격력+10)
public:
	AttackBoost(std::string n, int Increase); //생성자: 이름(n), 회복량(Restore)
	std::string getName() override; //부모클래스 getName(아이템 이름 반환) 받아와 구현
	void use(character: Character*) override; //부모클래스(포션 사용) 받아와 구현
};