#include <iostream>
using namespace std;
//Bubble sort
void bubblesort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j+1]<arr[j])
                swap(arr[j],arr[j+1]);
        }
    }
}
int main() {
    //declare list of n elements
    int arr[5]={10,7,4,6,2};
    //sort
    bubblesort(arr,5);
    //print sorted elemnt
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
