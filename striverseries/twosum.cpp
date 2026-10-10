#include<iostream>
#include<vector>
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
    return 0;
}