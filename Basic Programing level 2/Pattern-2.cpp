#include<iostream>
using namespace std;


void Fullpyramid(int n){
    for (int row = 0; row<n; row++)
    {
        for (int col = 0; col <n-row-1; col++)
        {
           cout<<" ";
        }
        for (int col = 0; col <row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}


void  InvertedFullPyraid (int n){
    // outer loop
    for (int row = 0; row <n; row++)
    {
        // Space ke liye  (inner loop)
        for (int col = 0; col < row; col++)
        cout<<" ";
        for (int col = 0; col<n-row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}


void DiamondPattern(int n){
   
   Fullpyramid(n);
   InvertedFullPyraid(n);
    
}


void HollowPyramid(int n){
    for (int row = 0; row<n; row++)
    {
        for (int col = 0; col <n-row-1; col++)
        {
           cout<<" ";
        }
        for (int col = 0; col <row+1; col++)
        {
            if (row==0 /* || row==n-1 */  || col==0 || col== row+1-1)
            
            cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


void InvertedHollowPyramid(int n){
     // outer loop
    for (int row = 0; row <n; row++)
    {
        // Space ke liye  (inner loop)
        for (int col = 0; col < row; col++)
        cout<<" ";

        // star print
        for (int col = 0; col<n-row; col++)
        {
            if (/*row==0 ||*/ row==n-1 || col==0 || col==n-row-1)
            cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
        
    }
}


void HollowDiamond(int n){
     HollowPyramid(n);
     InvertedHollowPyramid(n);

}


void MixPyramid(int n){
    // PART - I

    for (int row = 0; row<n; row++)
    {
        //  I. Star print karna hai
            for (int col = 0; col< n-row; col++)
            {
                cout<<"* ";
            }
        // II.  Space print karna hai
            for (int col = 0; col <2*row+1; col++)
            {
                cout<<"  ";
            }
            
        // III. Pir se star print karna hai
        for (int col = 0; col < n-row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }


    // PART - II
    for (int row = 0; row<n; row++)
    {
        //  I. Star print karna hai
            for (int col = 0; col< row + 1; col++)
            {
                cout<<"* ";
            }
        // II.  Space print karna hai
            for (int col = 0; col <2*(n-row)-1; col++)
            {
                cout<<"  ";
            }
            
        // III. Pir se star print karna hai
        for (int col = 0; col <row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }

}


void  Fancy12pattern(int n){
    for (int row = 0; row <n; row++)
    {
        for (int col = 0; col <2*row+1; col++)
        {
          if (col % 2  == 0)
            cout<<row+1;
          
          else
                cout<<"* ";
          
        }
        cout<<endl;
    }
    
}


void FullFancy(int n){

    Fancy12pattern(n);

    n--;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*(n-row)-1; col++)
        {
            if (col % 2==0 )
                cout<<n-row;
            else
                cout<<"* ";
        }
        cout<<endl;
    }
    
}

void ABCBA(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A'-1;
        for (int j = 0; j < i+1; j++)
        {
            ch++;
            cout<<ch;
        }
        ch--;
        while (ch >'A')
        {
            ch--;
            cout<<ch;
        }
        
        cout<<endl;
    }
    
}


int main(){

    // FULL PYRAMID
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;
    Fullpyramid(n);


    // INVERTED FULL PYRAMID
    // int n;
    // cout<<"Enter the value of n :";
    // cin>>n;
    // InvertedFullPyraid(n);

    //DIAMOND PATTERN
    // int n;
    // cout<<"Enter the value of n :";
    // cin>>n;
    // DiamondPattern(n);

    // HOLLOW PYRAMID
    // HollowPyramid(n);

    // INVERTED HOLLOW PYRAMID
    // InvertedHollowPyramid(n);

    // HOLLOW DIAMOND 
    // HollowDiamond(n);


    // MIX PYRAMIDS
    // MixPyramid(n);


    // FANCY 12 PATTERN
    // Fancy12pattern(n);

    // FullFancy(n);

    //ABCBA(n);

    return 0;
}