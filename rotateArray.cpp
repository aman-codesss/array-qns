#include<iostream>
using namespace std;
void rotateArray(int a[],int n,int k){
    int temp[7];
    for(int i=0;i<n;i++){
   temp[(i+k)%n]=a[i];          
    }
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    }
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int ans[7]={0};
    int key = 5;
    rotateArray(arr,7,key);
    printArray(arr,7);
}