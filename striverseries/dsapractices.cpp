#include<iostream>
#include<vector>
using namespace std;
int longestsubarray(){
    //brute force method


}


int main(){
    vector <int>  arr = {1,2,3,1,1,1,1,4,2,3};
    int pone; int maxi = 1; int k = 3;
    int freq =1;
    for(int i = 0 ; i <= arr.size()-2 ; i++){
        pone = arr[i];
        for(int j = i+1 ; j <= arr.size()-1 ;j++){
            freq++;
            pone+=arr[j];
            if(pone == k){
                maxi = max(freq , maxi);
            }
            if(pone > k){
                
                break;
            }


            

        }
        cout<< maxi;
        return 0;


    }


}