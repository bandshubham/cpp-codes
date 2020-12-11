#include<iostream>
#include<conio.h>

class student
{
public:

	int b;
	static int a;
	
	student(int x)
	{
		b=x;
	};

	void display()
	{
		std::cout<<b<<std::endl<<a<<std::endl;
	}
};

int student::a=10;
int main()
{
	student s(20);
    s.display();
	getch();
}
