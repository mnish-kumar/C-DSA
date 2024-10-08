#include<iostream>
#include<algorithm>
using namespace std;

// 1.
// int FindUniqueNumber(int arr[], int size){
//     int ans =0;
//     for (int i = 0; i < size; i++)
//     {
//         ans= ans ^ arr[i];
//     }
//     return ans;
// }

//2.
// void CountZeoAndOne(int arr[],int size){
//     int ZeroCount = 0;
//     int CountOne = 0;
//     // Counting
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==0)
//         {
//             ZeroCount++;
//         }
//         if (arr[i]==1)
//         {
//            CountOne++;
//         }
//     }
    // Insertion
    // for (int i = 0; i < ZeroCount; i++)
    // {
    //     arr[i]=0;
    // }
    // for (int i = ZeroCount; i < size; i++)
    // {
    //     arr[i]=1;
    // }

    // ya phir fill se insertion kar sakte hai 
//     fill(arr,arr+ZeroCount,0);
//     fill(arr+ZeroCount , arr+size  , 1);
// }

//3.
// void PrintAllPairs(int arr[] , int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j<n; j++)
//         {
//             cout<<arr[i]<<","  <<arr[j]<<endl;
//         }
        
//     }
    
// }

//4. Two sum
// bool CheckTwoSum(int arr[] , int size){
//     int TargetElement = 105;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i]+arr[j]==TargetElement)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

//5.
// pair<int,int> CheckTwoSum(int arr[] , int size , int TargetElement){
//     // int TargetElement = 105;
//     pair<int,int> ans = make_pair(-1,-1);
//     // asuming -1,-1 not answer found
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] + arr[j] == TargetElement)
//             {
//                 ans.first = arr[i];
//                 ans.second = arr[j];
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

//6. Print all pairs that provide target
// void CheckTwoSum(int arr[] , int size , int target){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j< size; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 cout<<arr[i]<<" , " <<arr[j]<<" "<<endl;
//             }
//         }
//     }
// }

//7.  T.C=n^3  S.C=O(1)
// void PrintAllTriplets(int arr[] , int n){
//     int count = 0;
//     for ( int i= 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             for (int k = 0; k <n; k++)
//             {
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                 count++;
//             }
//         }
//     }
//     cout<<"Total triplets-> "<<count<<endl;
// }

//8.
// bool CheckThreeSum(int arr[], int n , int target){
//         for (int i = 0; i < n; i++)
//         {
//             for (int j =i+1; j<n; j++)
//             {
//                 for (int k = j+1; k < n; k++)
//                 {
//                     if (arr[i]+arr[j]+arr[k]==target)
//                     {
//                         cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k];
//                     }
//                 }
//             }
//         }
// }

void RotateArray(int arr[],int size, int shift){
    int FinalShift = shift % size;
    if (FinalShift==0)
    {
        // no need do anything
        return;
    }
    
    // Step 1 : Copy last two element in to a temp array
    int temp[10000];
    int index = 0;
    for (int i =size-FinalShift; i < size; i++)
    {
        temp[index]=arr[i];
        index++;
    }

    // Step 2: Shift array elements by finalshift places
    for (int i = size-1; i >=0 ; i--)
    {
       arr[i]=arr[i-FinalShift];
    }

    //step3:- copy temp elemets in original array
    for (int i = 0; i < FinalShift; i++)
    {
        arr[i]=temp[i];
    }
    
    
}


int main(){


    // 1.
    // int arr[]={1,2,3,1,2,3,4};
    // int size = 7;
    // int ans = FindUniqueNumber(arr, size);
    // cout<<"Unique Number is --> "<<ans;

    //2.
    // int arr[]={1,0,0,1,1,0,1};
    // int size =7 ;
    // //CountZeoAndOne(arr , size);
    // // Sort ke through
    // sort(arr , arr+size);
    // for (int  i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    //3.
    // int arr[]={10,20,30,40};
    // int size = 4;
    // PrintAllPairs(arr,size);
  
    //4.
//  int arr[]={10,5,20,15,30};
//     int size = 5;
//     bool ans = CheckTwoSum(arr , size);
//    if(ans==true){
//     cout<<ans;
//    }
//    else{
//     cout<<"Not present";
//    }
    
//5.
// int arr[]={10,30,100,5,34};
// int size = 5;
// pair<int,int> ans = CheckTwoSum(arr , size , 105);
// if (ans.first==-1  && ans.second==-1 )
// {
//     cout<<"Pair not found "<<endl;
// }
// else{
//     cout<<"Pair found-:"<<ans.first<<" " <<ans.second;
// }

//6.
// int arr[]={2,4,3,6,7};
// int size = 5;
// int target = 6;
// CheckTwoSum(arr , size , target);

//7.
    // int arr[]={2,3,4,5};
    // int n = 4;
    // PrintAllTriplets(arr, n );

8.
// int arr[]={10,30,20,40,60};
// int n=5;
// int target=70;
// CheckThreeSum(arr,n,target);


int arr[]={1,2,3,4,5,6};
int size=6;
int shift=2;

cout<<"Before "<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i];
}

RotateArray(arr,size,shift);

cout<<"After "<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i];
}




    return 0;
}