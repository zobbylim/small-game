#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You summon a ";
    showChoice(player);

    
    computer = getComputerChoice();
    std::cout << "Your opponent summon a ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "\nRock-paper-Scissors Game!\n\n";

    do{
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cout << "Choose which you want to summon out!!!\n\n";
        std::cin >> player; 
        if (player != 'r' && player != 'p' && player != 's')
        {
            std::cout << "Invalid Summon!!!\n\n";
        }
        
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock!\n";
            break;
        case 'p': std::cout << "Paper!\n";
            break;
        case 's': std::cout << "Scissors!\n";
            break;
    }
    
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "It is a tie!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You LOSE the game!\n";
                    }
                    else{
                        std::cout << "You WIN the game!!!\n";
                    }
                    break;
        case 'p':   if(computer == 'r'){
                        std::cout << "You WIN the game!!!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "It is a tie!\n";
                    }
                    else{
                        std::cout << "You LOSE the game!\n";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        std::cout << "You LOSE the game!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You WIN the game!!!\n";
                    }
                    else{
                        std::cout << "It is a tie!\n";
                    }
                    break;  
    }
}
