#include<bits/stdc++.h>
using namespace std;
 
int main() {
string str;
cin>>str;
int len=str.length();
long rep=0;
long maxRep=0;
for(int i=0;i<len-1;i++){
    if(str[i+1]==str[i]){
        rep++;
        if(rep>maxRep){
            maxRep=rep;
            }
    }
    else{
        rep=0;
    }
}
cout<<maxRep+1<<endl;
return 0;
}