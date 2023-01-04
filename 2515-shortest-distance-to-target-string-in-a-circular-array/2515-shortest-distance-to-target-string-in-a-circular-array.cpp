class Solution
{
    public:
        int closetTarget(vector<string> &words, string target, int s)
        {
            int step = INT_MAX;
            int n = words.size();
            for (int i = 0; i < n; i++)
                if (words[i] == target)
                    step = min(step, min(abs(s - i), abs(n - abs(s - i))));
            return step == INT_MAX ? -1 : step;
        }
};