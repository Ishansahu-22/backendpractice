#include<iostream>
#include<vector>
using namespace std;
void twofoursixzero(){//apply operations
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


class Seventyfi {
public:
    void sortColors(vector<int>& nums) {
        
     int counto = 0;
     int countt = 0;
     int counttr = 0;
     int gin = nums.size();



     for( int i = nums.size()-1 ; i >= 0 ; i--){
        if( nums[i] == 0){
            counto++;
            nums.pop_back();


        }else if( nums[i] == 1){
            countt++;
            nums.pop_back();
            
        }else{
            counttr++;
            nums.pop_back();
        }
        
     };


     for(int j = 0 ; j<counto; j++){
        nums.push_back(0);
     }
     
     for(int k = 0 ; k  < countt ; k++){
        nums.push_back(1);
     }
     
     for(int l = 0 ; l < counttr ; l++){
        nums.push_back(2);
     }


     class Solution {
public:
    int maxArea(vector<int>& height) {

        int st = 0; int end = height.size()-1;
        int maxarea = INT_MIN;
        int ht , wt , currarea;
        
        while(st < end){


                ht = min(height[st] , height[end]);
                wt = end - st;
                
             
                currarea = ht * wt;
                

                maxarea =  max(maxarea, currarea);

            

              if( height[st] < height[end] ){
           

                st ++;

                


                
                
            
            }else{
               

                end--;

            }

             
            
        }
        return maxarea;
        
    }
};



    

    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }
        if( n ==  1){

            return true;
        }

        if(n % 2 == 0){

            while(n%2 == 0){
                n = n/2;
                

            }
            if(n == 1){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
      
    }
};








int main(){





    return 0;
}