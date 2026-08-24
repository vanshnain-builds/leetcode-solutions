class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v1;
        for (int i=0; i<numRows; i++){
            int num = 1;
            vector<int> v2;
            for (int j=0; j<=i; j++){
                v2.push_back(num);
                num = num * (i-j)/(j+1);
            }
            v1.push_back(v2);
        }
        return(v1);
    }
};