class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        for(int val : nums){
            int fre = 0;
            for(int el : nums){
                if(val == el ) {
                    fre++;
                } 
            }

            if(fre > n/2){
                return val;
            }
        }

    }
};