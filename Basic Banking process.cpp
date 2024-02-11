#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>

double deposit(double balance, double input)
{
    double bal = balance + input;
    return bal;
}
double withdraw(double balance, double input )
{
    double bal = balance - input;
    return bal;
}
void display( std::string name, double balance)
{
    std::cout<<"\n Hello " << name << '\n';
    std::cout<< "Your current balance is = $" << balance << '\n';
}
int main ()
{
double input;
std::string name;
int task;
double balance = 0;

std::cout<<" Hello, Please enter your name = ";
std::getline(std::cin, name);

while(task)
    {   
        std::cout<<"\n*************************************** \n";
        std::cout<<"*******Select one option \n";
        std::cout<<"*************************************** \n";
        std::cout<<"1 - Deposit \n";
        std::cout<<"2 - Withdraw \n";
        std::cout<<"3 - Displace Balance \n";
        std::cout<<"4 - Exit \n";
        std::cin>>task;

        if(task == 1)
        {
            std::cout<<" Enter the amount you want to Deposit = $";
            std::cin>>input;
            balance = deposit(balance,input);
        }
        else if(task == 2)
        {   
            std::cout<<" Enter the amount you want to Withdraw = $";
            std::cin>>input;
            balance = withdraw(balance,input);
        }
         else if(task == 3)
        {
            display(name,balance);
        }
        else if(task == 4)
        {
            std::cout<<" ***** Thank you for banking with us! ***** \n";
            return 0;
        }
   }
}
