class Solution {
public:
    bool isPalindrome(int x) { 
        if(x<0){
            return false;
        }
        long long rev=0;
        int temp=x;
        while(x!=0){
            rev = rev*10 +x%10;
            x=x/10;
        }
        if(rev==temp){
            return true;
        }
        else {return false;}
        
    }
};