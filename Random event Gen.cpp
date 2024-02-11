#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int a = (rand() % 6 +1);

    switch(a)
    {   case 1:
        std::cout<<"You have won a sticker\n";
        break;
        case 2:
        std::cout<<"You have won a discount vouchers\n";
        break;
        case 3:
        std::cout<<"You have won a gift card\n";
        break;
        case 4:
        std::cout<<"You have won a earphones\n";
        break;
        case 5:
        std::cout<<"You have won a phone\n";
        break;
        case 6:
        std::cout<<"You have won a car\n";
        break;
    }

}