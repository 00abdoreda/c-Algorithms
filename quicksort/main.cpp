#include <iostream>
using namespace std;
//Quick sort
int partition(int arr[],int l,int r){
    int p=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void Quicksort(int arr[],int l,int r){
    if(l<r){
        int s=partition(arr,l,r);
        Quicksort(arr,l,s-1);
        Quicksort(arr,s+1,r);
    }
}
int main() {
    //declare list
    int arr[]={5,3,1,9,8,2,4,7};
//size of list
    int n=sizeof(arr)/sizeof(arr[0]);
//sort
   Quicksort(arr,0,n-1);
//list after sort
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
