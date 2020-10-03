#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct( std::vector< long long int>& numbers) {
     long long max_product = 0;
    long long int n = numbers.size();
    sort(numbers.begin(),numbers.end());
//    std::cout<<numbers[n-1]<<" "<<numbers[n-2]<<"\n";
    max_product=(numbers[n-1]*numbers[n-2]);
    return max_product;
}

int main() {
     long long int n;
    std::cin >> n;
    std::vector< long long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    std::cout<<MaxPairwiseProduct(numbers)<< "\n";
    return 0;
}
