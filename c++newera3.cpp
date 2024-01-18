#include<iostream>
using namespace std;


class employee{
	public:
		int id;
		char name[100];
		char role[100];
		char age[10];
		char experience[800];
		char salary[10];
		char city[100];
		char companyname[100];
		
};


main()


{
	employee e[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter employee id = ";
		cin>>e[i].id;
		cout<<"Enter employee name = ";
		cin>>e[i].name;
		cout<<"Enter employee role = ";
		cin>>e[i].role;
		cout<<"Enter employee age = ";
		cin>>e[i].age;
		cout<<"Enter employee experience = ";
		cin>>e[i].experience;
		cout<<"Enter employee salary = ";
		cin>>e[i].salary;
		cout<<"Enter employee city = ";
		cin>>e[i].city;
		cout<<"Enter employee company name = ";
		cin>>e[i].companyname;
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<"employee id is = "<<e[i].id<< endl;
		cout<<"employee name is = "<<e[i].name<< endl;
		cout<<"employee role is = "<<e[i].role<< endl;
		cout<<"employee age is = "<<e[i].age<< endl;
		cout<<"employee experience is = "<<e[i].experience<< endl;
		cout<<"employee salary is = "<<e[i].salary<< endl;	
	 	cout<<"employee city is = "<<e[i].city<< endl;
	 	cout<<"employee company name is = "<<e[i].companyname<<endl;
	 	
	}
	
	
}

