#include<iostream>
using namespace std;


class house{
	public:
		char houseno[1000];
		char name[100];
		char address[100];
		char roomno[100];
	    char city[100];
		
};


main()


{
	house h[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter house no. = ";
		cin>>h[i].houseno;
		cout<<"Enter house name = ";
		cin>>h[i].name;
		cout<<"Enter address = ";
		cin>>h[i].address;
		cout<<"Enter room no. = ";
		cin>>h[i].roomno;
		cout<<"Enter city = ";
		cin>>h[i].city;
	
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<"house no. is = "<<h[i].houseno<< endl;
		cout<<"house name is = "<<h[i].name<< endl;
		cout<<"address is = "<<h[i].address<< endl;
		cout<<"room no. is = "<<h[i].roomno<< endl;
		cout<<"city is = "<<h[i].city<< endl;
	
	 	
	}
	
	
}

