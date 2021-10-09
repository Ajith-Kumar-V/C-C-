#include<iostream>
using namespace std;
int main(){
    int inp,arr[10]={};
    cin>>inp;
    int l=0,m=1,n,j=inp;
    for (int i=0;i<=j;i++){
        n=l;
        arr[i]=n;
        n=l+m;
        l=m;
        m=n;
    }
    for (int i=0;i<=j;i++){cout<<arr[i]<<"\n";}
}