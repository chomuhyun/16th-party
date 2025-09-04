#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;


int main()
{
	string nickname;
	bool b = true;


	
	while (b)
	{
		cout << "닉네임을 입력해주세요 ";
		cin >> nickname;
		
		//닉네임이 공란일때 다시입력 문구출력

		if(/*조건 */)
			{
			cout << "닉네임을 다시 입력해주세요 ";
			}

		else
		{
			b = false;
		}
	}




	return 0;

}