#include <cstdio>
#include <algorithm>
#include <chrono>

int main() {
    std::chrono::milliseconds ms = std::chrono::duration_cast< std::chrono::milliseconds >(
            std::chrono::system_clock::now().time_since_epoch()
            );
    long long seed = ms.count();
    srand(seed);
    printf("%d %d\n", rand(), rand());
    return 0;
}
