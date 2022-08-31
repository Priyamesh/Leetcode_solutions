class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        //result vector
        vector<bool>res;
        
        int max_candies=*max_element(candies.begin(),candies.end());

        for(auto val:candies)
        {
            if(val+extraCandies >= max_candies)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};