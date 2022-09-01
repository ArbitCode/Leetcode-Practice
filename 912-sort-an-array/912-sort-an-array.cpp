class Solution {
public:
    void merge(vector<int> &nums, int left, int mid, int right){
        //leftArray[left, mid] rightArray[mid + 1, right]
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        vector<int> leftArray(n1);
        vector<int> rightArray(n2);
        
        //copy
        for(int i = 0; i < n1; i++) leftArray[i] = nums[left + i];
        for(int j = 0; j < n2; j++) rightArray[j] = nums[mid + 1 + j];
        
        int index1 = 0;
        int index2 = 0;
        int mainIndex= left;
        
        while(index1 < n1 && index2 < n2){
            if(leftArray[index1] <= rightArray[index2])
                nums[mainIndex++] = leftArray[index1++];
            else
                nums[mainIndex++] = rightArray[index2++];
        }
        
        while(index1 < n1)
                nums[mainIndex++] = leftArray[index1++];
        while(index2 < n2)
                nums[mainIndex++] = rightArray[index2++];
        
    }
    
    void mergesort(vector<int> &nums, int left, int right){
        if(left >= right) return;
        
        int mid = left + (right - left) / 2;
        
        //sort leftarray[left, mid]
        mergesort(nums, left, mid);
        
        //sort rightArray[mid + 1, right]
        mergesort(nums, mid + 1, right);
        
        //merge both array
        merge(nums, left, mid, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
        
    }
};