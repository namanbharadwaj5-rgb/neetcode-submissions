class MyHashSet {
private:
    static const int bucketSize = 1000;
    vector<vector<int>> buckets;  // array of buckets, each bucket is a vector

public:
    MyHashSet() {
        buckets.resize(bucketSize);  // create 1000 empty buckets
    }

    void add(int key) {
        int idx = key % bucketSize;
        for (int val : buckets[idx]) {
            if (val == key) return;
        }
        buckets[idx].push_back(key);
    }

    bool contains(int key) {
        int idx = key % bucketSize;
        for (int val : buckets[idx]) {
            if (val == key) return true;
        }
        return false;
    }

    void remove(int key) {
        int idx = key % bucketSize;
        for (int i = 0; i < buckets[idx].size(); i++) {
            if (buckets[idx][i] == key) {
                buckets[idx].erase(buckets[idx].begin() + i);
                return;
            }
        }
    }
};