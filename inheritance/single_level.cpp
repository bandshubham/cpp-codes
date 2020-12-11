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

class child : public parent
{
public:
	int p;
private:
    int q;
protected:
	int r;
	
public:
	child()
	{
		p=40;
		q=50;
		r=60;
	}

	void display()
	{
		std::cout<<this->a<<std::endl;
		std::cout<<this->c<<std::endl;

		//std::cout<<this->c<<std::endl;
		//std::cout<<this->b // here b is private member are not allowed in child
		/*parent pa;
		std::cout<<pa.b<<std::endl;*/
	
	}
};



int main()
{
	parent p;
	 child c;
		
     c.display();
		 getch();
	 return 0;

}