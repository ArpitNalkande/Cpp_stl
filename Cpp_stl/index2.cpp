#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> seq(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> seq[i];
    }

    int M;
    std::cin >> M;

    std::sort(seq.begin(), seq.end()); // Sort the sequence in ascending order

    int low = seq[0], high = seq[N - 1], result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int countGreater = N - (std::lower_bound(seq.begin(), seq.end(), mid) - seq.begin());

        if (countGreater >= M) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    std::cout << "Result:"<<result << std::endl;

    return 0;
}
