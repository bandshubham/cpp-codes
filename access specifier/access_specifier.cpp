#include<iostream>
#include<conio.h>
class parent
{
public:
	int a;
private:
	int b;
protected:
	int c;
public:
parent()
{
	a=5;
	b=3;
	c=2;
}

void display(parent* this)
{
	std::cout<<(*this).a<<std::endl<<c<<std::endl<<b<<std::endl;
}


};

class child : public parent
{
public:
	void gun()
	{
		std::cout<<a<<std::endl<<c<<std::endl;
	}
};


class dindi
{	
public:
	parent p;

	void display()
	{
		std::cout<<p.a<<std::endl;
	}
};

int main()
{
	parent p;

/*	p.display();

	int* ptr=reinterpret_cast<int*>(&p);
	
	*ptr=63;

	*(ptr+1)=65;

	*(ptr+2)=73;*/

	p.display(&p);

	getch();
	return 0;
}