class Solution
{
    public:

        int maximumUnits(vector<vector < int>> &boxTypes, int truckSize)
        {
            int res = 0;

            sort(boxTypes.begin(), boxTypes.end(), cmp());
            for (int i = 0; i < boxTypes.size(); i++)
            {
                if (truckSize != 0)
                {
                    int currBoxes = boxTypes[i][0];
                    int currBoxPerUnits = boxTypes[i][1];
                    if (truckSize >= currBoxes)
                    {
                        truckSize -= currBoxes;
                        res += currBoxes * currBoxPerUnits;
                    }
                    else
                    {
                        res += truckSize * currBoxPerUnits;
                        truckSize = 0;
                        break;
                    }
                }
            }

            return res;
        }
    struct cmp
    {
        bool operator()(vector < int>
            const &p1, vector < int>
            const &p2)
        {
            return p1[1] > p2[1];
        }
    };
};