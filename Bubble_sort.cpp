#include<iostream>
using namespace std;
int main(){
    int arr[10]={20,50,100,30,90,40,10,70,86,60};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++){
        for (int j=1;j<len;j++){
            int temp=0;
            if (arr[j-1]>arr[j]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
        }}}
    for (int i=0;i<len;i++){cout<<arr[i]<<"\n";}
    return 0;
}
