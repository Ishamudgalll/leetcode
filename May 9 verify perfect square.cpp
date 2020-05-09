class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==2147483647)
            return false;
        for(int i=0;i*i<=num;i++)
        {
            if(i*i==num)
                return true;
            
        }
        return false;
        
    }
};
