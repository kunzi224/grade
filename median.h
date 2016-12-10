#ifndef MEDIAN_H
#define MEDIAN_H

#include <iostream>
#include <iomanip>
#include <algorithm>
#include "grade.h"
extern double median(std::vector<double> hw);
extern std::istream &read(std::istream &is,Grade &o);
extern bool compare(Grade &s1,Grade &s2);
#endif // MEDIAN_H
