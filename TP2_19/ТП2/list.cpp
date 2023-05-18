#include "list.h"
#include <iostream>
#include <time.h>

list::list(const list& Ref, int E)
{
	int i = Ref.size;
	struct Node* item = Ref.head;
	if (i == 0)
		push(E);
	while (i != 0)
	{
		push(item->data);
		item = item->next;
		i -= 1;
	}
}
list::list(int num)
{
	struct Node* temp = new Node;
	head = tail = temp;
	temp->data = num;
	size = 1;
}
list::list()
{
	head = tail = NULL;
	size = 0;
}
list::~list()
{
	Node* tp;
	while (size != 0)
	{
		tp = head->next;
		delete head;
		head = tp;
		size -= 1;
	}
}
bool list::is_empty()
{
	return head == NULL;
}

void list:: out()
{
	struct Node* temp = head;
	int i = size;
	while (i != 0)
	{
		std::cout << temp->data << "\t";
		temp = temp->next;
		i -= 1;
	}
	std::cout << "\n";
}


void list::push(int num)
{
	struct Node* temp = new Node;
	size += 1;
	temp->data = num;
	if (head != NULL)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		temp->next = NULL;
		head = tail = temp;
	}
}

void list::pop()
{
	if (head != NULL)
	{
		Node* temp = head->next;
		delete head;
		head = temp;
		size -= 1;
	}
}


//ПЕРЕГРУЗКА МЕТОДОВ

//Оператор !проверяет стек на пустоту
list& list:: operator!() 
{
	if (this->is_empty()) {
		std :: cout << "EMPTY";
	}
	else {
		std::cout << "not EMPTY";
	}
	return *this;
}

// --(префиксная форма, метод) уменьшает все значения в стеке на максимальное значение, которое в нем	хранится, 
list& list:: operator--()
{
	std::cout << "\t\t";
	int max = INT_MIN;
	struct Node* temp = head;
	int i = size;
	while (i != 0)
	{
		if (temp->data > max) { max = temp->data; }
		temp = temp->next;
		i -= 1;
	}
	std::cout << "\n max - >" << max << "\n";

	temp = head;
	i = size;
	while (i != 0)
	{
		temp->data -= max;
		temp = temp->next;
		i -= 1;
	}
	std::cout << "\n";
	return *this;
}

//--(постфиксная форма, метод) уменьшает все значения в стеке на минимальное значение, которое в нем хранится.
list& list:: operator--(int) 
{
	std::cout << "\t\t";
	int min = INT_MAX;
	struct Node* temp = head;
	int i = size;
	while (i != 0)
	{
		if (temp->data < min) { min = temp->data; }
		temp = temp->next;
		i -= 1;
	}
	std::cout << "\n min - >" << min << "\n";
	temp = head;
	i = size;
	while (i != 0)
	{
		temp->data -= min;
		temp = temp->next;
		i -= 1;
	}
	std::cout << "\n";
	return *this;

}