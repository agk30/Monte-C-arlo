#include <iostream>
#include <ctime>
#include <random>
#include "randgen.cpp"


using namespace std;

int main(){

    // seeds random number generator
    srand(time(NULL));

    std::mt19937 generator;
    generator.seed(time(NULL));
    std::uniform_real_distribution<double> distribution(0.0,1.0);

    for (int i = 0; i < 10; i++){
        std::cout << distribution(generator) << endl;
    }

    std::cout << add(2.0,3.0);

    return 0;
}