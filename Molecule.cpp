#include "Molecule.h"

//constructor
Molecule::Molecule(double m, double s, vector<double> sp, vector<double> d){
    mass = m;
    speed = s;
    start_position = sp;
    direction = d;
}