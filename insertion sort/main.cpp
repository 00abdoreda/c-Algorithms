#include <iostream>
using namespace std;
//insertion sort
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int v=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>v){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=v;
    }
}
int main() {
    //declare list of n elements
    int arr[5]={10,7,4,6,2};
    //sort
    insertionsort(arr,5);
    //print sorted elemnt
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
