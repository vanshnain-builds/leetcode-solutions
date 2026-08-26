class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int index;
        vector<int> v(n+1,0);
        for (int i=0; i<n; i++){
            v[nums[i]]++;
        }
        for (int i=0; i<=n; i++){
            if (v[i]==0){
                index=i;
                break;
            }
        }
        return index;
    }
};