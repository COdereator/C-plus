#include<iostream>
#include<string>
using namespace std;
int main()
{

    char str[200];
    cout<<"Enter the String: ";
    cin.get(str , 200 , '\n');
    cout<<"\nYou've entered: "<<str;
    cout<<endl;
    return 0;
}
