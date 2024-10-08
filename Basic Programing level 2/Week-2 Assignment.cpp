#include<iostream>
using namespace std;

// bool isPrime(int number){
//     for (int  i = 2; i <=(number-1); i++)
//     {
//       if (number % i ==0)
//     {
//         return false;
//     }   
//     }
//     return true;
// }

// void PrintIntegerDigit(int n){
//     while (n>0)
//     {
//      int onePlacedigit = n % 10;
//      cout<<"Digit :"<<onePlacedigit<<endl;
//      n  = n / 10;   
//     }
// }

// float areaOfcircle(float r){
//     float area = 3.14*r*r;
//     return area;
// }

// bool isEven(int n){
//     for (int i = 0; i < n; i++)
//     {
//         if (!(n&1))
//         {
//             return true;
//         }
//     }
//     return false;
// }

// bool isPrime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

//  Factorial of a number:
// long long int Fact(long long  int n){
//     long long  int fact = 1;
//     for (int i = 1; i <=n; i++)
//     {
//        fact = fact*i;
//     }
//     return fact;
// }

// KMtoMiles convert 
// double KmTomiles(double km)
// {
//     double _1km = 0.621371;
//     double convert = km*_1km ;
//     return convert;
// }

int main(){

    // int n;
    // cout<<"Enter the value of n -:";
    // cin>>n;
    


//  double km;
//  cout<<"Enter km :";
//  cin>>km;
// double ans = KmTomiles(km);
// cout<<ans;


// long long int Answer = Fact(n);
// cout<<Answer;


// for (int i = 1; i<n; i++)
// {
//     bool check= isPrime(i);
//    if (check==true)
// {
//     cout<<i<<endl;
// }
// }


// bool ans = isEven(n);
// if (ans==true)
// {
//    cout<<"Even ";
// }
// else{
//     cout<<"Odd ";
// }


// float ans = areaOfcircle(5);
// cout<<"Area of circle "<<ans;


// Print all digit of integers
//PrintIntegerDigit(n);


// Print N to 0 numbers
    // for (int i = n; i >0; i--)
    // {
    //     cout<<i<<endl;
    // }
    

    // bool ans =  isPrime(2);
    // if (ans==true)
    // {
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }
    // cout<<ans;

    
    // 1. Numric  Hollow Half Pyramid
    // int n;
    // cout<<"Enter the value of n -:";
    // cin>>n;

 // for (int row = 0; row <n; row++)
    // {
    //     for (int col = 0; col<row+1; col++)
    //     {
    //         if (row==n-1  || row==0 || row==col|| col==0)
    //         {
    //             cout<<col+1<<" ";
    //         }
    //         else
    //             cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    

// 2. Numric  Hollow Inverted Half Pyramid
    // for (int row = 0; row< n; row++)
    // {
    //     for (int col = row+1; col <= n; col++)
    //     {
    //        if (col==row+1  || row==0 || col==n)
    //        {
    //         cout<<col<<" ";
    //        }
    //        else 
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }

// 3. Numric Palindrine Equilateral Pyramid
//     int k=n;
//     // outer loop
//    for (int row = 0; row<n; row++)
//     {
//         // inner loop
//         int c=1;
//        for (int col = 0; col <k ; col++)
//        {
//           if (col<n-row-1) // space  ke liye 
//             {
//                 cout<<" ";
//             }
//             else if(col<=n-1){
//                 cout<<c;
//                 c++;
//             }
//             else  if (col == n)
//             {
//                 c = c - 2;
//                 cout<<c;
//                 c--;
//             }
//             else{
//                 cout<<c;
//                 c--;
//             }           
//        }
//        k++;
//        cout<<endl;
//     }
    

// 4. solid half diamond
//    for (int i = 0; i < 2*n-1; i++)
//    {
//         int cond = i;
//         if (i<n)
//         {
//             cond=i;
//         }
//         else{
//             cond = n - (i % n)-2;
//         }
//         for (int j = 0; j <= cond; j++)
//         {
//             cout<<"*";
//         }     
//         cout<<endl;
//    }
   
    
// 5. 


    return 0;
}