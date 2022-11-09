#include <iostream>
#include <ctime>
#include <random>
#include "randgen.cpp"
#include "Molecule.h"


using namespace std;

int main(){

    // seeds random number generator
    //srand(time(NULL));

    std::mt19937 generator;
    generator.seed(time(NULL));
    std::uniform_real_distribution<double> distribution(0.0,1.0);
/*
    for (int i = 0; i < 10; i++){
        std::cout << distribution(generator) << endl;
    }
*/
    Molecule myMol(3.0, 4.0, {1,2,3}, {4,5,6});

    cout << myMol.speed;

    return 0;
}