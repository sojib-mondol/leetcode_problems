class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1, s2;
        for (char ch : s)
        {
            if (ch == '#')
            {
                if (!s1.empty())
                    s1.pop();
            }
            else
            {
                s1.push(ch);
            }
        }

        for (char ch : t)
        {
            if (ch == '#')
            {
                if (!s2.empty())
                    s2.pop();
            }
            else
            {
                s2.push(ch);
            }
        }

        return s1 == s2;
    }
};