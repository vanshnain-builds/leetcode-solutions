// class Solution {
// public:
//     int digit(int n){
//         int count=0;
//         while(n>0){
//             count++;
//             n=n/10;
//         }
//         return count;
//     }
//     int commas(int n){
//         int no_digit = digit(n);
//         if (no_digit%3==0) return (no_digit/3)-1;
//         else return (no_digit/3);
//     }
//     int countCommas(int n) {
//         int count=0;
//         for (int i=1; i<n+1; i++){
//             count += commas(i);
//         }
//         return count;
//     }
// };

class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;

        return n-999;

    }
};