#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int *sort(int arr[],int l,int h){
    if (l<h){
        int z;
        for(z=l;z<h;z++){
            cout<<arr[z]<<" ";
        }
        cout<<endl;
        int p=arr[h];
        int i;
        int fl=-1;
        for (i=l;i<h;i++){
            if (p>=arr[i]){
                fl=fl+1;
                swap(&arr[fl],&arr[i]);
            }
        }
        arr=sort(arr,l,fl);
        arr=sort(arr,fl+1,h); 
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
    int *a=sort(arr,0,n-1);
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}