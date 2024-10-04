#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1; i < n; i++)
    {
        //number
        for (int j = 1; j < i+1; j++)
        {
            cout<< j;
        }
        
        //space
        for (int j = 0; j <= 2*n-(2*i+2); j++)
        {
            cout << " ";
        }
        

        //number
        for (int j = i; j >= 1; j--)
        {
            cout<< j;
        }
        cout<< endl;
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