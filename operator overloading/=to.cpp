#include<iostream>
#include<conio.h>
#include<stdlib.h>

class demo
{
public:
int a;
int b;
int *p;
demo()
{
}

demo(int x,int y,int z)
{
this->a=x;
this->b=y;
this->p=(int*)malloc(sizeof(int));
*(this->p)=z;
}


demo(demo &other)
{
this->a=other.a;
this->b=other.b;
this->p=(int*)malloc(sizeof(int));
*(this->p)=*(other.p);

}


void display()
{
            std::cout<<a<<std::endl;
			std::cout<<b<<std::endl;
			std::cout<<*p<<std::endl;
}

demo operator=(demo &other)
{
	this->a=other.a;
    this->b=other.b;
    this->p=(int*)malloc(sizeof(int));
    *(this->p)=*(other.p);
	return *this;
}

};


int main()
{
std::cout<<"d1"<<std::endl;
 demo d1(10,20,30);
 d1.display();
 demo d2(d1); //copy constructor
 (*(d2.p))++;
 std::cout<<"d2"<<std::endl;
 d2.display();
 std::cout<<"d1"<<std::endl;
 d1.display();

 /*demo d3=d1;
 std::cout<<"d3"<<std::endl;
 d3.b++;
 d3.display();
 std::cout<<"d1"<<std::endl;
 d1.display();


 demo d4;
 d4=d1;

 d4.b++;
 (*d4.p)++;
 std::cout<<"d4"<<std::endl;
 d4.display();
 std::cout<<"d1"<<std::endl;
 d1.display();*/
 getch();
 return 0;
}