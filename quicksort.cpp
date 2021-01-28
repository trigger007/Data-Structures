#include<iostream>
using namespace std;

int *sort(int arr[],int l,int h){
    int p=arr[h];
    
}
int main(){
    int n,i;
    cout<<"enter the number of elements to be in the array";
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++){
        cout<<"enter the element:";
        cin>>arr[i];
    }
    int *a=sort(arr,0,n-1);
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}