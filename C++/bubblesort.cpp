#include <iostream>
using namespace std;

int* sort(int arr[],int n){
    int i,c=0,j=0,temp;
    int *arr1;
    for (i=0;i<n-1;i++){
        if (arr[i+1]<arr[i]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
            c=c+1;
        }
    }
    if (c!=0){
        arr=sort(arr,n);
    }
    return arr;
    
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
    int *a=sort(arr,n);
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}