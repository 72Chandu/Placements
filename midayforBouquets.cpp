#include <bits/stdc++.h>
using namespace std;

bool canMake(vector<int>& days, int m, int k, int mid) {
    int count = 0, bouquets = 0;
    for (int d : days) {
        if (d <= mid) {
            count++;
            if (count == k) {
                bouquets++;
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    return bouquets >= m;
}

int minDays(vector<int>& days, int m, int k) {
    long long totalFlowers = 1LL * m * k;
    if (totalFlowers > days.size()) return -1;

    int left = *min_element(days.begin(), days.end());
    int right = *max_element(days.begin(), days.end());
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canMake(days, m, k, mid)) {
            ans = mid;
            right = mid - 1; // try earlier day
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> flowerReadyDay = {1, 10, 3, 10, 2};
    int m = 3, k = 1;

    cout << minDays(flowerReadyDay, m, k) << endl;
    return 0;
}
