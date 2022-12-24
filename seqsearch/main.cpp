#include <iostream>
using namespace std;
//sequential search
int seqsearch(int arr[],int n,int element){
    arr[n]=element;
    int i=0;
    while (arr[i]!=element){
        i++;
    }
    if (i<n){
        return i;
    }else{
        return -1;
    }
}
int main() {
    //declare list of n elements
    int arr[6]={10,7,4,6,2};
    //search
   cout<< seqsearch(arr,6,7);

}
