#include "median.h"


double median(std::vector<double> hw)
{
       auto hw_size = hw.size();
       if(hw_size == 0)
           throw std::domain_error("hw_size is error");
       else
         sort(hw.begin(),hw.end());
        auto mid_size = hw_size / 2;
        auto median = hw_size % 2 == 0 ? ((hw[mid_size] + hw[mid_size - 1]) / 2): hw[mid_size];
        return median;

}
std::istream &read(std::istream &is,Grade &s)
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> hw;
    is >> name >> midterm >> final;

    if(is){
         double x;
         while(is >> x)
             hw.push_back(x);
         is.clear();

         s.setmidterm(midterm);
         s.setfinal(final);
         s.setname(name);
         s.sethomework(hw);
    }

     return is;
}

bool compare(Grade &s1,Grade &s2)
{
     return s1.name() < s2.name();
}
