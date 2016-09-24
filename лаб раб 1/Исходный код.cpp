#include <iostream>
#include "Stack.h" 
using namespace std;
int stack::size_lol = 6;
void main()
{
	stack li;
	li.Push(100);
	li.Push(76);
	li.Push(48);
	li.Push(21);
	li.Push(18);
	li.Push(98);
	li.Push(95);
	li.print();
	cout << "JJJJJJJ\n";
	li.Pop();
	li.Pop();
	cout << "JJJJJJJ\n";
	li.print();
	li.~stack();
	int max, min;
	stack* g = stack::mass(stack::size_lol);//создание массива стеков
	for (int i = 0; i < stack::size_lol; i++)//его вывод
	{
		cout << "Stack[" << i + 1 << "]\n";
		g[i].print();
	}
	max = g[0].getHead();
	min = g[0].getHead();
	for (int i = 1; i < stack::size_lol; i++)//поиск наибольшей и наименьшй вершины стеков
	{
		if (min>g[i].getHead())
			min = g[i].getHead();
		if (max<g[i].getHead())
			max = g[i].getHead();
	}
	cout << "Min Head = " << min << endl;//с нименьшей вершиной
	for (int i = 0; i < stack::size_lol; i++)
	{
		if (min == g[i].getHead())
		{
			cout << "Stack [" << i + 1 << "]\n";
			g[i].print();
		}
	}
	cout << "Max Head = " << max << endl;// с наибольшей вершиной
	for (int i = 0; i < stack::size_lol; i++)
	{
		if (max == g[i].getHead())
		{
			cout << "Stack [" << i + 1 << "]\n";
			g[i].print();
		}
	}
	cout << "Stack with otricateln element\n";//стеки с отрицательными элементами
	for (int i = 0; i < stack::size_lol; i++)
	{
		if (g[i].is_otric())
		{
			cout << "Stack [" << i + 1 << "]\n";
		}
	}
}