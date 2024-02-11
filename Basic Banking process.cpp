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
char task;
double balance = 0;

std::cout<<" Hello, Please enter your name = ";
std::getline(std::cin, name);

while(task)
    {   
        std::cout<<"\n*************************************** \n";
        std::cout<<"*******Select one option \n";
        std::cout<<"*************************************** \n";
        std::cout<<"D - Deposit \n";
        std::cout<<"W - Withdraw \n";
        std::cout<<"B - Displace Balance \n";
        std::cin>>task;

        if(task == 'w' || task == 'W')
        {
            std::cout<<" Enter the amount you want to Withdraw = $";
            std::cin>>input;
            balance = withdraw(balance,input);  
        }
        else if(task == 'd' || task == 'D')
        {
            std::cout<<" Enter the amount you want to Deposit = $";
            std::cin>>input;
            balance = deposit(balance,input);
        }
         else if(task == 'b' || task == 'B')
        {
            display(name,balance);
        }
     
    std::cout<<" ***** Thank you for banking with us! ***** \n";

   }
}