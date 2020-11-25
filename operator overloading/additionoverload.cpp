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



demo operator+(demo &other)
{
	demo d3;
	d3.a=this->a+other.a;
    d3.b=this->b+other.b;
    d3.p=(int*)malloc(sizeof(int));
	*(d3.p)=*(this->p)+*(other.p);
	return d3;
}

};


int main()
{
std::cout<<"d1"<<std::endl;
 demo d1(10,20,30);
 d1.display();
 demo d2(10,20,30); //copy constructor
 

 demo d3;
  d3=d1+d2;
  std::cout<<"+operator overloaded d3"<<std::endl;
 d3.display();

 /*demo d3=d2;
 std::cout<<"d3"<<std::endl;
  (*(d3.p))++;
 d3.display();
 std::cout<<"d1"<<std::endl;
 d2.display();
 */


  getch();
 return 0;
}