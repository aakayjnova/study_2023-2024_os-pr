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
		cout << "\nЛев прыгнул к вам! Осторожно!" << endl << endl;
	}
	void make_Sound() override
	{
		cout << "\n\tАргххх!" << endl << endl;
	}
	void feed() override
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
				cout << "\n\tЛев смотрит на вас голодными глазами.Лучше отдайте ему еду." << endl << endl;
			}
			else
			{
				cout << "\n\tЛьву понравилось. Он хочет ещё." << endl << endl;
			}
		}
	}
	void make_Sleep() override
	{
		cout << "\n\tТеперь Лёва спит. Лучше не беспокоить!" << endl << endl;
	}
	void make_WakeUp() override
	{
		cout << "\n\tВы прервали сон льва. Ему снились мясные стейки. Смотрите, как бы он не перепутал сон с явью!" << endl << endl;
	}

};

class Parrot : public Animals
{
public:
	void make_Move() override
	{
		cout << "\n\tПопугай подлетел ближе к клетке и намеревается клюнуть вас." << endl << endl;
	}
	void make_Sound() override
	{
		cout << "\n\tКеша хороший, Кеша хороший!" << endl << endl;
	}
	void feed() override
	{
		int hR = 0;
		cout << "\n\tВведите количество лесных орехов: " ;
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
	void make_Sing()
	{
		cout << "\n\tМиллионы, миллионы алых роз! Из окна, из окна видишь ты..." << endl << endl;
	}
	void make_Sleep() override
	{
		cout << "\n\tКеша спит. Не будить!" << endl << endl;
	}
	void make_WakeUp() override
	{
		cout << "\n\tВы разбудили Кешу. Кеша вас запомнил." << endl << endl;
	}
};

class Monkey : public Animals
{
public:

	void make_Move() override
	{
		cout << "\n\tОбезьяна неспеша идёт к клетке." << endl << endl;
	}
	void make_Sound() override
	{
		cout << "\n\tАха ихих уху!" << endl << endl;
	}
	void feed() override
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
				cout << "\n\tОбезьяна наслаждается бананами." << endl << endl;
			}
		}

	}
	void steal_money()
	{
		cout << "\n\tОсторожно! Обезьяна украла у вас кошелёк. Поторопитесь за бананами для неё." << endl << endl;
	}
	void make_Sleep()
	{
		cout << "\n\tЧуча спит. Сладких банановых снов ей!" << endl << endl;
	}
	void make_WakeUp()
	{
		cout << "\n\tОбезьна недовольно просыпается. Берегитесь обстрела бананами!" << endl << endl;
	}
};


void go_onRight(), go_onLeft(), go_Straight();


void go_onRight()
{
	Lion lion;

	int x;


	cout << "\n\nОтличный выбор! Вперёд!" << endl << endl;

	do
	{
		cout << "\nА вот и лев! Как будем развлекаться?" << endl << endl;
		cout << "1. Заставить рычать." << endl << endl;
		cout << "2. Заставить двигаться." << endl << endl;
		cout << "3. Покормить." << endl << endl;
		cout << "4. Пусть спит!" << endl << endl;
		cout << "5. Разбудить зверя." << endl << endl;
		cout << "6. Вернуться ко входу в зоопарк." << endl << endl;

		do
		{
			cin >> x;
			if (x < 1 || x > 7) cout << "\nШесть цифр можно выбрать! Шесть!" << endl << endl;
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


	cout << "\n\nСупер! Кеша ждёт нас!" << endl << endl;

	do
	{
		cout << "\nСмотри, это Кеша! Кеша хороший!" << endl << endl;
		cout << "1. Заставить говорить." << endl << endl;
		cout << "2. Заставить двигаться." << endl << endl;
		cout << "3. Заставить петь." << endl << endl;
		cout << "4. Пусть спит!" << endl << endl;
		cout << "5. Подъём! Великие дела нас ждут!" << endl << endl;
		cout << "6. Покормить." << endl << endl;
		cout << "7. Вернуться ко входу в зоопарк." << endl << endl;

		do
		{
			cin >> y;
			if (y < 1 || y > 7) cout << "\nСемь больше нуля. Выбери верную цифру." << endl << endl;
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


	cout << "\n\nОбезьяна друг человека! Полный ход!" << endl << endl;

	do
	{
		cout << "\nМы пришли! Знакомьтесь, это Чуча." << endl << endl;
		cout << "1. Заставить говорить." << endl << endl;
		cout << "2. Заставить двигаться." << endl << endl;
		cout << "3. Подойти к клетке поближе." << endl << endl;
		cout << "4. Пусть спит!" << endl << endl;
		cout << "5. Кто первый встаёт, тому еду посетитель подаёт." << endl << endl;
		cout << "6. Покормить." << endl << endl;
		cout << "7. Вернуться ко входу в зоопарк." << endl << endl;

		do
		{
			cin >> z;
			if (z < 1 || z > 8) cout << "\nСеми цифр не хватает что ли?" << endl << endl;
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

