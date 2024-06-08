#include<bits/stdc++.h>
using namespace std;
 
int main() {
long long n;
cin>>n;
vector<long long>v(n);
long long actualSum=0;
for(long long i=0;i<n-1;i++){
    cin>>v[i];
    actualSum+=v[i];
    }
long long sum=n*(n+1)/2;
cout<<sum-actualSum<<endl;


return 0;
}