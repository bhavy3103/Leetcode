class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        int top = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
                top++;
            }
            if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if (s[i] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                if (s[i] == '}' && st.top() == '{')
                {
                    st.pop();
                }
                if (s[i] == ']' && st.top() == '[')
                {
                    st.pop();
                }
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
