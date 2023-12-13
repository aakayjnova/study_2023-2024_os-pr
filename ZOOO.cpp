#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

class Animals
{
public:

	int age=1;
	string location;
	string name;

public:
	
	//Animals() {};
;	//Animals(string name, int age, string location)
	//{this->name = name;this->age = age;this->location = location;}

	virtual void make_move() = 0;
	void GetInfo()
	{
		cout << "��� ���������: " << name << ", �������: " << age << ", ����� ��������: " << location << "." << endl << endl;
	}

};

class Lion :public Animals
{
public:
	
	//Lion() {};
	//Lion(string name, int age, string location) : Animals(name, age, location) {};

	void make_move() override
	{
		cout << "\n\t��� ������� � ���! ���������!" << endl << endl;
	};
	void make_sound()
	{
		cout << "\n\t������!" << endl << endl;
	}
	void feedL() 
	{
		int hL = 0;
		cout << "\n������� ���������� ������ �������: ";
		cin >> hL;
		if (hL > 10)
		{
			cout << "\n\t��� ���� �� ��������." << endl << endl;
		}
		else
		{
			if (hL == 0)
			{
				cout << "\n\t˸�� ������� �� ��� ��������� �������.����� ������� ��� ���." << endl << endl;
			}
			else
			{
				cout << "\n\t���� �����������. �� ����� ���." << endl << endl;
			}
		}
	}
	void make_angry()
	{
		cout << "\n\t��� ����� ������! �������� �������� �� ������." << endl << endl;
	}
};

class Parrot :public Animals
{
public:

	//Parrot() {};
	//Parrot(string name, int age, string location) : Animals(name, age, location) {};

	void make_move() override
	{
		cout << "\n\t������� �������� ����� � ������ � ������������ ������� ���." << endl << endl;
	}
	void make_sing()
	{
		cout << "\n\t��������, �������� ���� ���! �� ����, �� ���� ������ ��..." << endl << endl;
	}
	void feedP()
	{
		int hR = 0;
		cout << "\n\t������� ���������� ������ ������: ";
		cin >> hR;
		if (hR > 30)
		{
			cout << "\n\t������� ������ �� ���������." << endl << endl;
		}
		else
		{
			if (hR == 0)
			{
				cout << "\n\t���� ��������! ��� ���� ���!" << endl << endl;
			}
			else
			{
				cout << "\n\t���� ��������.���� ����� ���!" << endl << endl;
			}
		}
	}
	void make_talk()
	{
		cout << "\n\t���� �������, ���� �������!" << endl << endl;
	}
};

class Monkey :public Animals
{
public:

	//Monkey() {};
	//Monkey(string name, int age, string location) : Animals(name, age, location) {};

	void make_move() override
	{
		cout << "\n\t�������� �������� ��������� �����." << endl << endl;
	}
	void make_clear()
	{
		cout << "\n\t���� �������� ����� ������ ����." << endl << endl;
	}
	void feedM()
	{
		int hM = 0;
		cout << "\n������� ���������� �������: " << endl;
		cin >> hM;
		if (hM > 9)
		{
			cout << "\n\t������� �����! �������� ��������������� �� ��������� ������ � ������." << endl << endl;
		}
		else
		{
			if (hM == 0)
			{
				cout << "\n\t�������� ���������� ��� ������ � ����� �� ������. �������� �����!" << endl << endl;
			}
			else
			{
				cout << "\n\t���� ������������ ��������." << endl << endl;
			}
		}

	}
	void steal_money()
	{
		cout << "\n\t������! �������� ������ � ��� ������. ������������ �� �������� ��� ��." << endl << endl;
	}

};

void go_onRight(), go_onLeft(), go_Straight();

void go_onRight()
{
	Lion lion;
	lion.age = 6;
	lion.location = "�����";
	lion.name = "˸��";

	int x;

	cout << "\n\n�������� �����! �����!" << endl << endl;

	do
	{
	cout << "\n� ��� � ���! ��� ����� ������������?" << endl << endl;
	cout << "1. ���������� ����������." << endl << endl;
	cout << "2. ��������� ���������." << endl << endl;
	cout << "3. ��������� ������." << endl << endl;
	cout << "4. ���������." << endl << endl;
	cout << "5. ���������" << endl << endl;
	cout << "6. ��������� �� ����� � �������." << endl << endl;

	do
	{
		cin >> x;
		if (x < 1 || x > 6) cout << "\n������� ��������� �����." << endl << endl;
	} while (x < 1 || x > 6);


	switch (x)
	{
	case 1: lion.GetInfo();
		break;
	case 2: lion.make_move();
		break;
	case 3: lion.make_sound();
		break;
	case 4: lion.feedL();
		break;
	case 5: lion.make_angry();
		break;
	}
} while (x != 6);
return;
}

void go_onLeft()
{
	Parrot parrot;
	parrot.age = 10;
	parrot.location = "���������";
	parrot.name = "����";

	int y;

	cout << "\n\n�����! ���� ��� ���!" << endl << endl;

	do
	{
		cout << "\n������, ��� ����! ���� �������!" << endl << endl;
		cout << "1. ���������� ����������." << endl << endl;
		cout << "2. ��������� ���������." << endl << endl;
		cout << "3. ��������� ����." << endl << endl;
		cout << "4. ���������." << endl << endl;
		cout << "5. ��������� ��������." << endl << endl;
		cout << "6. ��������� �� ����� � �������." << endl << endl;

		do
		{
			cin >> y;
			if (y < 1 || y > 6) cout << "\n����� ������ ����. ������ ������ �����." << endl << endl;
		} while (y < 1 || y > 6);


		switch (y)
		{
		case 1: parrot.GetInfo();
			break;
		case 2: parrot.make_move();
			break;
		case 3: parrot.make_sing();
			break;
		case 4: parrot.feedP();
			break;
		case 5: parrot.make_talk();
			break;
		}

	} while (y != 6);
	return;
}

void go_Straight()
{
	Monkey monkey;
	monkey.age = 7;
	monkey.location = "������";
	monkey.name = "����";

	int z;

	cout << "\n\n�������� ���� ��������! ������ ���!" << endl << endl;

	do
	{
		cout << "\n�� ������! �����������, ��� ����." << endl << endl;
		cout << "1. ���������� ����������." << endl << endl;
		cout << "2. ��������� ���������." << endl << endl;
		cout << "3. ������� �������." << endl << endl;
		cout << "4. ���������." << endl << endl;
		cout << "5. ������� �����." << endl << endl;
		cout << "6. ��������� �� ����� � �������." << endl << endl;

		do
		{
			cin >> z;
			if (z < 1 || z > 6) cout << "\n����� ���� �� ������� ��� ��?" << endl << endl;
		} while (z < 1 || z > 6);

		switch (z)
		{
		case 1:monkey.GetInfo();
			break;
		case 2: monkey.make_move();
			break;
		case 3: monkey.make_clear();
			break;
		case 4: monkey.feedM();
			break;
		case 5: monkey.steal_money();
			break;
		}
	} while (z != 6);
	return;
}

int main()
{
	Lion lion;
	Parrot parrot;
	Monkey monkey;
	
	setlocale(LC_ALL, "Russian");
	int selectAction;

	cout << "\t\t����� ���������� � �������!" << endl << endl;

	do
	{
		cout << "\n�������� ����������� ��������: " << endl << endl;
		cout << "1. ����� ������� - ����� ����������." << endl << endl;
		cout << "2. ����� ������ - � �������� ����������." << endl << endl;
		cout << "3. ����� ����� - ���� ��������� �����������." << endl << endl;
		cout << "4. ���������� ���� - ����� �����, ��������� ������." << endl << endl;

		do
		{
			cin >> selectAction;
			if (selectAction < 1 || selectAction>4) cout << "\n����� �� ������ - ������� �� ����." << endl << endl;
		} while (selectAction < 1 || selectAction>4);


		switch (selectAction)
		{
		case 1: go_onRight();
			break;

		case 2: go_onLeft();
			break;

		case 3: go_Straight();
			break;

		default: cout << "\n�� ��������! �� ��������� ���." << endl << endl;
		}
	} while (selectAction != 4);

	return 0;

}