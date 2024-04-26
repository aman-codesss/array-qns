#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v,int m){
    int s=m+1,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void display(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
int main(){
    vector<int> v={3,5,4,99,-4,8};
    cout<<"Before reversing the array: "<<endl;
    display(v);
    cout<<endl<<"After reversing the array: "<<endl;
    vector<int> ans = reverse(v,2);
    display(ans);
}