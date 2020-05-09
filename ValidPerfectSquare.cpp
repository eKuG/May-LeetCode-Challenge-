class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        for(long i = 1; i<=num/2; i++){
            long y = i*i;
            if(y == num){
                return true;
            }
        }
        return false;
    }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
//O(n)
