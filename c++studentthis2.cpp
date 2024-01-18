#include<iostream>
using namespace std;


class customer{
	public :
		int id;
        char name[100];
		char age[100];
		char telecomename[100];
		char mobileno[100];
		char city[100];
		char simcardvalidity[100];
		


void setData(int id, char name[])
{
	this->id = id;
	strcpy(this->name,name);
	
}
void getData()
{
	cout<<"id = "<<id<<endl<<"name = "<<name<<endl;
	
}


};
main()
{
	customer c;
	c.setData(1, "abce");
	c.getData();
	
	
}
