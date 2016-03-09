#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Student{
private: string sem,name,branch,usn;
public: void pack();
		void search(string);
		void read();
		void write();
		void insert();
		string buffer;
		fstream f1;
};
int main()
{
	int choice;
	Student s1;
	string key,d1;
	cout<<"1.INSERT\n2.SEARCH\n";
	while(1)
	{
	cout<<"Enter your choice:\n";
	cin>>choice;
	switch(choice)
		{
		case 1:s1.insert();
				break;
		/*case 2: cout<<"enter the key:\n";
				cin>>key;
			    s1.search(key);
			    break;*/
		default: cout<< "not selected\n";
		 	 	 	 	 break;
		}
	}
	return 0;
}
void Student::insert()
{
	read();
	pack();
	write();
}
void Student::read()
{
	cout<<"enter usn:\n";
	cin>>usn;
	cout<<"enter the name:\n";
	cin>>name;
	cout<<"enter branch:\n";
	cin>>branch;
	cout<<"enter the semester:\n";
	cin>>sem;
}
void Student::pack()
{
	string temp;
	temp=usn+'|'+name+'|'+branch+'|'+sem;
	temp.resize(1,'$');
}
void Student::write()
{
	int pos,i=0,rrn[100];
	string buffer;
	f1.open("data.txt",ios::out|ios::app);
	f1<<buffer;
	pos=buffer.size();
	rrn[i++]=pos;
}
