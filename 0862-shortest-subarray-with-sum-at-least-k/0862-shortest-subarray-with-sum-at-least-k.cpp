class Solution {
public:
 int shortestSubarray(vector<int> A, int K) {
        int N = A.size();
    int res = N + 1;
    vector<long long> B(N + 1, 0);
    for (int i = 0; i < N; i++)
        B[i + 1] = B[i] + A[i];
    deque<int> d;
    for (int i = 0; i < N + 1; i++) {
        while (!d.empty() && B[i] - B[d.front()] >= K) {
            res = min(res, i - d.front());
            d.pop_front();
        }
        while (!d.empty() && B[i] <= B[d.back()])
            d.pop_back();
        d.push_back(i);
    }
    return (res <= N) ? res : -1;
    }
};