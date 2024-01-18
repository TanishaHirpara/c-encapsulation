#include<iostream>
using namespace std;


class student{
	private:
	int id;
	char name[100];
	char address[100];
	int std;
	char contactno[100];
	
	

public:
	
	void setdata()
	{
		cout<<"Enter student id = ";
		cin>>id;
		cout<<"Enter student name = ";
		cin>>name;
		cout<<"Enter student address = ";
		cin>>address;
		cout<<"Enter student standard = ";
		cin>>std;
		cout<<"Enterstudent contact no. =";
		cin>>contactno;
		
		
	}
	void getdata()
	{
		cout<<"student id is = "<<id<<endl
		<<"student name is = "<<name<<endl
		<<"student address is = "<<address<<endl
		<<"student standard is ="<<std<<endl
		<<"student contact no. is ="<<contactno<<endl;
	}
	
	
};
main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
    s5.setdata();
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	
	
}

