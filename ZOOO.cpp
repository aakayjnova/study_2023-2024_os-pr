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
		cout << "Имя животного: " << name << ", возраст: " << age << ", среда обитания: " << location << "." << endl << endl;
	}

};

class Lion :public Animals
{
public:
	
	//Lion() {};
	//Lion(string name, int age, string location) : Animals(name, age, location) {};

	void make_move() override
	{
		cout << "\n\tЛев прыгнул к вам! Осторожно!" << endl << endl;
	};
	void make_sound()
	{
		cout << "\n\tАргххх!" << endl << endl;
	}
	void feedL() 
	{
		int hL = 0;
		cout << "\nВведите количество мясных стейков: ";
		cin >> hL;
		if (hL > 10)
		{
			cout << "\n\tЛев умер от ожирения." << endl << endl;
		}
		else
		{
			if (hL == 0)
			{
				cout << "\n\tЛёва смотрит на вас голодными глазами.Лучше отдайте ему еду." << endl << endl;
			}
			else
			{
				cout << "\n\tЛьву понравилось. Он хочет ещё." << endl << endl;
			}
		}
	}
	void make_angry()
	{
		cout << "\n\tЛев очень злится! Медленно отойдите от клетки." << endl << endl;
	}
};

class Parrot :public Animals
{
public:

	//Parrot() {};
	//Parrot(string name, int age, string location) : Animals(name, age, location) {};

	void make_move() override
	{
		cout << "\n\tПопугай подлетел ближе к клетке и намеревается клюнуть вас." << endl << endl;
	}
	void make_sing()
	{
		cout << "\n\tМиллионы, миллионы алых роз! Из окна, из окна видишь ты..." << endl << endl;
	}
	void feedP()
	{
		int hR = 0;
		cout << "\n\tВведите количество лесных орехов: ";
		cin >> hR;
		if (hR > 30)
		{
			cout << "\n\tПопугай лопнул от обжорства." << endl << endl;
		}
		else
		{
			if (hR == 0)
			{
				cout << "\n\tКеша голодный! Дай Кеше еду!" << endl << endl;
			}
			else
			{
				cout << "\n\tКеше нравится.Кеша хочет ещё!" << endl << endl;
			}
		}
	}
	void make_talk()
	{
		cout << "\n\tКеша хороший, Кеша хороший!" << endl << endl;
	}
};

class Monkey :public Animals
{
public:

	//Monkey() {};
	//Monkey(string name, int age, string location) : Animals(name, age, location) {};

	void make_move() override
	{
		cout << "\n\tОбезьяна начинает танцевать диско." << endl << endl;
	}
	void make_clear()
	{
		cout << "\n\tЛаки включает режим поиска вшей." << endl << endl;
	}
	void feedM()
	{
		int hM = 0;
		cout << "\nВведите количество бананов: " << endl;
		cin >> hM;
		if (hM > 9)
		{
			cout << "\n\tСлишком много! Обезьяна подскользнулась на банановой кожуре и умерла." << endl << endl;
		}
		else
		{
			if (hM == 0)
			{
				cout << "\n\tОбезьяна предлагает вам листья в обмен на бананы. Выгодный обмен!" << endl << endl;
			}
			else
			{
				cout << "\n\tЛаки наслаждается бананами." << endl << endl;
			}
		}

	}
	void steal_money()
	{
		cout << "\n\tАхтунг! Обезьяна украла у вас кошелёк. Поторопитесь за бананами для неё." << endl << endl;
	}

};

void go_onRight(), go_onLeft(), go_Straight();

void go_onRight()
{
	Lion lion;
	lion.age = 6;
	lion.location = "Индия";
	lion.name = "Лёва";

	int x;

	cout << "\n\nОтличный выбор! Вперёд!" << endl << endl;

	do
	{
	cout << "\nА вот и лев! Как будем развлекаться?" << endl << endl;
	cout << "1. Посмотреть информацию." << endl << endl;
	cout << "2. Заставить двигаться." << endl << endl;
	cout << "3. Заставить рычать." << endl << endl;
	cout << "4. Покормить." << endl << endl;
	cout << "5. Разозлить" << endl << endl;
	cout << "6. Вернуться ко входу в зоопарк." << endl << endl;

	do
	{
		cin >> x;
		if (x < 1 || x > 6) cout << "\nВведите возможную цифру." << endl << endl;
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
	parrot.location = "Австралия";
	parrot.name = "Кеша";

	int y;

	cout << "\n\nСупер! Кеша ждёт нас!" << endl << endl;

	do
	{
		cout << "\nСмотри, это Кеша! Кеша хороший!" << endl << endl;
		cout << "1. Посмотреть информацию." << endl << endl;
		cout << "2. Заставить двигаться." << endl << endl;
		cout << "3. Заставить петь." << endl << endl;
		cout << "4. Покормить." << endl << endl;
		cout << "5. Заставить говорить." << endl << endl;
		cout << "6. Вернуться ко входу в зоопарк." << endl << endl;

		do
		{
			cin >> y;
			if (y < 1 || y > 6) cout << "\nШесть больше нуля. Выбери верную цифру." << endl << endl;
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
	monkey.location = "Африка";
	monkey.name = "Лаки";

	int z;

	cout << "\n\nОбезьяна друг человека! Полный ход!" << endl << endl;

	do
	{
		cout << "\nМы пришли! Знакомьтесь, это Лаки." << endl << endl;
		cout << "1. Посмотреть информацию." << endl << endl;
		cout << "2. Заставить двигаться." << endl << endl;
		cout << "3. Навести чистоту." << endl << endl;
		cout << "4. Покормить." << endl << endl;
		cout << "5. Подойти ближе." << endl << endl;
		cout << "6. Вернуться ко входу в зоопарк." << endl << endl;

		do
		{
			cin >> z;
			if (z < 1 || z > 6) cout << "\nШести цифр не хватает что ли?" << endl << endl;
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

	cout << "\t\tДобро пожаловать в зоопарк!" << endl << endl;

	do
	{
		cout << "\nВыберите направление движения: " << endl << endl;
		cout << "1. Пойти направо - львов посмотреть." << endl << endl;
		cout << "2. Пойти налево - с попугаем поговорить." << endl << endl;
		cout << "3. Прямо пойти - быть обезьяной обкраденным." << endl << endl;
		cout << "4. Оставшийся путь - домой пойти, пельмешки кушать." << endl << endl;

		do
		{
			cin >> selectAction;
			if (selectAction < 1 || selectAction>4) cout << "\nВыбор из четырёх - другого не дано." << endl << endl;
		} while (selectAction < 1 || selectAction>4);


		switch (selectAction)
		{
		case 1: go_onRight();
			break;

		case 2: go_onLeft();
			break;

		case 3: go_Straight();
			break;

		default: cout << "\nДо свидания! Не приходите ещё." << endl << endl;
		}
	} while (selectAction != 4);

	return 0;

}