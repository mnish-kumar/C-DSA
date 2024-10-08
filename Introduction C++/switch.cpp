#include<iostream>
using namespace std;

int main(){
    
    // char grade;
    // cout<<"Enter your grade: "<<endl;
    // cin>>grade;

    // switch (grade)
    // {
    //     case 'A': cout<<"Your number bweteen 90 to 100."<<endl;
    //     break;

    //     case 'B': cout<<"Your marks between 90 to 80."<<endl;
    //     break;

    //     case 'C':  cout<<"Your marks between 80 to 70.<<endl";
    //     break;

    //     case 'D': cout<<"Your marks between 70 to 60."<<endl;
    //     break;

    //     default: cout<<"Your marks between 0 to 60"<<endl;
    // }

// Upar wale ko hi ulta karke banaya hai if else ke form me.

    char grade;
    cout<<"Enter your grade :";
    cin>>grade;

    if (grade=='A')
    {
        cout<<"Your number bweteen 90 to 100"<<endl;
    }
    
    else if (grade == 'B')
    {
        cout<<"Your marks between 90 to 80."<<endl;
    }
    
    else if (grade == 'C')
    {
     cout<<"Your marks between 80 to 70.<<endl";   
    }
    
    else if (grade == 'D')
    {
        cout<<"Your marks between 70 to 60."<<endl;
    }
    
    else{
        cout<<"Your marks between 0 to 60"<<endl;
    }

    return 0;
}