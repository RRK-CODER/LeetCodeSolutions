}
bool contains(int key) {
int h = hash(key);
return search(key) != table[h].end();
}
};
​
Approach 3: Troll Implementation
​
class MyHashSet {
private:
vector<bool> table;
public:
MyHashSet() : table(1e6 + 1, false) {}
void add(int key) {
table[key] = true;
}
void remove(int key) {
table[key] = false;
}
bool contains(int key) {
return table[key];
}
};
}
};