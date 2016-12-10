#include <iostream>
#include "grade.h"
#include "median.h"

using std::cin;     using std::endl;
using std::sort;    using std::cout;
using std::vector;  using std::setw;
int main(int argc, char *argv[])
{
    vector<Grade > course_grade;
    Grade g;
    while(read(cin,g)){
        course_grade.push_back(g);
    }
    sort(course_grade.begin(),course_grade.end(),compare);

    cout << "-----------------score is display----------------" << endl;


    return 0;
}
