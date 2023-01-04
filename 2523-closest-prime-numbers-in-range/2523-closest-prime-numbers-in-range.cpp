class Solution
{
    public:
        vector<int> getPair(vector<int> &primes)
        {
            if (primes.size() == 0) return { -1,
                -1 };
            sort(primes.begin(), primes.end());
            int num1 = -1, num2 = -1;
            int diff = INT_MAX;
            for (int i = 0; i < primes.size() - 1; i++)
            {
                if (diff > primes[i + 1] - primes[i])
                {
                    diff = primes[i + 1] - primes[i];
                    num1 = primes[i];
                    num2 = primes[i + 1];
                }
            }
            return {
                num1,
                num2
            };
        }
    void seive(vector<bool> &isPrime, int right)
    {
        for (int num = 2; num * num <= right; num++)
        {
            if (isPrime[num])
            {
                for (int j = num * num; j <= right; j = j + num) isPrime[j] = false;
            }
        }
    }
    vector<int> closestPrimes(int left, int right)
    {
        vector<bool> isPrime(right + 1, true);
        isPrime[1] = false;
        seive(isPrime, right);
        vector<int> ans;
        vector<int> primes;
        while (left < right)
        {
            if (isPrime[left] && isPrime[right])
            {
                primes.push_back(left);
                primes.push_back(right);
                left++;
                right--;
            }
            if (isPrime[left] == false) left++;
            if (isPrime[right] == false) right--;
        }
       	//primes.
        ans = getPair(primes);
        return ans;
    }
};