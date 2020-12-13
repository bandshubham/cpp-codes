#include<iostream>
#include<conio.h>

class a
{
public:
	int x;
	a()
	{
		this->x=100;
	}
};

class b
{
	public:
	int y;
	b()
	{
		this->y=200;
	}

};

class c
{
	public:
	int z;
	c()
	{
		this->z=300;
	}
};

class d:public a,public b,public c
{
	public:
	int p;
	d()
	{
		this->p=400;
	}
};

int main()
{
	d dobj;

	a* aptr=&dobj;
	b* bptr=&dobj;
	c* cptr=&dobj;

	std::cout<<"&dobj :="<<&dobj<<std::endl;
	std::cout<<"&aptr :="<<aptr<<std::endl;
	std::cout<<"&bptr :="<<bptr<<std::endl;
	std::cout<<"&cptr :="<<cptr<<std::endl;

   
	/*
	&dobj :=004FFB44
	&aptr :=004FFB44
	&bptr :=004FFB48
	&cptr :=004FFB4C
	*/

	
	std::cout<<"a :="<<aptr->x<<std::endl;
	std::cout<<"b :="<<bptr->y<<std::endl;
	std::cout<<"c :="<<cptr->z<<std::endl;
	std::cout<<"d :="<<dobj.p<<std::endl;


	/*
	a :=100
b :=200
c :=300
d :=400
*/

std::cout<<"a:"<<std::endl<<dobj.x<<std::endl;
std::cout<<"b:"<<std::endl<<dobj.y<<std::endl;
std::cout<<"c:"<<std::endl<<dobj.z<<std::endl;
std::cout<<"d:"<<std::endl<<dobj.p<<std::endl;



	getch();
	return 0;
}