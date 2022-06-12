class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        map<int, vector<int>> hash;
        int beg = 0, end = numbers.size() - 1;
        vector<int> res;
        
        for(int i = 0; i < (int)numbers.size(); i++) {
            if(hash.find(numbers[i]) == hash.end()) { 
                hash[numbers[i]].push_back(1); 
                hash[numbers[i]].push_back(i + 1); 
            }
            else {
                hash[numbers[i]][0]++;
                hash[numbers[i]].push_back(i + 1);
            }
        }
        
        for(auto x: numbers) {
            if(x + x == target) {
                if(hash[x][0] > 1) {
                    res.push_back(hash[x][1]);
                    res.push_back(hash[target - x][2]);
                    break;
                }
            }
            if(hash.find(target - x) != hash.end()) {
                res.push_back(hash[x][1]);
                res.push_back(hash[target - x][1]);
                break;
            }
        }
        return res;
    }
};
