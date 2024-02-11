#include <iostream>
#include <ctime>
int main()
{

    int guess;
    int output;
    int tries;
    tries = 0;

    srand(time(0));
    output = (rand() % 100 )+ 1;

    std::cout<<"********** Number Guessing game *************\n";
   
    do
        {
            std::cout<<"What is your guess between 0 & 100? \n";
            std::cin>>guess;
            tries++;
        if(guess > output)
            
            {std::cout<<"Too High\n";}

        else if(guess< output)
            {std::cout<<"Too Low\n";
            }
        else 
            {std::cout<<"Correct!! Number of tries is = " << tries << "\n";
            }
        
        }while(guess !=output);

    std::cout<<"********** Game over *************\n";    
        return 0;

}