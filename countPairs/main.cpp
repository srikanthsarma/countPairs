#include<iostream>
int main() {
    int n, k, count = 0;
    int a[99999];
    std::cin >> n;
    std::cin >> k;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int min = a[i] - k, max = a[i] + k;
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            else if (min <= a[j] && a[j] <= max) {
                count++;
                break;
            }
        }
    }
    std::cout << count << std::endl;
}