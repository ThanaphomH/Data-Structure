#include <vector>
#include <unordered_map>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_map<T,bool> t;
    for (auto &n : A) {
        t[n] = true;
        v.push_back(n);
    }
    for (auto &n : B) {
        if (!t[n]) v.push_back(n);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    unordered_map<T,bool> t;
    for (auto &n : B) {
        t[n] = true;
    }
    for (auto &n : A) {
        if (t[n]) v.push_back(n);
    }
    return v;
}
