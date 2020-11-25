#include<iostream>
#include<conio.h>

class demo
{
	int a;
	int b;
	int c;

public:
	demo(int x,int y,int z)
	{
		this->a=x;
		this->b=y;
	    this->c=z;
	}

	int operator==(demo &other)
	{
		return((this->a==other.a)&&(this->b==other.b)&&(this->c==other.c));
	}

};

int main()
{
	demo d1(10,20,30);
	demo d2(10,20,30);
	int a=(d1==d2);
	if(a==1)
	{
		std::cout<<"true";
	}
	else
	{
		std::cout<<"false";
	}
	getch();
	return 0;
}