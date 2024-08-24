// Given a rod of length N inches and an array of prices, price[]. price[i] denotes the value of a piece of length i. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

int topDown(int price[], int n, int index, vector<vector<int>> &top)
{
    if (index == 0)
    {
        return 0;
    }
    if (top[n][index] != -1)
        return top[n][index];
    if (n >= index)
    {
        return top[n][index] = max(price[index - 1] + topDown(price, n - index, index, top), topDown(price, n, index - 1, top));
    }
    return top[n][index] = topDown(price, n, index - 1, top);
}

int cutRod(int p[], int n)
{
    // code here
    vector<vector<int>> top(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i >= j)
            {
                top[i][j] = max(p[j - 1] + top[i - j][j], top[i][j - 1]);
            }
            else
            {
                top[i][j] = top[i][j - 1];
            }
        }
    }
    return top[n][n];
}