#include<iostream>
#include<conio.h>


class demo
{
                                      
	int a;
	int b;
	int c;

	demo(int x,int y,int z)
	{
		this->a=x;
		this->b=y;
		this->c=z;
	}
friend std::ostream& operator<<(std::ostream& os,demo& other);//if we are making data member private then only .... 
};


std::ostream& operator<<(std::ostream& os,demo& other)//we can't write the function of another class in the demo class 
{													  // refernce variable of cout is os          
	os<<other.a<<std::endl;                            
	os<<other.b<<std::endl;
	os<<other.c<<std::endl;
	return os;
}


int main()
{
	demo d1(10,20,30);
	demo d2(60,70,80);
	std::cout<<d1<<d2; //requirement of<< is premitive datatype << userdefine object
	getch();
	return 0;
}

