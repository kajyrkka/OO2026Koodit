#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 20, 30, 40};

    // Etsi ensimmäinen suurempi kuin 25
    auto it = std::find_if(v.begin(), v.end(), [](int x){ return x > 25; });

    if (it != v.end())
        std::cout << "Loytyi: " << *it << std::endl;
    else
        std::cout << "Ei loytynyt\n";



    // Etsi ensimmäinen suurempi kuin 25
    auto it2 = std::find(v.begin(), v.end(), 40 );

    if (it2 != v.end())
        std::cout << "Loytyi: " << *it2 << std::endl;
    else
        std::cout << "Ei loytynyt\n";



    int raja = 25;

    // Etsi ensimmäinen luku, joka on suurempi kuin raja
    auto it3 = std::find_if(v.begin(), v.end(),
                           [raja](int x) {  // <-- raja "capturoitu" lambdaan
                               return x > raja;
                           });

    if (it3 != v.end())
        std::cout << "Loytyi: " << *it3 << std::endl;  // tulostaa 30
    else
        std::cout << "Ei loytynyt\n";
}



