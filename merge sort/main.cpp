#include <iostream>
using namespace std;
//merges sort
void merg(int arr[],int l,int m,int r)
{

    int i,j,k;

    int n1=m-l+1;
    int n2=r-m;
    int a[n1],b[n2];
    for( i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for( j=0;j<n2;j++){
        b[j]=arr[m+1+j];
    }

    i=0;j=0;k=l;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
        }else{
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }

}
void meregeSort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        meregeSort(arr,l,m);

        meregeSort(arr,m+1,r);
        merg(arr,l,m,r);
    }
}
int main() {
    //declare list
int arr[]={12,11,13,5,6,7};
//size of list
int n=sizeof(arr)/sizeof(arr[0]);
//sort
meregeSort(arr,0,n-1);
//list after sort
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
