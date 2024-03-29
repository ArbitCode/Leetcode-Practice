class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int i = 0, j = 0;
        vector<int> ans;
	list<int> l;
	while(j < arr.size()){
		while(l.size() > 0 and l.back() < arr[j])
			l.pop_back();
		l.push_back(arr[j]);
		if(j - i + 1 < k) j++;
		else if(j - i + 1 == k){
			ans.push_back(l.front());// l.front() << " ";
			if(arr[i] == l.front()){
				l.pop_front();
			}
			i++;
			j++;
		}
	}
        return ans;
    }
};