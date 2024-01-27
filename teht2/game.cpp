#include <cstdlib>
#include <iostream>
#include <time.h>
#include "game.h"

Game::Game(int value){
    maxNumber = value;
    numOfGuesses = 0;
    srand(time(0));
    randomNumber = rand () % maxNumber;
    //if randomNumber is 0 set it to 1, otherwise do nothing
    randomNumber ? randomNumber = 1 : randomNumber;
    std::cout
        << "GAME CONSTRUCTOR: object initialized with "
        << maxNumber
        << " as a maximum value"
        << std::endl;

}

Game::~Game()
{
    std::cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<std::endl;
}

void Game::play()
{
    while(playerGuess != randomNumber){
        std::cout<<"Give your guess between 1-"<<maxNumber<<std::endl;
        std::cin>>playerGuess;
        if(playerGuess == randomNumber){
            std::cout<<"Your guess is right = "<<playerGuess<<std::endl;
            numOfGuesses++;
            printGameResult();
        }else if(playerGuess < randomNumber){
            std::cout<<"Your guess is too small"<<std::endl;
            numOfGuesses++;
        }else{
            std::cout<<"Your guess is too big"<<std::endl;
            numOfGuesses++;
        }
    }
}

void Game::printGameResult()
{
    std::cout<<"You guessed the right answer = "
              <<randomNumber
              <<" with "
              <<numOfGuesses
              <<" guesses"
              <<std::endl;
}
