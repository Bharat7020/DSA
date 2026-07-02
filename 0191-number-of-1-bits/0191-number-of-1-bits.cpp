class Solution {
public:
    int hammingWeight(int n) {
        int ans =0;
        int p =1;
        int cnt=0;
        while(n>0){
            int last_bit=(n&1);
            if(last_bit == 1){
                cnt++;
            }
            n = n>>1;
        } 
        return cnt;
    }
};