#include<iostream>
using namespace std;


class student{
	public :
		int id;
		char name[100];
		char age[100];
		char course[100];
		char email[100];
		char city[100];
		char college[100];
		


void setdata(int id, char name[])
{
	this->id = id;
	strcpy(this->name,name);
	
}
void getdata()
{
	cout<<"id = "<<id<<endl<<"name = "<<name<<endl;
	
}


};
main()
{
	student s;
	s.setdata(1, "abce");
	s.getdata();
	
	
}
