#include<iostream>
using namespace std;
int main(){
    int arr[10]={20,40,60,90,80,100,10,30,70,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<len;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for (int i=0;i<len;i++){cout<<arr[i]<<"\n";}
}