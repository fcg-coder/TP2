#include <iostream>
#include "task2.h"

CISLA& CISLA:: operator-(CISLA& H) {
	Node* temp = head;
	Node* temp1 = H.head;
	int size = this->size;
	for (int i = 0; i < size; i++) {
		temp->data -= temp1->data;
		temp = temp->next;
		temp1 = temp1->next;
}
	return *this;
}

CISLA& CISLA:: operator<(CISLA& L) {
	
	L.temp = L.head;
	this->temp = this->head;
	for (int i = 0; i < size; i++) {
		if (this->temp->data < L.temp->data) {
			std::cout << "T\t";
		}
		else {
			std::cout << "F\t";
		}
		this->temp = this->temp->next;
		L.temp = L.temp->next;
	}
	std::cout << "\n";
	return L;
}

CISLA& CISLA:: operator==(CISLA& L) {
	L.temp = L.head;
	this->temp = this->head;
	for (int i = 0; i < size; i++) {
		if (this->temp->data == L.temp->data) {
			std::cout << "T\t";
		}
		else {
			std::cout << "F\t";
		}
		this->temp = this->temp->next;
		L.temp = L.temp->next;
	}
	std::cout << "\n";
	return L;
}


CISLA::CISLA()
{
	head = tail = NULL;
	size = 0;
}
CISLA::CISLA(int n)
{
	struct Node* temp = new Node;
	temp->data = n;
	head = tail = temp;
	size = 1;
}
CISLA::~CISLA()
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
bool CISLA::is_empty()
{
	return head == NULL;
}
void CISLA::push(double num)
{
	struct Node* temp = new Node;
	size += 1;
	temp->next = head;
	temp->data = num;
	if (head != NULL)
	{
		tail->next = temp;
		tail = temp;
	}
	else
	{
		head = tail = temp;
	}
}
void CISLA::out()
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
void CISLA::pop()
{
	if (head != NULL)
	{
		if (size > 1)
		{
			Node* temp = head->next;
			delete head;
			head = temp;
			size -= 1;
			tail->next = temp;
		}
		else
		{
			delete head;
			head = NULL;
			size -= 1;
		}

	}
}
