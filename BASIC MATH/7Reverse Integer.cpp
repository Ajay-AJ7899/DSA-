class Solution {
public:
    int reverse(int x) {
        int z=0;
        while(x!=0)
        {
            int y=x%10;
            if(z>INT_MAX/10 || z<INT_MIN /10 )
            {
                return 0;
            }
            z=z*10+y;
            x=x/10;
        }
        return z;
    }
};

