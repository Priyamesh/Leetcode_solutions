class Solution {
public:
    string addStrings(string num1, string num2) {
        
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        string res="";
        int i=0;int j=0;int carry=0;
        int l1=num1.size();int l2=num2.size();
        
        while(i<l1 || j<l2 || carry>0){
            
            int n1=(i<l1)?num1[i]-'0':0;
            i++;
            
            int n2=(j<l2)?num2[j]-'0':0;
            j++;
            
            int sum=n1+n2+carry;
            // cout<<sum<<"\n";
            
            res+=to_string(sum%10);
            carry=sum/10;
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};