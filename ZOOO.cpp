#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

class Animal
{
public:

	int age=1;
	string location;
	string name;

public:

	Animal(string name, int age, string location) {
		this->age = age;
		this->location = location;
		this->name = name;
	}
	virtual void move() = 0;
	virtual void getInfo() = 0;
	

};

class Lion :public Animal
{
public:

	int weight;
	int countFem;

	Lion(string name, int age, string location, int weight, int countFem) : Animal(name, age, location)
	{
		this->name = name;
		this->age = age;
		this->location = location;
		this->weight = weight;
		this->countFem = countFem;
	}

	void getInfo() override
	{
		cout << "\n\t��� " << name << ", ������� - " << age << ", ����� �������� - " << location << ", ��� - " << weight << ", ���������� ����� - " << countFem << "." << endl << endl;
	}
	void move() override
	{
		cout << "\n\t��� ������� � ���! ���������!" << endl << endl;
	};
	void sound()
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
	void angry()
	{
		cout << "\n\t��� ����� ������! �������� �������� �� ������." << endl << endl;
	}
};

class Parrot :public Animal
{
public:

	int lengthWings;
	string color;

	Parrot(string name, int age, string location, int lengthWings, string color) : Animal(name, age, location)
	{
		this->name = name;
		this->age = age;
		this->location = location;
		this->lengthWings = lengthWings;
		this->color = color;
	}

	void getInfo() override
	{
		cout << "\n\t������� " << name << ", ������� - " << age << ", ����� �������� - " << location << ", ����� ������� - " << lengthWings << ", ����� " << color << "." << endl << endl;
	}
	void move() override
	{
		cout << "\n\t������� �������� ����� � ������ � ������������ ������� ���." << endl << endl;
	}
	void sing()
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
	void talk()
	{
		cout << "\n\t���� �������, ���� �������!" << endl << endl;
	}
};

class Monkey :public Animal
{
public:

	string favFood;
	int lengthTail;

	Monkey(string name, int age, string location, string favFood, int lengthTail) : Animal(name, age, location)
	{
		this->name = name;
		this->age = age;
		this->location = location;
		this->favFood = favFood;
		this->lengthTail = lengthTail;
	}

	void getInfo() override
	{
		cout << "\n\t�������� " << name << ", ������� - " << age << ", ����� �������� - " << location << ", ������� ��� - " << favFood << ", ����� ������ - " << lengthTail << endl << endl;
	}
	void move() override
	{
		cout << "\n\t�������� �������� ��������� �����." << endl << endl;
	}
	void clear()
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
	Lion lion = Lion("˸��", 6, "�����", 100, 5);
	
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
	case 1: lion.getInfo();
		break;
	case 2: lion.move();
		break;
	case 3: lion.sound();
		break;
	case 4: lion.feedL();
		break;
	case 5: lion.angry();
		break;
	}
} while (x != 6);
return;
}

void go_onLeft()
{
	Parrot parrot = Parrot("����", 10, "���������", 15, "������");
	
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
		case 1: parrot.getInfo();
			break;
		case 2: parrot.move();
			break;
		case 3: parrot.sing();
			break;
		case 4: parrot.feedP();
			break;
		case 5: parrot.talk();
			break;
		}

	} while (y != 6);
	return;
}

void go_Straight()
{
	Monkey monkey = Monkey("����", 7, "������", "������", 27);

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
		case 1:monkey.getInfo();
			break;
		case 2: monkey.move();
			break;
		case 3: monkey.clear();
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