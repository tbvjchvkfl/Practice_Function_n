#include <iostream>
#include <stdio.h>

using namespace std;

enum MonsterType {
	Wlof,
	Demon,
	Slime
};

struct MonsterInfo {

	float WolfHP = 10.0f;
		
	float DemonHP = 1000.0f;
		
	float SlimeHP = 400.0f;	
};

MonsterInfo MI;


void TextMonster(int input);
int Battle(int a, int b, int c);

int main()
{	
	
	while(true)
	{
		cout << "키보드 숫자 키 1, 2, 3 중에 하나를 누르세요" << endl;
		int input;
		cin >> input;
		TextMonster(input);
	}
	
	
}

void TextMonster(int input)
{
	cout << endl;
	cout << endl;
	// 플레이어의 인터렉션
	switch (input)
	{
	case 1:
		cout << "우왓! 병든 늑대닷!!!" << endl;
		cout << "체력 : " << MI.WolfHP << endl;
		cout << endl;
		cout << endl;
		Battle(3, 3, 3);
		
		break;
	case 2:
		cout << "우왓! 황천 늑대닷!!!" << endl;
		cout << "체력 : " << MI.DemonHP << endl;
		cout << endl;
		cout << endl;
		Battle(3, 3, 3);
		break;
	case 3:
		cout << "우왓! 구덩이 군주닷!!!" << endl;
		cout << "체력 : " << MI.SlimeHP << endl;
		cout << endl;
		cout << endl;
		Battle(3, 3, 3);
		break;
	}
	

}

int Battle(int a, int b, int c)
{
	char UserInteractBTN = 'r';
	int UserBattle = 0;
	cout << "몬스터가 0~3사이에 숫자로 당신을 공격합니다." << endl;
	cout << "1~3까지의 숫자를 3회 입력하여 몬스터가 공격한 숫자와 같은 숫자를 입력하는 경우 승리합니다." << endl;
	cout << "전투를 시작합니다. 키보드 'R' 버튼을 누르세요." << endl;
	cin >> UserInteractBTN;
	

	if (UserInteractBTN == 'r')
	{ 
		cout << "전투 시작!!!" << endl;
		cout << "몬스터가 공격했습니다. 숫자를 입력하세요!!!" << endl;
		cin >> UserBattle;
		srand((unsigned int)time(nullptr));
		int dice_0 = 0;
		dice_0 = rand() % a + 1;

		srand((unsigned int)time(nullptr));
		int dice_1 = 0;
		dice_1 = rand() % b + 1;

		srand((unsigned int)time(nullptr));
		int dice_2 = 0;
		dice_2 = rand() % c + 1;

		if (UserBattle == dice_0 || UserBattle == dice_1 || UserBattle == dice_2)
		{
			cout << "으악! 2개 틀렸다!!!" << endl;
			cout << "정답은 " << dice_0 << " " << dice_1 << " " << dice_2 << "였다." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_0 && UserBattle == dice_1)
		{
			cout << "으악 1개 틀렸다!!!" << endl;
			cout << "정답은 " << dice_0 << " " << dice_1 << " " << dice_2 << "였다." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_0 && UserBattle == dice_2)
		{
			cout << "으악 1개 틀렸다!!!" << endl;
			cout << "정답은 " << dice_0 << " " << dice_1 << " " << dice_2 << "였다." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_1 && UserBattle == dice_2)
		{
			cout << "으악 1개 틀렸다!!!" << endl;
			cout << "정답은 " << dice_0 << " " << dice_1 << " " << dice_2 << "였다." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_0 && UserBattle == dice_1 && UserBattle == dice_2)
		{
			cout << "우와~ 다 맞췄당~~~" << endl;
			cout << "정답은 " << dice_0 << " " << dice_1 << " " << dice_2 << "였다." << endl;
			cout << endl;
			cout << endl;
		}
		else
		{
			cout << "한개도 못맞추다니....ㅠㅠ" << endl;
			cout << "정답은 " << dice_0 << " " << dice_1 << " " << dice_2 << "였다." << endl;
			cout << endl;
			cout << endl;
		}
		
	}
	else
	{
		cout << "도망은 없습니다. 키보드 'R' 버튼을 누르세요." << endl;
	}

	
	return 0;
}
