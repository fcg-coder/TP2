#include "list.h"
#include "task2.h"
#include <iostream>


//Оператор++ (префиксная форма,дружественная функция) увеличивает все значения в стеке на максимальное значение,которое в нем хранится, 
const list& operator++(list& L) {
	
	// Найти максимальное значение в списке
	int max = INT_MIN;
	L.temp = L.head;
	for (int i = 0; i < L.size; i++) {
			if (L.temp->data > max)
			max = L.temp->data;
		L.temp = L.temp->next;
	}
	std::cout << "\n\n\n\nmax of stack ->\t" << max << "\n";
	std::cout << "old stack ->\t";
	L.out();
	// Увеличение каждого элемента списка на максимальное значение
	L.temp = L.head;
	for (int i = 0; i < L.size; i++) {
	
		L.temp->data += max;
		L.temp = L.temp->next;
	}
	std::cout << "new stack ->\t";
	L.out();
	std::cout << "\n";
	return L;


}

//++(постфиксная форма, дружественная функция) увеличивает все значения в стеке на минимальное значение, которое в нем хранится,
const list& operator++(list& L,int) {

	// Найти максимальное значение в списке
	int min = INT_MAX;
	L.temp = L.head;
	for (int i = 0; i < L.size; i++) {
		if (L.temp->data < min)
			min = L.temp->data;
		L.temp = L.temp->next;
	}
	std::cout << "\n\n\n\nmin of stack ->\t" << min << "\n";
	std::cout << "old stack ->\t";
	L.out();
	// Увеличение каждого элемента списка на максимальное значение
	L.temp = L.head;
	for (int i = 0; i < L.size; i++) {

		L.temp->data += min;
		L.temp = L.temp->next;
	}
	std::cout << "new stack ->\t";
	L.out();
	std::cout << "\n";
	return L;

}












const CISLA& operator+(CISLA& L,CISLA& H) {
	// Создаем новый объект CISLA
	CISLA result;
	int size = L.size;
	// Инициализируем временные указатели на головы списков L и H
	L.temp = L.head;
	H.temp = H.head;

	// Проходимся по каждому элементу списка и вычитаем соответствующие значения из L и H
	for(int i = 0; i < size ; i++ )
	{
		int value = L.temp->data + H.temp->data;
		result.push(value);
		L.temp = L.temp->next;
		H.temp = H.temp->next;
	}


	for(int i = 0; i < size ; i++ )
	{
		L.pop();
	}

	result.temp = result.head;
	for (int i = 0; i < size; i++)
	{
		
		L.push(result.temp->data);
		result.temp = result.temp->next;
	}
	

	return L;
}

const CISLA&  operator >(CISLA& L, CISLA& H) {
	L.temp = L.head;
	H.temp = H.head;
	int size = L.size;
	for (int i = 0; i < size; i++) {
		if (L.temp->data > H.temp->data) {
			std::cout << "T\t";
		}
		else {
			std::cout << "F\t";
		}
		L.temp = L.temp->next;
		H.temp = H.temp->next;
	}
	std::cout << "\n";
	return L;
}

const CISLA&  operator !=(CISLA& L, CISLA& H) {
	L.temp = L.head;
	H.temp = H.head;
	int size = L.size;
	for (int i = 0; i < size; i++) {
		if (L.temp->data != H.temp->data) {
			std::cout << "T\t";
		}
		else {
			std::cout << "F\t";
		}
		L.temp = L.temp->next;
		H.temp = H.temp->next;
	}
	std::cout << "\n";
	return L;
}
