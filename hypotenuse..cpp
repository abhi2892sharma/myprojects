//std:: cout<<"Hello there" << std:: endl;
//std:: cout<<"This is my first program";

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>

namespace part1
{
double x;
}
namespace part2
{
double x;
}

int main(void)
{
    std::string name;

    std::cout<<" What is height of Trianlge? ";
    std::cin>> part1::x;

    std::cout<<"What is the base of Triangle? ";
    std::cin>> part2::x;
    double y = sqrt(pow(part1::x,2)+pow(part2::x,2));
    
    std::cout<<"What is your triangle name? ";
    std::getline(std::cin>>std::ws, name);

std::cout<<"The hypotenuse of "<< name <<" is = "<< y;

}
