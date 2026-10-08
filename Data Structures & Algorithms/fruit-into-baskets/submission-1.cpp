class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int best = INT_MIN;
        unordered_map<int, int> memory;

        for (int right = 0; right < fruits.size(); right++) {
            memory[fruits[right]] = right;
            int count = memory.size();

            if (count > 2) {
                auto it = min_element(memory.begin(), memory.end(),
                [](const auto& a, const auto& b) { return a.second < b.second; });

                left = it->second + 1;
                memory.erase(it);
            }

            if (right - left + 1 > best) {
                best = right - left + 1;
            }
        }
        return best;
    }
};