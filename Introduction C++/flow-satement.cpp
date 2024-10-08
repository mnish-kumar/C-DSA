#include<iostream>
using namespace std;

int main(){
    
    // int age;
    // cout<<"Only adult enter in Bar :"<<endl;
    // cin>>age;

    // if (age>=18)
    // {
    //     cout<<"Eligible for enter in the Bar : "<<endl;
    // }
    // else{
    //     cout<<"You are not eligible..."<<endl;
    // }
    

   // If else if  
    string signal;
    cout<<"Enter the value of signal "<<endl;
    cin>>signal;

    if (signal=="Red")
    {
        cout<<"stop"<<endl;
    }

    else if (signal=="Green")
    {
        cout<<"U Go "<<endl;
    }

    else{
        cout<<"Ready for Go "<<endl;
    }    
    
   // Nested if :
    // int height;
    // cout<<"Enter your height in feet: "<<endl;
    // cin>>height;

    // int weight;
    // cout<<"Enter your weight :"<<endl;
    // cin>>weight;
    
    // if (height>5)
    // {
    //    if (weight>70)
    //    {
    //     cout<<"Perfect Body"<<endl;
    //    }

    //    else{
    //     cout<<"Tumse n ho payega."<<endl;
    //    }
    // }
    
    // else{
    //     cout<<"Complain dila du"<<endl;
    // }



    return 0;
}