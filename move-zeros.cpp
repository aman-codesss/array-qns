#include<iostream>
using namespace std;
void moveZero(int arr[],int n){
    int k=1;
    if(arr[0]==0){
        k=0;
    }
    for(int i=1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[k]);
            k++;
        }
    }

}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int arr[8]={0,2,1,0,0,0,3,0};
    int arr[8]={0,0,1,0,9,0,3,0};
    moveZero(arr,8);
    print(arr,8);

}