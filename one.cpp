#include<bits/stdc++.h>
using namespace std;

void solveTwoSum(vector<int> &v, int target){
    map<int, int> m;
    map<int, int>:: iterator it;
    int low =-1;
    int high = -1;
    for(int i=0;i<v.size();i++){
        int num  = v[i];
        int diff = target - num;
        
        if(m.find(diff) != m.end()){
            cout<<"The indices are"<<m[diff]<<","<<i;
            break;

        }
        m[num] = i;
    }
    
    return;
 


}

int main(){
    vector<int> v = { 1,5,7,2,45,32,3};
    int target = 52;
    solveTwoSum(v,target);
  
    return 0;
}