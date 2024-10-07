


#include <unordered_map>
#include <vector>
#if 0

class RandomizedSet {
public:
    std::vector<int> store;
    std::unordered_map<int,int> includedNumbers;
    RandomizedSet() {

    }

    bool insert(int val) {
        if (includedNumbers.find(val) != includedNumbers.end()) {
            return false;
        }
        includedNumbers.insert({val,store.size()});
        store.emplace_back(val);
        return true;
    }

    bool remove(int val) {
        if (includedNumbers.find(val) != includedNumbers.end()) {
            int valIndex = includedNumbers.find(val)->second;
            store[valIndex] = store.back();
            store.pop_back();
            includedNumbers[store[valIndex]] = valIndex;
            includedNumbers.erase(val);
            return true;
        }

        return false;
    }

    int getRandom() {
        return store[rand()%store.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */


#endif
