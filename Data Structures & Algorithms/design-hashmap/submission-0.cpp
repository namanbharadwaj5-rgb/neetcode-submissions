class MyHashMap {
    static const int bucketSize = 1000;
    vector<vector<pair<int,int>>> buckets = vector<vector<pair<int,int>>>(bucketSize);
public:
    MyHashMap() {
    }

    void put(int key, int value) {
        int idx = key % bucketSize;                    // was bucketsize
        for (auto& p : buckets[idx]) {                  // was bucket[idx]
            if (p.first == key) {
                p.second = value;                        // was missing ;
                return;
            }
        }                                                 // push_back moved OUTSIDE this closing brace
        buckets[idx].push_back({key, value});            // was bucket[idx], and was wrongly inside the loop
    }

    int get(int key) {
        int idx = key % bucketSize;                    // was bucketsize
        for (auto& p : buckets[idx]) {                  // was bucket[idx]
            if (p.first == key) {
                return p.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        int idx = key % bucketSize;                    // was bucketsize
        for (int i = 0; i < buckets[idx].size(); i++) {
            if (buckets[idx][i].first == key) {         // was bucket[idx][i]
                buckets[idx].erase(buckets[idx].begin() + i);
                return;                                   // was missing — added
            }
        }
    }
};