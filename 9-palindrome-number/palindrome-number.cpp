class Solution {
public:
    int reverse(int x){
        int revNum=0;
        while(x!=0){
            int digit=x%10;
            if(revNum>INT_MAX/10 || revNum<INT_MIN/10){
                return false;
            }

            revNum=revNum*10+digit;
            x=x/10;
        }
        return revNum;
    }
    
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num=reverse(x);
        return x==num;
        
    }
};