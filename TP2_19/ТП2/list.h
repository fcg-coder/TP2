#pragma once
class list
{
	friend const list& operator++(list& L , int );
	friend const list& operator++(list& L );
public:
	list();
	~list();
	explicit list(const list& Ref, int E = 5);
	explicit list(int num);
	void push(int num);
	void pop();
	bool is_empty();
	void out();
	list& operator!();
	list&  operator--();
	list&  operator--(int);
private:
	struct Node
	{
		int data;
		struct Node* next, *prev;
	};
	struct Node* head, * tail,  *prev, *temp;
	int size;
};
