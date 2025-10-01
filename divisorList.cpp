#include<bits/stdc++.h>

using namespace std;

 const int N = 1000001;
 vector<int>nod[N];
int main(){
   
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j+= i)
        {
            nod[j].push_back(i);
        }
    }

    int n; cin>>n;

    for (int i = 0; i < n; ++i)
    {
        int x; cin>>x;
        
        for (auto j: nod[x])
        {
            cout<<j<<' ';
        }
        cout<<endl;
        
    }
    
    
}