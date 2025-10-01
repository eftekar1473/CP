#include<bits/stdc++.h>

using namespace std;

 const int N = 1000001;
 int sod[N];
int main(){
   
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j+= i)
        {
            sod[j] += i;
        }
    }

    int n; cin>>n;

    for (int i = 0; i < n; ++i)
    {
        int x; cin>>x;
        
       cout<<sod[x]<<endl;
        
    }
    
    
}