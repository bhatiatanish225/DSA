class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;

        for (int num : nums) {
            frequencyMap[num]++;
        }

        
        int maxFrequency = 0;
        for (const auto& entry : frequencyMap) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
            }
        }

    
        int totalFrequency = 0;
        for (const auto& entry : frequencyMap) {
            if (entry.second == maxFrequency) {
                totalFrequency += entry.second;
            }
        }

        return totalFrequency;

        
    }
};