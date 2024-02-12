#include <iostream>
#include <stdio.h>
#include <ctime>

char userinput()
{
    char player;
    std::cout<<"\n\n***Rock - Paper - Scissor***\n";
    std::cout<<"****************************\n";
    std::cout<<"\n";
    
    do
    {
        std::cout<<"*Chose one of the charater* \n";
        std::cout<<"R = Rock\n";
        std::cout<<"P = Paper\n";
        std::cout<<"S = Scissor\n";
        std::cin>> player;
    }while( player != 'r' &&  player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S');

    return player;
}
char computerinput()
{
    srand(time(0));
    int num = rand() % 3 +1;

    switch(num)
    {
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
}
char Showcoice(char choice)
{
    switch(choice)
    {
        case 'R':
        std::cout<<"Rock\n";
        break;
        case 'r':
        std::cout<<"Rock\n";
        break;
        case 'P':
        std::cout<<"Paper\n";
        break;
        case 'p':
        std::cout<<"Paper\n";
        break;
        case 'S':
        std::cout<<"Scissors\n";
        break;
        case 's':
        std::cout<<"Scissors\n";
        break;
    }

}
char displaywinner(char player, char comp)
{
    switch(player)
    {
        case 'R': if(comp == 'R')
                    { std::cout<<"Its a tie";}
                    else if (comp == 'P')
                    { std::cout<<"Computer win";}
                    else 
                    { std::cout<<"You Win!!";}
                    break;
        case 'r': if(comp == 'R')
                    { std::cout<<"Its a tie";}
                    else if (comp == 'P')
                    { std::cout<<"Computer win";}
                    else
                    { std::cout<<"You Win!!";}
                    break;
        case 'P': if(comp == 'R')
                    { std::cout<<"You Win!!";}
                    else if (comp == 'P')
                    { std::cout<<"Its a tie";}
                    else 
                    { std::cout<<"Computer win";}
                    break;
        case 'p': if(comp == 'R')
                    { std::cout<<"You Win!!";}
                    else if (comp == 'P')
                    { std::cout<<"Its a tie";}
                    else 
                    { std::cout<<"Computer win";}
                    break;
        case 'S': if(comp == 'R' )
                    { std::cout<<"Computer win";}
                    else if (comp == 'P' )
                    { std::cout<<"You Win!!";}
                    else 
                    { std::cout<<"Its a tie";}
                    break;
        case 's': if(comp == 'R' )
                    { std::cout<<"Computer win";}
                    else if (comp == 'P')
                    { std::cout<<"You Win!!";}
                    else 
                    { std::cout<<"Its a tie";}
                    break;                                                            
    }

}

int main()
{
    char player;
    char computer;
    
    do{
        player = userinput();
    std::cout<<" Your choice is = ";
    Showcoice(player);

    computer = computerinput();
    std::cout<<" Computer choice is = ";
    Showcoice(computer);

    displaywinner(player, computer);
   }while ( player !=0);
return 0;
}




