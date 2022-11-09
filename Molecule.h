#include <vector>

using namespace std;

class Molecule{         // the class itself
    public:             // access specifier
        double mass;
        double speed;
        vector<double> start_position;
        vector<double> direction;

        // Constructor
        Molecule(double m, double s, vector<double> sp, vector<double> d);
};