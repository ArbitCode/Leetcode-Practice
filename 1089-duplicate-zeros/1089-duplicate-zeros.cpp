class Solution {
public:
    //array insertion
    void insertArray(vector<int>& arr, int index, int num){
        for(int i = arr.size()-1; i > index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = num;
    }
    void duplicateZeros(vector<int>& arr) {
        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] == 0){
                insertArray(arr, i, 0);
                i++;
            }
        }
        
    }
};