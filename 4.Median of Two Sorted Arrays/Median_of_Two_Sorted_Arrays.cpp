#include <iostream>
#include <vector>
#include <limits.h>
#include <ctime>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    size_t m = nums1.size(), n = nums2.size(),sum = m+n;
    vector<int> temp1,temp2,nums;
    for (size_t i = 0; i < m; ++i)
        temp1.push_back(nums1[i]);
    for (size_t j = 0; j < n; ++j)
        temp2.push_back(nums2[j]);
    temp1.push_back(INT_MAX);
    temp2.push_back(INT_MAX);
    size_t i = 0, j = 0;
    for (size_t k = 0; k < sum ; ++k) {
            if (temp1[i] <= temp2[j]) {
                nums.push_back(temp1[i]);
                ++i;
            }
            else {
                nums.push_back(temp2[j]);
                ++j;
            }
    }
    if (sum % 2 == 1)
        return nums[sum/2];
    else
        return (nums[sum/2] + nums[sum/2 - 1])/2.0;
}

int main () {
    clock_t startTime,endTime;
    startTime = clock();

    vector<int> nums1 = {1,3,5,7,9}, nums2 = {2,4,6,8,10};
    cout << findMedianSortedArrays(nums1, nums2) << endl;

    endTime = clock();
    cout << "Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;

    system("pause");
    return 0;
}
