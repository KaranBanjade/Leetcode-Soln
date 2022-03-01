class Solution {
public:
    string reverseWords(string s) {
       int space = 0;
    for (int i = 0; i < s.length()+1; i++)
    {
        if (s[i] == ' '||s[i] == '\0')
        {
            for (int j = space, k = i-1; j < k; j++, k--)
            {
                char temp = s[j];
                s[j] = s[k];
                s[k] = temp;
            }
            space = i+1;
        }
    }
        return s;
    }
    
};