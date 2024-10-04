#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i <= n; i++)
    {
      //stars
      for (int j = 0; j <= n-i ; j++)
      {
        cout<< "*";
      }
 

        //space
        for (int j = 0; j <= 2*i-1; j++)
        {
            cout<<" ";
        }
        


        //stars
      for (int j = 0; j <= n-i ; j++)
      {
        cout<< "*";
      }

      
      
       cout<<endl;
       
}

        int iniS = 2*n - 2;
        for (int i = 1; i <= n; i++)
        {
            
         //stars
        
      for (int j = 0; j <= i ; j++)
      {
        cout<< "*";
      }
 

        //space
        for (int j = 0; j < iniS; j++)
        {
            cout<<" ";
        }
        


        //stars
      for (int j = 0; j <= i ; j++)
      {
        cout<< "*";
      }

      iniS -= 2;

        cout<<endl;

        }
        

}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
         print(n);
    }
    
   
}