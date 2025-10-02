#include<bits/stdc++.h>

using namespace std;

 const int N = 10000001;
 int sod[N];
int main(){
   
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j+= i)
        {
            sod[j]++;
        }
    }

    int n; cin>>n;
    long long ans = 0;
    for (int i = 1; i <= n; ++i){
        ans += (1ll * i * sod[i]);
    }
    cout<<ans<<endl;
}   
    
