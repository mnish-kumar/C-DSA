#include<iostream>
#include<limits.h>
using namespace std;


// void Print(int arr[] , int size){
//     for (int index = 0; index < size; index++)
//     {
//         cout<<arr[index]<<" ";
//     }
    
// }


// bool CheckTraget(int arr[] , int size , int target){

// // right to left ke liye 
// for (int i = size-1; i>0; i--)
// {
//     if (arr[i]==target)
//     {
//         return true;
//     }
//     return false;
// }



// // left to right se
//     for (int i = 0; i < size; i++)
//     {
//         int CurrentElement = arr[i];
//         if (CurrentElement==target)
//         {
//             return true;
//         }
        
//     }
//     // agar aap yaha tak aa gaye  hai iska matlab target nahi mila 
//     // loop khatm ho gaya element not exist
//     // iska matlab return false hoga else me
//     return false;
// }

int FindMax(int arr[], int size){
    int maxAns=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxAns=max(maxAns, arr[i]);
    }
    return maxAns;
}

int main(){

int arr[100];
int size;
cout<<"Enter the numbers of element ";
cin>>size;

for (int i = 0; i < size; i++)
{
    cout<<"Enter the value of index "<<i<<endl;
    cin>>arr[i];
}
cout<<"Max number is"<<FindMax(arr,size)<<endl;


// int arr[100];
// int size;
// cout<<"Enter the numbers of element ";
// cin>>size;

// for (int i = 0; i < size; i++)
// {
//     cout<<"Enter the value of index "<<i<<endl;
//     cin>>arr[i];
// }
// int target;
// cout<<"Enter the value of target "<<endl;
// cin>>target;

// bool ans = CheckTraget(arr , size , target);
// cout<<ans;


// int arr[]={10,20,30,40,50};
// int size = 5;
// int target = 50;    // print-1 element present hai to na hoga to 0 print hoga

// bool ans = CheckTraget(arr,size , target);
// cout<<ans<<endl;



    
// int arr[]={10,20,30,40};
// int size =4;

// Print(arr , size);



  
    // Creation
    // int arr[5];

    // // inialize
    // int crr[]={1,2,3,4};
    // int drr[]={0};
    // cout<<drr[0]<<endl;
    // cout<<crr[1]<<endl;


    // fill karne ke liye 

    // int arr[4];
    // fill(arr,arr+4,8);
    // cout<<"[" <<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<"]"<<endl;


    // Input lene ke liye
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Enter the value of index "<<i<<endl;
    //     cin>>arr[i];
    // }
    // //print
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     cout<<arr[i]<<" ";
    // // }

    // for (int i = 0; i < 5; i++)   // arr[i] or i[arr]  dono tarah se chalta hai
    // {
    //     cout<<i[arr];
    // }
    
    

    return 0;
}