class Solution 

{

public:

    int minSubArrayLen(int s, vector<int>& nums) 

    {

        int l = 0;

        int r = 0;

        int sum_all = 0;

        int minLength = nums.size() + 1;

        while (l < nums.size())

        {

            if (r < nums.size() && sum_all < s)

            {

                sum_all += nums[r++];

            }

            else

            {

                sum_all -= nums[l++];

            }

            if (sum_all >= s) minLength = min(minLength, r - l);

        }

        if (minLength == nums.size() + 1) return 0;

        return minLength;

    }

};