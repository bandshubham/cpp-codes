#include<iostream>
#include<conio.h>

class person
{
	char name[20];
	int age;

public:
	person(const char* name ="" ,int age=0)
	{
		strcpy(this->name, name);
		this->age=age;
	}

	char* get_name()
	{
		return this->name;
	}

	int get_age()
	{
		this->age;
	}

	void display()
	{
		std::cout<<"name:"<<this->name<<std::endl;
		std::cout<<"age:"<<this->age<<std::endl;
	}
};


class employee : public person
{
	public:
	int id;
	float salary;


	employee(const char* name="",int age=0,int id=0,float salary=0.0f):person(name,age)
	{
		this->id=id;
		this->salary=salary;
	}

	int get_id()
	{
		return this->id;
	}
	
	float get_salary()
	{
	 this->salary;
	}

	void display()
	{
       person :: display();
		std::cout<<"id:"<<id<<std::endl;
		std::cout<<"salary"<<salary<<std::endl;
	}
};

int main()
{

	person p("shubham",20);            //their are 3types of object slicing here we
	p.display();                       //copy the one slice of object e to object p
	employee e("nikhil",21,94,400.0f); // so we got an output of nikhil,21 for p.display() here this is prove that at the object of e upper box contain an 
	                                   //adreess of whole parent p 
	e.display();
	p=e;
	p.display();
	getch();
	return 0;
}