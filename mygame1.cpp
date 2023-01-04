#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void showResult(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getPlayerChoice();
    std::cout << "You have summon a ";
    showChoice(player);
    

    computer = getComputerChoice();
    sleep(2);
    std::cout << "Your Opponent has summon out a ";
    showChoice(computer);

    sleep(4.5);
    showResult(player, computer);


    return 0;
}

char getPlayerChoice(){
    char player;

    do{
        std::cout << "******SIMPLE RPG GAME*******\n";
        std::cout << "'w' = Warrior\n";
        std::cout << "'a' = Assassin\n";
        std::cout << "'b' = Bowman\n";
        std::cout << "Which Character you like to Summon?\nPlease choose wisely xD: \n";
        std::cin >> player;
        //std::cout << player;
        if(player != 'w' && player != 'a' && player != 'b'){
            std::cout << "\nThat is a invalid choice!\n\n";
        }
    } while (player != 'w' && player != 'a' && player != 'b');

    return player;

}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'w';
        case 2: return 'a';
        case 3: return 'b';
    }

    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'w': std::cout << "Warrior!\n";
                break;
        case 'a': std::cout << "Assassin!\n";
                break;
        case 'b': std::cout << "Bowman!\n";
                break;
    }   
}
void showResult(char player, char computer){
    switch(player){
        case 'w':   if(computer == 'w'){
                        std::cout << "fu*k lah, it's tie!\n";
                    }
                    else if(computer == 'a'){
                        std::cout << "Your Warrior senses a blackshadow of assassin\nAssassin fucked up!\nWarrior kills the assassin!\nYou win!\n";
                    }
                    else{
                        std::cout << "Your Warrior run toward bowman clumsly and get discovered\n Bowman shooted out a poison arrow, your Warrior fucked up!\n YOU lose the game!\n";
                    }
                break;
        case 'a':   if(computer == 'w'){
                        std::cout << "The Warrior senses a blackshadow of assassin\nAssassin fucked up!\nWarrior kills the assassin!\nYou lose!\n";
                    }
                    else if(computer == 'a'){
                        std::cout << "fu*k lah, it's tie!";
                    }
                    else{
                        std::cout << "Your assassin disguises then walk carefully behind bowman and gives him a forever sweetdream!\nYou win!!!\n";
                    }
                break;
        case 'b':   if(computer == 'w'){
                        std::cout << "The Warrior run toward your bowman clumsly and get discovered\n Bowman shooted out a poison arrow, Warrior fucked up!\n You Win!!!\n";
                    }
                    else if(computer == 'a'){
                        std::cout << "Your bowman does not discover appearance of assassin, and get killed silently!\nYOU lose the game!!!";
                    }
                    else{
                        std::cout << "fu*k lah, it's tie!";
                    }
    }

}