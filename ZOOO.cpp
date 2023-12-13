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
		cout << "\n\tЛев " << name << ", возраст - " << age << ", среда обитания - " << location << ", вес - " << weight << ", количество львиц - " << countFem << "." << endl << endl;
	}
	void move() override
	{
		cout << "\n\tЛев прыгнул к вам! Осторожно!" << endl << endl;
	};
	void sound()
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
	void angry()
	{
		cout << "\n\tЛев очень злится! Медленно отойдите от клетки." << endl << endl;
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
		cout << "\n\tПопугай " << name << ", возраст - " << age << ", среда обитания - " << location << ", длина крыльев - " << lengthWings << ", окрас " << color << "." << endl << endl;
	}
	void move() override
	{
		cout << "\n\tПопугай подлетел ближе к клетке и намеревается клюнуть вас." << endl << endl;
	}
	void sing()
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
	void talk()
	{
		cout << "\n\tКеша хороший, Кеша хороший!" << endl << endl;
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
		cout << "\n\tОбезьяна " << name << ", возраст - " << age << ", среда обитания - " << location << ", любимая еда - " << favFood << ", длина хвоста - " << lengthTail << endl << endl;
	}
	void move() override
	{
		cout << "\n\tОбезьяна начинает танцевать диско." << endl << endl;
	}
	void clear()
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
	Lion lion = Lion("Лёва", 6, "Индия", 100, 5);
	
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
	Parrot parrot = Parrot("Кеша", 10, "Австралия", 15, "зелёный");
	
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
	Monkey monkey = Monkey("Лаки", 7, "Африка", "бананы", 27);

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