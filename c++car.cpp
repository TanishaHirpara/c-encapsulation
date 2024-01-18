#include<iostream>
using namespace std;


class car{
	public:
		int id;
		char companyname[100];
		char model[100];
		char colour[100];
        char releaseyear[100];
	
		
};


main()


{
	 car c[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter car id = ";
		cin>>c[i].id;
		cout<<"Enter car company name = ";
		cin>>c[i].companyname;
		cout<<"Enter car model = ";
		cin>>c[i].model;
		cout<<"Enter car colour = ";
		cin>>c[i].colour;
		
		cout<<"Enter car release year = ";
		cin>>c[i].releaseyear;

		
	}
	for(int i=0;i<5;i++)
	{
		cout<<"car id is = "<<c[i].id<< endl;
		cout<<"employee company name is = "<<c[i].companyname<<endl;
		cout<<"car model is = "<<c[i].model<< endl;
		cout<<"car colour is = "<<c[i].colour<<endl;
	
	 	cout<<"car release year is = "<<c[i].releaseyear<<endl;
	 	
	 
	 	 }
	
	
}

