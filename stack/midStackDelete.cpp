void solution(stack<int> &s, int sizeOfStack, int mid)
{
    if (sizeOfStack == mid)
    {
        return;
    }
    --sizeOfStack;
    int x = s.top();
    s.pop();
    solution(s, sizeOfStack, mid);

    if (sizeOfStack != mid)
    {
        s.push(x);
    }
}
void deleteMid(stack<int> &s, int sizeOfStack)
{
    // code here..
    int mid = floor(++sizeOfStack / 2);
    solution(s, sizeOfStack, mid);
}