class Solution {
public:
    string multiply(string num1, string num2) {
        
        // handle edge-case where the product is 0
        if (num1 == "0" || num2 == "0") return "0";
        
        // num1.size() + num2.size() == max no. of digits
        vector<int>out(num1.size() + num2.size(), 0);
        
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        for(int i=0;i<num1.size();i++)
        {
            for(int j=0;j<num2.size();j++)
            {
                out[i+j]+=(num1[i]-'0')* (num2[j]-'0');
                out[i+j+1]+=out[i+j]/10;
                out[i+j]=out[i+j]%10;
            }
        }
        int i=num1.size()+num2.size()-1;
        while(i>=0 && out[i]==0){
            i--;
        }
        
        string res="";
        for(;i>=0;i--)
        {
            res.push_back(out[i]+'0');
        }
        return res;
    }
};