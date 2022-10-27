class Solution {
public:
   bool isOneBitCharacter(vector<int>& bits) {
	while (!bits.empty()) {
		if (bits.at(0) == 0 && bits.size() == 1)
			return true;
		if (bits.at(0) == 1 && bits.at(1) == 0 || bits.at(0) == 1 && bits.at(1) == 1)
			bits.erase(bits.begin() + 0, bits.begin() + 2);
		else if (bits.at(0) == 0)
			bits.erase(bits.begin() + 0, bits.begin() + 1);
	}
	return false;
}
};