//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void nextSmaller(vector<int> arr, vector<int> &ns)
    {
        stack<int> st;
        st.push(arr.size() - 1);
        for (int i = arr.size() - 2; i >= 0; --i)
        {
            while (!st.empty() and arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ns[i] = st.top();
            }
            st.push(i);
        }
    }
    void prevSmaller(vector<int> arr, vector<int> &ps)
    {
        stack<int> st;
        st.push(0);
        for (int i = 1; i < arr.size(); ++i)
        {
            while (!st.empty() and arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ps[i] = st.top();
            }
            st.push(i);
        }
    }
    int getMaxArea(vector<int> &arr)
    {
        // Your code here
        vector<int> ns(arr.size(), arr.size());
        vector<int> ps(arr.size(), -1);

        nextSmaller(arr, ns);
        prevSmaller(arr, ps);
        int area = 0;
        for (int i = 0; i < arr.size(); ++i)
        {
            area = max(area, (ns[i] - ps[i] - 1) * arr[i]);
        }

        return area;
    }
};
