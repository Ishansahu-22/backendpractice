#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int currsum = 0;
        for(int i = 0 ; i <= n-1 ; i++){
            if(n % (i+1) == 0){
                currsum = currsum + nums[i]*nums[i];
            }
        }
         return currsum;
                
    }
};
int main(){
    //daily questions: sum of squares of special elements
    cout<<Solution::sumOfSquares<<endl;

}