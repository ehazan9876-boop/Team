#include<bits/stdc++.h>
using namespace std;

int main(){
int n,counts=0;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b+c>=2){
        counts= counts+1;
    }
    else{
        counts;
    }

}
cout<<counts<<endl;

return 0;

}
