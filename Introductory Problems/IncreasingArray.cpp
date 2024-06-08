#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long n;
    cin>>n;
    long arr[n];
    for(long i = 0;i<n;i++){
        cin>>arr[i];
    }
    long sum=0;
    for(long i = 0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }
        else{
            sum+=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
    }

    cout<<sum<<endl;

return 0;
}

/*

Example
Input:
5
3 2 5 1 7

Output:
5

*/