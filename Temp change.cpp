#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

int main(){

    double Temp;
    char a;
    double f;
    double c;

    std::cout<<"Is temperature in Celcius(c) or Fahrenheit(f)? \n";
    std::cin>>a;
    
    switch (a)
    { case 'c':
    std::cout<<"What is temperature in Celcius? \n";
    std::cin>>Temp;    
    f = ((Temp*9/5) + 32);
    std::cout<<"The temperature in Fahrenheit is =" << f;
    break;
    
    case 'f':
    std::cout<<"What is temperature in Fahrenheit? \n";
    std::cin>>Temp;
    c = ((Temp - 32) * 5/9);
    std::cout<<"The temperature in Celcius is =" << c;
    break;

    default: 
    std::cout<<"This is invalid resposne \n";

    }

}