#pragma once

class CISLA
{
	friend const CISLA& operator+(CISLA& L,CISLA& H);
	friend const CISLA& operator>(CISLA& L, CISLA& H);
	friend const CISLA& operator!=(CISLA& L, CISLA& H);
public:
	CISLA();
	CISLA(int n);
	~CISLA();
	CISLA& operator - (CISLA& L);
	CISLA& operator <(CISLA& L);
	CISLA& operator ==(CISLA& L);
	void push(double num);
	void pop();
	bool is_empty();
	void out();
private:
	struct Node
	{
		double data;
		struct Node* next;
	};
	struct Node* head, * tail, * temp;
	int size;
};
