#include<iostream>
using namespace std;

int main(){
    
    // for (int i = 1; i <=5; i++)
    // {
    //     cout<<i;

    //     for (int j = 1; j<=2; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    





    // Square Pattern


//    total row = 4;
//    total column = 4;
    
//     row = outer loop 
//     column = inner loop;


   // outer loop
    for (int row=0;  row<4; row++)
    {
        // inner loop
        for (int col =0; col<4; col++)
        {
            // har 1 single column ke  baad , next line aata  hai
            cout<<"* ";
        }
        // 4 star print karane ke baad , next line me aata hu
        cout<<endl;   
    }
    

    // Rectangle Pattern
    // for (int row = 0; row<3; row++)
    // {
    //     for (int col= 0; col<5; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }





    // through the input print patterns


    // int length , width;

    // cout<<"Enter length :"<<endl;
    // cin>>length;

    // cout<<"Enter bredth :"<<endl;
    // cin>>width;

    // for (int row=0; row<length; row++)
    // {
    //     for (int col = 0; col < width; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;   
    // }



    // Hollow rectangle

    int length , width;

    cout<<"Enter length :"<<endl;
    cin>>length;

    cout<<"Enter width :"<<endl;
    cin>>width;

    // outer loop
    for (int row = 0; row < length; row= row+1)
    {
        // iner loop
        for (int col = 0; col <width; col = col +1)
        {
            if (row == 0 || row == length-1)
            {
                cout<<"* ";
            }
            else{
                // middle  rows

                if (col == 0 || col == width-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<" ";
                }
            }
            
        }
        // internal loop jha khtm hoga waha  endl lagega.
        cout<<endl;
    }
    


    // Hollow Square

    // for (int r = 0; r< 5; r++)
    // {
    //     for (int  c = 0; c <5 ; c++)
    //     {
    //         if (r==0 || r==4)
    //         {
    //            cout<<"* ";
    //         }
    //         else{
    //             if (c==0 || c==4)
    //             {
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }
    


    // // input taking hollow square  
    //  int n;
    // cout << "Enter length of side of square" << endl;
    // cin >> n;

    // //outer -> rows
    // for(int row=0; row<n; row++) {
    //     //inner -> cols
    //     for(int col=0; col<n; col++) {
    //         if(row == 0 || row == n-1 || col == 0 || col == n-1 ) 
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     //ye main bhul jata hu
    //     cout << endl;
    // }

    


    // half pyramid
    // int n;
    // cout<<"Enter Value ";
    // cin>>n;

    // for  (int  row= 0; row < n; row++)
    // {
    //   for (int col = 0; col < row+1; col++)
    //   {
    //     cout<<"* ";
    //   }
    //   cout<<endl;
    // }
    


    // Inverted pyramid

    // int n ;
    // cout<<"Enter the value of n ";
    // cin>>n;

    // for (int  row = 0; row <n; row++)
    // {
    //     for (int  col = 0; col <n-row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Inverted hollow pyramid
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>>n;

//    for(int row=0; row<n; row++) {

//         int totalColumns = row+1;

//         for(int col=0; col < totalColumns; col++) {

//             if(row == 0 || row == n-1 || col == 0 || row == col) {
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout<<endl;
//    }


    // iniverted hollow half pyramid
    // int n ;
    // cout<<"Enter the value of n ";
    // cin>>n;

    // for (int  row = 0; row < n; row++)
    // {
    //     for (int  col = 0; col < n-row; col++)
    //     {
    //        if (row==0 || row==n-1 || col==0 || (row + col == n-1))
    //        {
    //         cout<<"* ";
    //        }
    //        else{
    //         cout<<"  ";
    //        }
    //     }
    //     cout<<endl;
    // }
    

    return 0;
}