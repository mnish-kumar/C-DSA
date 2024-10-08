#include<iostream>
using namespace std;

int main(){
    
    // 1** int into float **
    // IMPLICIT TYPEcasting
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + num2 ;   // Implicit conversion num1 from into float
    // cout<<result<<endl;

    // 2** char into int **
    char ch = 'A';
    int a = ch + 1;     // Implicit conversion char into int 
    cout<<a<<endl;      // 66 print hoga int lenge to , int ke jagah char lenge to wo char me convert ho jayega.

    int a= 65;
    char ch = a;
    cout<<ch<<endl;



    // ** EXPLICIT CASTING **
    // double to int
    // double pi = 3.14159265;
    // int intpi = (int)pi ;
    // cout<<intpi<<endl;

    // float to char 
    // float floatingNumber = 65.35;
    // char charValue = (char)floatingNumber;
    // cout<<charValue<<endl;

    // int to float
    // int a = 10 ;
    // int b  = 3.0;
    // float  c = a/b;
    // cout<<c<<endl;

    // point me answer lane ke liye
  //  int a = 10;
    // int b = 3.0;
    // float c = ((float)a)/b; // Explicit conversion from int to float
    // cout<<c<<endl;

    return 0;
}