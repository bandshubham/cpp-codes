#include<iostream>
#include<conio.h>

class demo
{
public:
	demo& fun(demo d)
	{
		std::cout<<"i am in fun"<<std::endl;
		return (*this);
	}
	demo& gun(demo d)
		{
		std::cout<<"i am in gun"<<std::endl;
		return (*this);
	    }
	demo& run()
		{
		std::cout<<"i am in run"<<std::endl;
		return (*this);
	    }
};

int main()
{
	demo d;
	d.fun(d.gun(d.run()));
	
	_getch();
	return 0;

	
}