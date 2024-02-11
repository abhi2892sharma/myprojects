#include <iostream>

int main()
{
    char a;
    int row;
    int col;

    std::cout<<"Number of rows you want \n";
    std::cin>>row;

    std::cout<<"Number of coloum you want \n";
    std::cin>>col;

    std::cout<<"Type the letter/number you want to use \n";
    std::cin>>a;

    for (int i=1; i<=row; i++)
    { for(int j=1; j<=col; j++)
        {   
            std::cout<<a;
        }
    std::cout<<'\n';
    }
}
