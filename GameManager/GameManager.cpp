#include <iostream>
#include "Monster.h"
#include "Player.h"
#include <memory>

using namespace std;

class GameManager
{
public:
	GameManager();
	~GameManager();

	void generateMonster();
	void battle();
	

	int generateBossMonster()
	{

	}

	void visitShop()
	{

	}

	void displayInventory()
	{

	}
	
private:
	Player player;
	unique_ptr<Monster> nearbyMonster;
};

void GameManager::generateMonster()
{
	nearbyMonster = unique_ptr<Monster>();
	cout << "���� : " << nearbyMonster->getName() << "��(��) ��Ÿ�����ϴ�!" << endl;
}

void GameManager::battle()
{

}

GameManager::GameManager() : player("Hero", 1, 200, 30 , 0)
{
}


GameManager::~GameManager()
{
}