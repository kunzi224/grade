#include "grade.h"
#include "median.h"
double Grade::score()
{
    return 0.2 * m_midterm + 0.4 * m_final + 0.2 * median(m_homework);
}

std::string Grade::name() const
{
    return m_name;
}

double Grade::midterm() const
{
    return m_midterm;
}

double Grade::final() const
{
    return m_final;
}

std::vector<double> Grade::homework()
{
    return m_homework;
}

void Grade::setname(std::string name)
{
     m_name = name;
}

void Grade::setmidterm(double midterm)
{
  if(0 <= midterm && midterm <= 100)
      m_midterm = midterm;
  else
      throw std::domain_error("midterm is error");
}

void Grade::setfinal(double final)
{
    if(0 <= final && final <= 100)
        m_final = final;
    else
        throw std::domain_error("final is error");
}

void Grade::sethomework(std::vector<double> homework)
{
    if(homework.size() == 0)
        throw std::domain_error("no homework");
    else{
        for(auto g:homework)
            if(0 <= g && g <= 100)
                homework.push_back(g);
       else
         throw std::domain_error("homework.g is error");
    }
}
