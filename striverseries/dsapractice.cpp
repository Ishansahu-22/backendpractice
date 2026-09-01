#include<isotream>
using namespace std;
void 2460(){//apply operations
    class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>newarr;
        for(int i = 0; i < nums.size()-1; i++){
            if( nums[i] == nums[i+1] ){
                nums[i+1] = 0;
                nums[i] = nums[i] * 2;


            }
        }
        

        for(int i = 0; i< nums.size(); i++){   
                if(nums[i] != 0 ){

                newarr.push_back(nums[i]);

            }
        }
        for( int k : nums){
            if(k == 0){
                newarr.push_back(k);
            }
        }
        return newarr;
        
    }
};

}






int main(){





    return 0;
}