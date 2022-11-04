class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
       for (auto& v : A) {
		reverse(v.begin(), v.end());
		for (auto& n : v)
			n = !n;
	}
	return A; 
    }
};
