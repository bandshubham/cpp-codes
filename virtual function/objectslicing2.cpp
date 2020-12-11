#include<iostream>
#include<conio.h>
class parent1
{
	int a;
};

class parent2
{
	int b;
};

class parent3
{
	int c;
};
class child:public parent1,public parent2,public parent3
{
	int d;
};
int main()
{
	child c1;
	parent1 p1=c1;
	parent2 p2=c1;
	parent3 p3=c1;
	std::cout<<"size of child c1:"<<sizeof(c1)<<std::endl;
	getch();
	return 0;
}

//   child c1=[a,b,c,d]
//  now here we are going to 