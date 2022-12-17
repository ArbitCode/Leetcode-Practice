class Solution {
public:
    int getExistIndex(vector<int>& arr, int element){
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == element) return i;
        }
        return -1;
    }
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            int j = getExistIndex(arr, arr[i]*2);
            if(i!=j && j >= 0) return true;
        }
        return false;
        
    }
};