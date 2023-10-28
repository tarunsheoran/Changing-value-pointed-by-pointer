#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int* b;
   b= &a;
    // print var
    cout<<"a = "<<a<<endl;

    // print *pointVar
    cout<<"*b = "<<*b<<endl;



    cout << "Changing value of a to 7:" << endl;
    // change value of var to 7
    a = 7;
    // print var
    cout << "a = " << a << endl;
    // print *pointVar
    cout << "*b = " << *b << endl;
       
	     

    cout << "Changing value of *pointVar to 16:" << endl;
    // change value of a to 16
    *b = 16;
    // print a
    cout << "a = " << a << endl;
    // print *pointVar
    cout << "*b = " << *b << endl;
    return 0;
}
