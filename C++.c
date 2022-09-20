
#include <stdio.h>


int main(){
    printf("hello world");
    std::vector<unsigned int> primes {2u,3u,4u,7u,9u,11u,19u};

    for(const auto& state : primes){
        printf(state);
    }
    return 0;
}