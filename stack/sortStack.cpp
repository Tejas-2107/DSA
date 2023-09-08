void insert(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() and s.top() < num))
    {
        s.push(num);
        return;
    }

    int top = s.top();
    s.pop();

    insert(s, num);
    s.push(top);
}

void SortedStack ::sort()
{
    // Your code here

    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    sort();
    insert(s, num);
}