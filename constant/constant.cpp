#include<iostream>
#include<conio.h>

class constant
{
public:
    const int a;
	int b;
	int c,d,e,f;

	constant() : a(99)
	{
		b=20;
		c=30;
		e=60;
		f=80;
		d=64;
	};
	void display() const
	{

		std::cout<<a<<b<<c<<std::endl;
		
	}

	void temp()
	{
       std::cout<<d<<e<<f<<std::endl;
	}
};


int main()
{
   const constant d;
	  d.display();
      d.temp();
	getch();
	return 0;
}

/* jar object constant constant kela tar to fakt ani fakt constant data member lach access karu shakto karan to this pointer jatana 
pointer typechi value gheun jato ani nanter to non constant sathi typecast nhi karu shakat tymule error yete
ani jar object  non constant asel tar to constant as well as nonconstant donhi pan member function la access karu shakto

   */
