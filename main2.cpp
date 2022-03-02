#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>

int main()
{

    int array[5] = {4, 4, 1, 2, 1};

    std::set<int> s;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        s.insert(array[i]);
        sum = sum + array[i];
    }
    auto sum_set = std::accumulate(s.begin(), s.end(), 0);

    std::cout << "occuring once: " sum - 2 * sum_set << std::endl;
}
