class Solution {
public:
    string longestPalindrome(string s) {
        string revs=s;
        reverse(revs.begin(),revs.end());
        int size=s.length();
        int solver[1001][1001];
        for(int i=0;i<=size;i++)
        for(int j=0;j<=size;j++)
            if(i==0 || j==0)
                solver[i][j]=0;
        for(int i=1;i<=size;i++)
        {
            for(int j=1;j<=size;j++)
            {
                if(s[i-1]==revs[j-1])
                    solver[i][j]=solver[i-1][j-1]+1;
                else
                    solver[i][j]=0;
            }
        }
        string result,temp,temp2;
        int ind1=0,ind2=0;
        int comp=0;
        for(int i=1;i<=size;i++)
        {
            for(int j=1;j<=size;j++)
            {
                if(solver[i][j]>comp)
                {
                    ind1=i;
                    ind2=j;
                    temp=s.substr(i-solver[i][j],solver[i][j]);
                    temp2=temp;
                    reverse(temp2.begin(),temp2.end());
                    if(temp==temp2)
                    {
                        comp=solver[i][j];
                        result=temp;
                    }
                }
            }
        }
        return result;
    }
};