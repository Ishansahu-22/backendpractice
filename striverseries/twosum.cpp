#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    //two sum problem
    //brute force
    vector<int> arr={2,6,5,8,11};
    int target =  14;
    int sum;
    
    for(int i = 0; i <= arr.size()-2; i++){
        for(int j = i+1 ; j <=arr.size()-1; j++){
            sum = arr[i] +arr[j] ;
            if(sum == target){

                cout<< i<<j<<endl;
            
            
        }

    }
}

//now finding the better solution 
map<int,int> mpp;
for(int i = 0; i <= mpp.size()-1 ; i++){
    int a = arr[a];
    int more = target - a;
    if(mpp.find(more) != mpp.end()){
        cout<<"yes found it"<<endl;
    }
    mpp[a] = i;
}




    return 0;
}