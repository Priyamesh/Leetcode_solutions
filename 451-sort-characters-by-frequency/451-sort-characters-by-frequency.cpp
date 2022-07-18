class Solution {
public:
    /* Idea:
    
    first store the freq in map with  <char,int>
    then store the freq in priority queue <int,char>
    now fetch the pair and make resultant string
    
    */
    
    string frequencySort(string s) {
        
        unordered_map<char,int>memo;
        for(auto ch:s){
            memo[ch]++;
        }
        
        priority_queue<pair<int,char>>pq;
        
        for(auto p:memo)
        {
            pq.push({p.second,p.first});
        }
        string res="";
        
        while(!pq.empty())
        {
            auto p=pq.top();pq.pop();
            string temp=string(p.first,p.second);
            // for(int i=1;i<=p.first;i++){
            //     temp+=p.second;
            // }
            res+=temp;    
        }
        return res;
    }
};