#include<iostream>
#include<conio.h>


class demo
{
 int arr_size,*p;
public:


 demo(int size)
 {
	 this->arr_size=size;
	 p=(int*)malloc((this->arr_size)*sizeof(int));
 }

 int& operator[](int i)
 {
	 if(i>=0 &&i<=(this->arr_size))
	 {
		 this->p[i]=i;
		 return p[i];
	 }
	 else
	 {
		 std::cout<<"error";
	 }
 
 }

};


int main()
{
	demo d1(5);

	for(int i=0;i<5;i++)
	{
		d1[i]=i;
	}

	for(int i=0;i<5;i++)
	{
		std::cout<<d1[i]<<std::endl;
	}
	getch();
	return 0;
}