/*Создать  класс Стеквещественных.  Функции-члены вставляют элемент в стек, вытаскивают элемент из стека, печатают стек ,
проверяетвершину стека.*/
#include <iostream>
#include "Stack.h" 
using namespace std;

stack::stack()
{
	head = NULL;
}

stack::stack(double I)
{
	head = new stack();
	head->Number =I;
}

void stack::Push(double N)
{
	prev = head;
	head = new stack();
	head->Number = N;
	head->prev = prev;
}

void stack::Pop()
{
	stack* e;
	if (this->isHead())
	{
		cout << head->Number << endl;
		e = head;
		head = head->prev;
		delete e;
		
		
	}
	
}
void stack::print()
{
	stack* e;
	e= head;
	while (e!=NULL)
	{
		cout << e->Number << endl;
		e = e->prev;
	}
}
bool stack::isHead()
{
	return(head != NULL);
}
stack::stack(const stack& Copy)
{
	stack k;
	stack* e;
	e = Copy.head;
	while (e != NULL)
	{
		k.Push(e->Number);
		e = e->prev;
	}
	e = k.head;
	while (e != NULL)
	{
		this->Push(e->Number);
		e = e->prev;
	}

}

stack::stack(int size)
{
	double h;
	for (int i = 0; i < size; i++)
	{
		cout << "vveedite element stecka ";
		cin >> h;
		this->Push(h);
	}
}

stack* stack::mass(int s)
{
	stack* m = new stack[s];
	for (int i = 0; i < s; i++)
	{
		cout << "Stack[" << i + 1 << "]\n";
		stack f(stack::size);
		m[i] = f;
	}
	return m;
}

double stack::getHead()
{
	return this->head->Number;
}
bool stack::is_otric()
{
	stack* e;
	e = head;
	while (e != NULL)
	{
		if (e->Number < 0) return true;
		e = e->prev;
	}
	return false;
}

stack::~stack()
{/*stack* e;
	while (head != NULL)
	{
		e = head;
		head = head->prev;
		delete e;
	}
	delete head;*/
}
