class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int sum;
        reverse(digits.begin(),digits.end());
        sum=digits[0]+1;
        carry=sum/10;
        sum%=10;
        digits[0]=sum;
        for(int i=1;i<digits.size();i++)
        {
            sum=digits[i]+carry;
            carry=sum/10;
            sum%=10;
            digits[i]=sum;
        }
        if(carry>0)
            digits.push_back(carry);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};