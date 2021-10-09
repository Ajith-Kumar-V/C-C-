#include<iostream>
using namespace std;
int main(){
    int arr[10]={20,40,60,90,80,100,10,30,70,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++){
        for (int j=i+1;j<len;j++){
            int temp=0;
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }}}
    for(int i=0;i<len;i++){cout<<arr[i]<<"\n";}
}
