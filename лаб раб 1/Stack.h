
class stack
{
	double Number;
	stack(int);
public:
	static const int size = 5;
	static int size_lol;
	stack* head;
	stack* prev;
	stack();
	stack(double);
	~stack();
	double getHead();
	void Push(double); 
	void Pop();
	void print();
	bool isHead();
	stack(const stack&);
	static stack* mass(int);
	bool is_otric();
};
