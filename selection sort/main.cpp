#include <iostream>
using namespace std;
//selection sort
void selectionsort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main() {
    //declare list of n elements
    int arr[5]={10,7,4,6,2};
    //sort
    selectionsort(arr,5);
    //print sorted elemnt
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
