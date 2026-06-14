class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = 0;
        int midPoint = std::ceil(nums.size()/2);

        for (int i = 0; i < nums.size(); i++) {

            if (nums[midPoint] > target) {
                left = 0;
                right = midPoint;

                std::cout << nums[midPoint] << " > " << target << "\n";
            }

            else if (nums[midPoint] < target) {
                left = midPoint+1;
                right = nums.size();

                std::cout << nums[midPoint] << " < " << target << "\n";
            }

            if (nums[midPoint] == target) {
                return midPoint;
            }

            midPoint = (left+right)/2;
            std::cout << "SET MIDPOINT TO VALUE: " << nums[midPoint] << "\n";
        }
        return -1;
    }
};
