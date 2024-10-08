#include<iostream>
using namespace std;

int sum(int a, int b){
int totalsum=a+b;
return totalsum;
}

int getmultiplication(int x, int y, int z){
    int answer=x*y*z;
    return answer;
}

void printName10times(){
    for (int i = 1; i<=10; i++)
    {
        cout<<"Manish Sharma"<<endl;
    }
    
}


void print5table(){
    int i=5;
    while (i<=50 )
    {
        cout<<i<<endl;
        i = i+5;
    }
    
}

int convertIntoCelcius(int  far){
    int celcius = (far - 32)*5/9;
    return celcius;
}


char convertIntoUpperCase(char ch){
char answer = ch -'a' + 'A';
 return answer;
}


void printMyName(){
    cout<<"Manish"<<endl;
}


int main(){

    // Function calls
    
    int ans = sum(5,10);
    cout<<ans<<endl;

    printMyName();

    int MultiplyAnswer = getmultiplication(2,3,4);
    cout<<"Multiply : "<<MultiplyAnswer<<endl;

    printName10times();

    print5table();

    int far=32;
    int Convertcelcious = convertIntoCelcius(far);
    cout<<"Celcious : "<<Convertcelcious<<endl;

    char ch = 'm';
    char Answer = convertIntoUpperCase(ch);
    cout<<Answer<<endl; 




    return 0;
}