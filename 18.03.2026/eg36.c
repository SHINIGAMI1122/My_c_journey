#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int left = 0, right = n - 1;
    int answer = 0;
    int leftmax = 0, rightmax = 0;

    while (left < right) {
        leftmax = max(leftmax, height[left]);
        rightmax = max(rightmax, height[right]);

        if (leftmax < rightmax) {
            answer += leftmax - height[left];
            left++;
        } else {
            answer += rightmax - height[right];
            right--;
        }
    }
    return answer;
}

int main() {
    int n;
    cin >> n;

    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << trap(height);

    return 0;
}