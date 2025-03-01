class Solution
{
public:
    string decodeString(string s)
    {

        stack<int> number;
        stack<string> str;
        int currNum = 0;
        string currStr = "";
        string ans = "";

        for (auto i : s)
        {
            if (i >= 48 and i <= 57)
            {
                currNum = currNum * 10 + (i - '0');
            }
            else if (i == '[')
            {
                number.push(currNum);
                currNum = 0;
                str.push(currStr);
                currStr = "";
            }
            else if (i == ']')
            {

                int numTop = number.top();
                number.pop();

                string just = "";
                for (int i = 0; i < numTop; ++i)
                {
                    just += currStr;
                }
                currStr = str.top() + just;
                str.pop();
            }
            else
            {
                currStr.push_back(i);
            }
        }
        return currStr;
    }
};