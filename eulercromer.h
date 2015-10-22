#ifndef EULERCROMER_H
#define EULERCROMER_H
#include <functional>
#include <vector>
#include "planet.h"
using std::function; using std::vector;

class EulerCromer
{
public:
    EulerCromer();
    void calculateForces(vector<Planet*> planets);
    void tick(vector<Planet*> planets, double dt);
};

#endif // EULERCROMER_H
