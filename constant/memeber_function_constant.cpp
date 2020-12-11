//Mutable useas

#include<iostream>
#include<conio.h>
class demo
{
	mutable int a;
	int b;
	demo()
	{
		a=10;
		b=40;
	}

	void display() const
	{ 
		(this->a)++;
		std::cout<<(this->a)<<b;
	}
};

int main()
{
	demo d();
	d.display();
	return 0;
	getch();
}







/*#include<iostream>
#include<conio.h>

class constant
{
public:
    const int a;
	int b;
	int c,d,e,f;

	constant() : a(99)
	{
		b=20;
		c=30;
		e=60;
		f=80;
		d=64;
	};
	void display() const
	{

		std::cout<<a<<b<<c<<std::endl;
		
	}

	void temp()
	{
       std::cout<<d<<e<<f<<std::endl;
	}
};


int main()
{
   const constant d;
	  d.display();
      d.temp();
	getch();
	return 0;
}*/