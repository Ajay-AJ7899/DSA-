class Solution {
public:
    bool isPalindrome(int x) {
        int y=0,z=x,a;
        if(x!=0)
        {
            while(x>0)
            {
                a=x%10;
                if(y>INT_MAX / 10 || y<INT_MIN / 10)
                {
                    return false;
                }
                y=y*10+a;
                x=x/10;
            }
        }
        if(z==y)
        {
            return true;
        }
        else
        return false;
    }
};