#include<iostream>
using namespace std;
int *sort(int arr[],int n,int c){
    int i,j,temp,min,c1=0,c2=0;
    min=arr[c];
    for(i=c;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
            j=i;
            c2=c2+1;
        }

    }
    if (c<n-1 && c2>0){
        temp=arr[j];
        arr[j]=arr[c];
        arr[c]=temp;
        c=c+1;
        arr=sort(arr,n,c);
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
    int *a=sort(arr,n,0);
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
