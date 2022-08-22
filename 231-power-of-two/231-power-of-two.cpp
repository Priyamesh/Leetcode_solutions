class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==1)
            return true;
        
        if(n%2!=0 || n==0)
            return false;
        
        return isPowerOfTwo(n/2);
        
        
        
        //follow up
        //POWER OF TWO
	    //when a numerr is power of two it has only one 1 in it
	    // and n-1 is all the 1 before it
	    //so & of both will become 0
        
//         if(n<=0)
//             return false;
        
//         if(n & n-1)
//             return false;
//         else
//             return true;
        
    }
};