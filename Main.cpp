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
		cout << "Ű���� ���� Ű 1, 2, 3 �߿� �ϳ��� ��������" << endl;
		int input;
		cin >> input;
		TextMonster(input);
	}
	
	
}

void TextMonster(int input)
{
	cout << endl;
	cout << endl;
	// �÷��̾��� ���ͷ���
	switch (input)
	{
	case 1:
		cout << "���! ���� �����!!!" << endl;
		cout << "ü�� : " << MI.WolfHP << endl;
		cout << endl;
		cout << endl;
		Battle(3, 3, 3);
		
		break;
	case 2:
		cout << "���! Ȳõ �����!!!" << endl;
		cout << "ü�� : " << MI.DemonHP << endl;
		cout << endl;
		cout << endl;
		Battle(3, 3, 3);
		break;
	case 3:
		cout << "���! ������ ���ִ�!!!" << endl;
		cout << "ü�� : " << MI.SlimeHP << endl;
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
	cout << "���Ͱ� 0~3���̿� ���ڷ� ����� �����մϴ�." << endl;
	cout << "1~3������ ���ڸ� 3ȸ �Է��Ͽ� ���Ͱ� ������ ���ڿ� ���� ���ڸ� �Է��ϴ� ��� �¸��մϴ�." << endl;
	cout << "������ �����մϴ�. Ű���� 'R' ��ư�� ��������." << endl;
	cin >> UserInteractBTN;
	

	if (UserInteractBTN == 'r')
	{ 
		cout << "���� ����!!!" << endl;
		cout << "���Ͱ� �����߽��ϴ�. ���ڸ� �Է��ϼ���!!!" << endl;
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
			cout << "����! 2�� Ʋ�ȴ�!!!" << endl;
			cout << "������ " << dice_0 << " " << dice_1 << " " << dice_2 << "����." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_0 && UserBattle == dice_1)
		{
			cout << "���� 1�� Ʋ�ȴ�!!!" << endl;
			cout << "������ " << dice_0 << " " << dice_1 << " " << dice_2 << "����." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_0 && UserBattle == dice_2)
		{
			cout << "���� 1�� Ʋ�ȴ�!!!" << endl;
			cout << "������ " << dice_0 << " " << dice_1 << " " << dice_2 << "����." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_1 && UserBattle == dice_2)
		{
			cout << "���� 1�� Ʋ�ȴ�!!!" << endl;
			cout << "������ " << dice_0 << " " << dice_1 << " " << dice_2 << "����." << endl;
			cout << endl;
			cout << endl;
		}
		else if (UserBattle == dice_0 && UserBattle == dice_1 && UserBattle == dice_2)
		{
			cout << "���~ �� �����~~~" << endl;
			cout << "������ " << dice_0 << " " << dice_1 << " " << dice_2 << "����." << endl;
			cout << endl;
			cout << endl;
		}
		else
		{
			cout << "�Ѱ��� �����ߴٴ�....�Ф�" << endl;
			cout << "������ " << dice_0 << " " << dice_1 << " " << dice_2 << "����." << endl;
			cout << endl;
			cout << endl;
		}
		
	}
	else
	{
		cout << "������ �����ϴ�. Ű���� 'R' ��ư�� ��������." << endl;
	}

	
	return 0;
}
