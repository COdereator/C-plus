// Q4 Program to Input in File and Print Using Files

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class biodata{
	
	private :
		int age,number,experience;
		char name[255] ;
		char work[255];
		char add[255];
		char email[255];
	
	public:
		biodata();
		void input_in_file();
		void output_from_file();	
};
 biodata::biodata()
 {
 	cout<<"\nEnter your Name : ";
 	cin.get(name , 255 , '\n');
 	cout<<"\nEnter Your Age :";
 	cin>>age;
 	cout<<"\nEnter your Mobile Number: ";
 	cin>>number;
 	getchar();
 	cout<<"\nEnter Your Email ID :";
 	cin.get(email , 255 , '\n');
 	getchar();
 	cout<<"\nEnter Your Address :";
 	cin.get(add , 255 , '\n');
 	getchar();
 	cout<<"\nEnter Your Work :";
 	cin.get(work , 255 , '\n');
	getchar();
 	cout<<"\nEnter Your Experience :";
 	cin>>experience;
 	getchar();
 }
 void biodata::input_in_file()
 {
 	int i;
 	fstream obj;
	obj.open("File1.txt ",ios::app);
	obj.put('\n');
	for(i=0 ; name[i]!='\0' ; i++ )
	{
		obj.put(name[i]);
	}
	obj.put(age);
	obj.put('\n');
//	obj.put("Mobile Number : ");
	obj.put(number);
	obj.put('\n');
	for(i=0 ; email[i]!='\0' ; i++ )
	{
		obj.put(email[i]);
	}
	obj.put('\n');
	for(i=0 ; add[i]!='\0' ; i++ )
	{
		obj.put(add[i]);
	}
	obj.put('\n');
	obj.put(experience);
	obj.close();
 }
  void biodata::output_from_file()
 {
 	fstream obj;
 	obj.open("File1.txt ",ios::in);
 	char ch;
 	obj.seekg(0);
 	while(obj.eof()==0)
 	{
 		ch=obj.get();
 		cout<<ch;
	 }
	 obj.close();
 }

int main()
{
	biodata call;     // while declaring object function calls automatically
	call.input_in_file();
	call.output_from_file();
	return 0;
}



