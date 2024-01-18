#include<iostream>
using namespace std;


class hotel{
	public :
	int id;
   static char name[100];
	char type[100];
	float rating;
	char location[100];
	int establishyear;
	int staffquantity;
	int roomquantity;
			
};

static char name[] = "abce ";


main()
{
	cout<<"static data = "<<name<<endl;
	
	hotel h;
	strcpy(h.name, "abce " );
	
	cout<<"\n data \n ";
	
	cout<<"id = "<<h.id<<endl<<"name = "<<h.name<<endl;
	
	
}
