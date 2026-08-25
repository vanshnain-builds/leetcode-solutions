class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_red=0;
        int count_blue=0;
        int count_white=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0) count_red++;
            if (nums[i]==1) count_white++;
            if (nums[i]==2) count_blue++;
        }
        int i=0;
        while(count_red!=0){
            nums[i]=0;
            count_red--;
            i++;
        }
        while(count_white!=0){
            nums[i]=1;
            count_white--;
            i++;
        }
        while(count_blue!=0){
            nums[i]=2;
            count_blue--;
            i++;
        }
    }
};