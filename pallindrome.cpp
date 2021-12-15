class Solution {
public:
    bool isPalindrome(int x) {
        int a=reverse(x);               
        
        if (a!=x || a<0)
            return 0;
        else
            return 1;
        
    }
     int reverse(int x) {
        
    
        long a = x;        

        string s = to_string(a);
        if (a < 0).   // if the entered value is negative
            s.push_back('-');
        std::reverse(s.begin(), s.end());     

        long y = stoll(s);
        return y;        
    

    }
};
