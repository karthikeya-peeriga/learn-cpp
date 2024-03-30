#include <iostream>
using namespace std;


int main(){
    cout << "Variables" << endl;
/*
Vars can be declared by 
type variable_name = value;
*/
    int num = 18;
    cout << num << endl;

    //declare and assign value later.
    int myNum;
    myNum = 10;
    cout << myNum << endl;

    //if you write a new value for a virable that already has a value, it will be over written. 
    myNum = 11;
    cout << myNum << endl;

    //double type
    double myDouble = 6.99;
    // char type, use single quotes for char values as double quotes are used for const str values
    char myChar = 'K';
    // string type
    string myStr = "My String";
    // boolean type
    bool myBool = true;
    cout << "types" << myDouble <<endl;     
    cout << myChar <<endl;
    cout << myStr <<endl;
    cout << myBool <<endl;
    
    // operations
    cout << "Operarions\n" << myDouble+myNum << endl;

    // declare many variables
    int w,x,y,z=15;
    w=1;
    x=2;
    y=3;
    cout << "Sum" << endl << x+y << endl;

    // give same value to multiple variables

    int a,b,c,d;
    a=b=c=d=6;
    cout << a;
    return 0;

    /* consts are vars whose values are read only, 
       they cannot be changed by actions of code,
       but only by rewriting the value itself */
       
    const int pi = 3.14;


}
