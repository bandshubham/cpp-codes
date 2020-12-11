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
		a=10;
		b=20;
		c=30;
	}
};

class child1:protected parent 
{
public:
	int x;
private:
	int y;
protected:
	int z;

public:
	child1()
	{
		x=10;
		y=20;
		z=30;
	}

};

class child2:public child1
{
public:
/*	void display()
	{
		std::cout<<a<<std::endl;
		std::cout<<c<<std::endl;
		std::cout<<x<<std::endl;
		std::cout<<z<<std::endl;
	}
when access specifier of child1 is public then public and protected  variables from parent
are accessible in grandchild child2
*/
/*
void display()
	{
		std::cout<<a<<std::endl;
		std::cout<<c<<std::endl;
		std::cout<<x<<std::endl;
		std::cout<<z<<std::endl;
		std::cout<<z<<std::endl;

	}

	when access specifier of child1 is private then nothing is 
 accessible from parent in grandchild child2

*/

void display()
	{
		std::cout<<this->a<<std::endl;
		std::cout<<this->c<<std::endl;
	}
 /*when access specifier of child1 is protected then public and protected  variables from parent
   are accessible in grandchild child2 */
};

int main()
{
	parent p1;
	child1 ch1;
	child2 ch2;
	ch2.display();
	getch();
	return 0;
}

