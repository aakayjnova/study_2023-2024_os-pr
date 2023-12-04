#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;


class Animals 
{
public:

	virtual void make_Move() = 0;
	virtual void make_Sound() = 0;
	virtual void feed() = 0;
	virtual void make_Sleep() = 0;
	virtual void make_WakeUp() = 0;

};

class Lion : public Animals
{
public:
	void make_Move() override
	{
		cout << "\n��� ������� � ���! ���������!" << endl << endl;
	}
	void make_Sound() override
	{
		cout << "\n\t������!" << endl << endl;
	}
	void feed() override
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
				cout << "\n\t��� ������� �� ��� ��������� �������.����� ������� ��� ���." << endl << endl;
			}
			else
			{
				cout << "\n\t���� �����������. �� ����� ���." << endl << endl;
			}
		}
	}
	void make_Sleep() override
	{
		cout << "\n\t������ ˸�� ����. ����� �� ����������!" << endl << endl;
	}
	void make_WakeUp() override
	{
		cout << "\n\t�� �������� ��� ����. ��� ������� ������ ������. ��������, ��� �� �� �� ��������� ��� � ����!" << endl << endl;
	}

};

class Parrot : public Animals
{
public:
	void make_Move() override
	{
		cout << "\n\t������� �������� ����� � ������ � ������������ ������� ���." << endl << endl;
	}
	void make_Sound() override
	{
		cout << "\n\t���� �������, ���� �������!" << endl << endl;
	}
	void feed() override
	{
		int hR = 0;
		cout << "\n\t������� ���������� ������ ������: " ;
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
	void make_Sing()
	{
		cout << "\n\t��������, �������� ���� ���! �� ����, �� ���� ������ ��..." << endl << endl;
	}
	void make_Sleep() override
	{
		cout << "\n\t���� ����. �� ������!" << endl << endl;
	}
	void make_WakeUp() override
	{
		cout << "\n\t�� ��������� ����. ���� ��� ��������." << endl << endl;
	}
};

class Monkey : public Animals
{
public:

	void make_Move() override
	{
		cout << "\n\t�������� ������� ��� � ������." << endl << endl;
	}
	void make_Sound() override
	{
		cout << "\n\t��� ���� ���!" << endl << endl;
	}
	void feed() override
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
				cout << "\n\t�������� ������������ ��������." << endl << endl;
			}
		}

	}
	void steal_money()
	{
		cout << "\n\t���������! �������� ������ � ��� ������. ������������ �� �������� ��� ��." << endl << endl;
	}
	void make_Sleep()
	{
		cout << "\n\t���� ����. ������� ��������� ���� ��!" << endl << endl;
	}
	void make_WakeUp()
	{
		cout << "\n\t������� ���������� �����������. ���������� �������� ��������!" << endl << endl;
	}
};


void go_onRight(), go_onLeft(), go_Straight();


void go_onRight()
{
	Lion lion;

	int x;


	cout << "\n\n�������� �����! �����!" << endl << endl;

	do
	{
		cout << "\n� ��� � ���! ��� ����� ������������?" << endl << endl;
		cout << "1. ��������� ������." << endl << endl;
		cout << "2. ��������� ���������." << endl << endl;
		cout << "3. ���������." << endl << endl;
		cout << "4. ����� ����!" << endl << endl;
		cout << "5. ��������� �����." << endl << endl;
		cout << "6. ��������� �� ����� � �������." << endl << endl;

		do
		{
			cin >> x;
			if (x < 1 || x > 7) cout << "\n����� ���� ����� �������! �����!" << endl << endl;
		} while (x < 1 || x > 7);


		switch (x)
		{
		case 1: lion.make_Sound();
			break;
		case 2: lion.make_Move();
			break;
		case 3: lion.feed();
			break;
		case 4: lion.make_Sleep();
			break;
		case 5: lion.make_WakeUp();
			break;
		}

	} while (x != 6);
	return;
}

void go_onLeft()
{
	Parrot parrot;

	int y;


	cout << "\n\n�����! ���� ��� ���!" << endl << endl;

	do
	{
		cout << "\n������, ��� ����! ���� �������!" << endl << endl;
		cout << "1. ��������� ��������." << endl << endl;
		cout << "2. ��������� ���������." << endl << endl;
		cout << "3. ��������� ����." << endl << endl;
		cout << "4. ����� ����!" << endl << endl;
		cout << "5. ������! ������� ���� ��� ����!" << endl << endl;
		cout << "6. ���������." << endl << endl;
		cout << "7. ��������� �� ����� � �������." << endl << endl;

		do
		{
			cin >> y;
			if (y < 1 || y > 7) cout << "\n���� ������ ����. ������ ������ �����." << endl << endl;
		} while (y < 1 || y > 7);

	
		switch (y)
		{
		case 1: parrot.make_Sound();
			break;
		case 2: parrot.make_Move();
			break;
		case 3: parrot.make_Sing();
			break;
		case 4: parrot.make_Sleep();
			break;
		case 5: parrot.make_WakeUp();
			break;
		case 6: parrot.feed();
			break;
		}

	} while (y != 7);
	return;
}

void go_Straight()
{
	Monkey monkey;
	
	int z;


	cout << "\n\n�������� ���� ��������! ������ ���!" << endl << endl;

	do
	{
		cout << "\n�� ������! �����������, ��� ����." << endl << endl;
		cout << "1. ��������� ��������." << endl << endl;
		cout << "2. ��������� ���������." << endl << endl;
		cout << "3. ������� � ������ �������." << endl << endl;
		cout << "4. ����� ����!" << endl << endl;
		cout << "5. ��� ������ �����, ���� ��� ���������� �����." << endl << endl;
		cout << "6. ���������." << endl << endl;
		cout << "7. ��������� �� ����� � �������." << endl << endl;

		do
		{
			cin >> z;
			if (z < 1 || z > 8) cout << "\n���� ���� �� ������� ��� ��?" << endl << endl;
		} while (z < 1 || z > 8);

	

		switch (z)
		{
		case 1: monkey.make_Sound();
			break;
		case 2: monkey.make_Move();
			break;
		case 3: monkey.steal_money();
			break;
		case 4: monkey.make_Sleep();
			break;
		case 5: monkey.make_WakeUp();
			break;
		case 6: monkey.feed();
			break;
		
		}

	} while (z != 7);
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

