#include<iostream>
#include<conio.h>

class demo
{
	int a;
	int b;
	int c;
	public:
	demo()
	{
	}
    
	demo(int x,int y,int z)
	{
		this->a=x;
		this->b=y;
	    this->c=z;
	}

	demo& operator++(int x)
	{
		demo t = *(this);
		this->a++;
		this->b++;
		this->c++;
		return t;
	}
	demo& operator++()
	{
        this->a++;
		this->b++;
		this->c++;
		return *this;
	}
	
	void display()
	{
		std::cout<<a<<b<<c<<std::endl;
	}
};

int main()
{
	demo d1(10,20,30);
	demo d2;
	demo d3;
	d2=(d1)++;
	d3= ++d1;
	d1.display();
	
	d1.display();
	d2.display();
	d3.display();
	
	getch();
	return 0;
}