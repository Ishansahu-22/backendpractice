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

class Stock {
public:
    int maxProfit(vector<int>& prices) {
      /*  int profit=0;
        int diff=0;
        int buy=INT_MAX;
        for(int i=0;i<prices.size()-1;i++){
            if(buy>prices[i]){
                buy=prices[i];

            }
            if(buy<prices[i+1]){
                diff=prices[i+1]-buy;
                profit=max(profit,diff);
            }
        }
        return profit;*/
        int prebuy;

        int buy = INT_MAX;
        int sell;
        int profit = INT_MIN;
        bool flag;
        if(prices.size()==1)return 0;

        for(int i = 0; i <= prices.size()-2; i++){
            
           prebuy  = prices[i];
           buy = min(buy,prebuy);

           if(prices[i+1] > buy){

            sell = prices[i+1] - buy;
            profit = max(profit,sell);

           }

           
         



        }
        if(profit == INT_MIN){
            return 0;
        }


       return profit;


    }
    
};
int main(){
    //daily questions: sum of squares of special elements
    cout<<Solution::sumOfSquares<<endl;
    //daily questions:buy and sell stock;
    cout<<Stock::maxProfit<<endl;

}