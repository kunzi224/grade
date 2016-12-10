#ifndef GRADE_H
#define GRADE_H
#include <vector>
#include <string>
#include <stdexcept>
class Grade{
public:
    double score();

    std::string name() const;
    double midterm() const;
    double final() const;
    std::vector<double> homework();

    void setname(std::string name);
    void setmidterm(double midterm);
    void setfinal(double final);
    void sethomework(std::vector<double> homework);
private:
    std::string m_name;
    double m_midterm;
    double m_final;
    std::vector<double> m_homework;

};
#endif // GRADE_H
