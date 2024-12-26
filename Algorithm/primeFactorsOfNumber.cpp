void primeFactors(int n, unordered_set<int> &s)
{

    while (n % 2 == 0)
    {
        s.insert(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            s.insert(i);
            n = n / i;
        }
    }
    //IF n is prime greater than 2
    if (n > 2)
        s.insert(n);
}

 int distinctPrimeFactors(vector<int>& nums) {
        int a=0;
        unordered_set<int>s;
        INT I=10010;
        primeFactors(i,s);
        return s.size();
    }