#include <vector>
#include <algorithm>
using namespace std;

class MyHashSet {
public:
    vector<int> hash;

    MyHashSet() {
    }

    void add(int key) {
        if (!contains(key)) {
            hash.push_back(key);
        }
    }

    void remove(int key) {
        hash.erase(std::remove(hash.begin(), hash.end(), key), hash.end());
    }

    bool contains(int key) {
        return std::find(hash.begin(), hash.end(), key) != hash.end();
    }
};
