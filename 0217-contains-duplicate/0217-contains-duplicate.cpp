class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int m = st.size();
        if(n == m ){
            return false;
        }
        else{
            return true;
        }
    }
};