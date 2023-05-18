//• Задание 1 Унарная операция
//Создать объект типа стек, размер стека задается пользователем, данные вводятся с
//клавиатуры.
// 
 //Оператор !проверяет стек на пустоту.
 //
 //Оператор++ (префиксная форма,дружественная функция) увеличивает все значения в стеке на максимальное значение,
	//которое в нем хранится, 
 //
 //++(постфиксная форма, дружественная функция) увеличивает все значения в стеке на минимальное значение, которое в нем хранится,
 //
 // --(префиксная форма, метод) уменьшает все значения в стеке на максимальное значение, которое в нем	хранится, \
 //
 //--(постфиксная форма, метод) уменьшает все значения в стеке на минимальное значение, которое в нем хранится.
	//
// 
// 
// 
// 
// • Задание 2 Бинарная операция
//	Создать класс вещественных чисел.
// Определить оператор - как метод и + как	дружественную функцию для работы с другими экземплярами вашего класса.
// Перегрузить операторы сравнения <, >, != и == для работы с другими экземплярами вашего класса.



/*
 Файлы list.cpp и list.h - хранят в себе определение класса для задания 1
 Там внутри определение методов и их перегрузка
ВСЕ ДРУЖЕСТВЕННЫЕ ФУНКЦИИ перегружаем в файле friend.cpp (как для таск1 так и для таск2)

Файлы task2.cpp & task2.h - хранят в себе определение класса КООРДИНАТЫ для задания 2
Внутри определение методов и их перегрузка
Перегружаем дружественные функции в файле friend.cpp
*/

#include<iostream>
#include "list.h"
#include "task2.h"
#include <time.h>
#include<string>

list K;
int R;


list L(K);
CISLA A,B;


void TEST();

int main()
{
	srand(time(NULL));
	//std::string menu = "Type x\n1 -Add new element\n2-List output\nOperator !checks the stack for emptiness.\nThe++ operator (prefix form, friendly function) increments all values in the stack by the maximum value\nstored in it,\n++(postfix form, friendly function) increases all values in the stack by the minimum value that is stored in it,\n--(prefix form, method) reduces all values in the stack by the maximum value that is stored in it,\n--(postfix form, method) reduces all values in the stack by the minimum value that is stored in it.\n";
	std::string menu = "1)ADD\n2)OUT\n3)POP\n4)++pref\n5)++post\n6)--pref\n7)--post\n8)!\n\n\n";
		
	std::string task2 = "What do we do ? \n - (+)\n - (-)\n - (<)\n - (>)\n - (== )\n - (!= )\n";
	int X,X1;

	std::cout << "Chose to do TASK1 Or TASK2\n";
	std::cin >> X;
	
	int x, num;
	int flag = 1;



	switch (X)
	{
	case 1:
		std::cout << "1 or 2\n";
		std::cin >> R;
		if (R == 1)
		{
			for (int i = 0; i < rand() % 20 + 10; i++)
				L.push(rand() % 100);
			L.out();
		}
		std::cout << menu;
		std::cin >> x;
		while (flag != 0)
			switch (x)
			{
				//ADD
			case 1:
				system("cls");
				std::cin >> num;
				L.push(num);
				L.out();
				std::cout << menu;
				std::cin >> x;
				break;

				//OUT
			case 2:
				system("cls");
				if (!L.is_empty())
				{
					std::cout << "LIST:\t";
					L.out();
				}
				else
					std::cout << "EMPTY\n";
				std::cout << menu;
				std::cin >> x;
				break;
				//pop
			case 3:
				L.pop();
				system("cls");
				L.out();

				std::cout << menu;
				std::cin >> x;

				break;

				//++pref
			case 4:
				system("cls");
				++L;
				
				std::cout << menu;
				std::cin >> x;
				break;

				//++
			case 5:
				system("cls");
				L++;
				std::cout << menu;
				std::cin >> x;
				break;

				//pref--
			case 6:
				system("cls");
				--L;
				if (!L.is_empty())
				{
					std::cout << "LIST:\t";
					L.out();
				}
				else
					std::cout << "EMPTY\n";
				std::cout << menu;
				std::cin >> x;
				break;

				//post--
			case 7:
				system("cls");
				L--;
				if (!L.is_empty())
				{
					std::cout << "LIST:\t";
					L.out();
				}
				else
					std::cout << "EMPTY\n";
				std::cout << menu;
				std::cin >> x;
				break;

				//empty
			case 8:
				system("cls");
				!L;
				std::cin >> x;
				break;

			default:
				system("cls");
				std::cout << menu;
				std::cin >> x;
				break;
			}
		break;

	case 3:
		TEST();
		break;
	case 2:
		int X1 = 0;
		// 
// • Задание 2 Бинарная операция
//	Создать класс вещественных чисел.
// Определить оператор - как метод и + как	дружественную функцию для работы с другими экземплярами вашего класса.
// Перегрузить операторы сравнения <, >, != и == для работы с другими экземплярами вашего класса.


		std::cout << "Do queue for random\n";

		for (int i = 0; i < rand() % 20; i++) {
			A.push(rand() % 10);
			B.push(rand() % 10);
		}
	
			A.out();
			B.out();
			std::cout << task2;
			std::cin >> X1;

			while (X1 != 10) {
				switch (X1) {
				case 1:
					A + B;
					system("cls");
					A.out();
					B.out();
					std::cout << task2;
					std::cin >> X1;
					break;
				case 2:
					A - B;
					system("cls");

					A.out();
					B.out();
					std::cout << task2;
					std::cin >> X1;
					break;

				case 3:
					system("cls");
					A < B;

					A.out();
					B.out();
					std::cout << task2;
					std::cin >> X1;
					break;


				case 4:
					system("cls");
					A > B;

					A.out();
					B.out();
					std::cout << task2;
					std::cin >> X1;
					break;


				case 5:
					system("cls");
					A == B;

					A.out();
					B.out();
					std::cout << task2;
					std::cin >> X1;
					break;



				case 6:
					system("cls");
					A != B;

					A.out();
					B.out();
					std::cout << task2;
					std::cin >> X1;
					break;



				default:
					break;
				}
			}
		

	
	}

	return 0;
}


void TEST() {
	std::cout << "TEST FOR TASK1\n";
	for (int i = 0; i < rand() % 5 + 10; i++)
		L.push(rand() % 20);
	std :: cout <<"\t\t";
	L.out();
	L.push(rand()%100000);
	
	std::cout << "new el-> \t";
	L.out();
	std::cout << "del el-> \t";
	L.pop();
	L.out();
	if (!L.is_empty())
	{
		std::cout << "LIST:\t\t";
		L.out();
	}
	else
		std::cout << "EMPTY\n";
	++L;
	L++;

	std::cout << "\t\t";
	--L;
	L.out();
	std::cout << "\t\t";
	L--;
	L.out();
	!L;

	std::cout << "\n\n\n\n\n\n\n\nTEST FOR TASK2\n";
	std::cout << "Do queue for random\n";


	
	for (int i = 0; i < rand() % 10 + 10; i++) {
		A.push((double)rand() / 100);
		B.push((double)rand() / 100);
	}


	std:: cout << "2 mas\n";
	A.out();
	B.out();

	std::cout << "\noperator +\n";

	A + B;
	A.out();
	B.out();

	std::cout << "\noperator -\n";
	A - B;
	A.out();
	B.out();


	std::cout << "\noperator <\n";
	A < B;

	A.out();
	B.out();


	std::cout << "\noperator > \n";

	A > B;

	A.out();
	B.out();




	std::cout << "\n operator ==\n";
	A == B;

	A.out();
	B.out();
	std::cout << "\n operator !=\n";
	A != B;

	A.out();
	B.out();
}