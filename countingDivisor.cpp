#include<bits/stdc++.h>

using namespace std;

int main(){
    int N = 1000001;
    int nod[N];

    for (int i = 0; i < N; ++i)
    {
        nod[i] = 0;
    }
    
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j+= i)
        {
            nod[j]++;
        }
    }

    int n; cin>>n;

    for (int i = 0; i < n; ++i)
    {
        int x; cin>>x;
        
        cout<<nod[x]<<endl;
    }
    
    
}