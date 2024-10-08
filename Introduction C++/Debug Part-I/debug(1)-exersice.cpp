#include<iostream>
using namespace std;

int main() {
                            // char c;
                            // cout<<"Enter  the value of c :";
                            // cin>>c;

                            // if('a'<=c && c<= 'z'){
                            //     cout<<0;
                            // }
                            // else if('A'<=c && c<= 'Z'){
                            //     cout<<1;
                            // }
                            // else{
                            //     cout<<-1;
                            // }


// Debug NO-2
    
    /*
        Pattern
        1
        23
        345
        4567
     */

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j = i,count = 1;
    //     while(count<=i){
    //         cout<<j;
    //         j = j+ 1;
    //         count = count + 1;
    //     }
    //     cout<<" ";
    //     i = i + 1;
    //     cout<<endl;
    // }

    /*
Pattern
N = 4
   *
  ***
 *****
*******
*/

    // int n;
    // cout<<"Enter n :";
    // cin>>n;

    // int i=1;
    // while(i<n){
    //     int j = i,count = 2*n,gaps=(n-i),k=1;
    //     while(k<gaps){
    //         cout<<"  ";
    //         k = k + 1;
    //     }
    //     int m = 1,ch = count - 2*gaps;
    //     while(m<ch){
    //         cout<<"* ";
    //         m = m + 1;
    //     }
    //     k = 1;
    //     while(k<gaps){
    //         cout<<"  ";
    //         k = k + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }


      int i,j,n;
      cout<<"Enter value :";
     cin>>n;
     // outer loop
    for(i = 1; i <= n; i++){
        // inner loop
        for(j = 1; j <= i; j++){
	        cout<<i<<" ";
        }
    cout<<endl;
    }


}