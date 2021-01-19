class Solution {
public:
    int reverse(int x) 
{
        long long rev=0;
     int r;
        
        while(x!=0)
        {
             if(x>INT_MAX || x<INT_MIN)
                 return 0;
           else{
               r=x%10;
             rev=rev*10+r;
            x=x/10;
               }
            // reverse(x);
            
        }
        // for(int i=o;i<v.size();i++)
        //     return v[i];
       
                if(rev>INT_MAX || rev<INT_MIN)
                    return 0;
         else 
              return rev;
       
    }
    };
