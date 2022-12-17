class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {
            int maxCount = 0;
            int count = 0;
            for (auto it: nums)
            {
                if (it == 1)
                {
                    count++;

                    maxCount = count > maxCount ? count : maxCount;
                }
                else
                {
                    maxCount = count > maxCount ? count : maxCount;
                    count = 0;
                }
            }
            return maxCount;
        }
};