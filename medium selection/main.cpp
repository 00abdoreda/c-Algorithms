#include <iostream>
using namespace std;
//median selection
int Lomuto(int arr[],int l,int r){

    int p=arr[l];
    int s=l;
    for(int i=l+1;i<r;i++){
        if(arr[i]<p){
            s++;
            swap(arr[s],arr[i]);
        }
    }
    swap(arr[l],arr[s]);

    return s;
}
int  Quickselect(int arr[],int l,int r,int k){
 if(k>0&&k<=r-l+1){
     int index = Lomuto(arr,l,r);
     if(index-l==k-1)
         return arr[index];
     if(index-l>k-1)
         return Quickselect(arr,l,index-1,k);
     return Quickselect(arr,index+1,r,k-index+l-1);

 }
    return -1;
}
int main() {
    //declare list of n elements
    int arr[]={10,4,5,8,6,11,26};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<Quickselect(arr,0,n-1,k);


}
