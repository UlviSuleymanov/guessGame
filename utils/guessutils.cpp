//
// Created by Ulvi on 03.04.2023.
//
#include "guessutils.h"
#include <iostream>

int rightScore{0};
int wrongScore{0};
int score{0};
bool isGameStarted = false;
using std::cout, std::cin, std::endl;

void startGame() {
    if (isGameStarted == false) {
        isGameStarted = true;
    }
    cout << "Guess the right number. number is between 1-10 good luck!" << endl;
    int x{0};
    while (x < 5) {
        srand(time(0));
        int randomNumber = (rand() % 3) + 1;
        int answer{};
        cin >> answer;
        if (answer == randomNumber) {
            cout << "You have guest it right! your guess :" << answer << " target number " << randomNumber << '\n';
            rightScore++;
        } else if (answer != randomNumber) {
            cout << "Wrong answer your guess :" << answer << " target number " << randomNumber << '\n';
            wrongScore++;
        }
        x++;
    }
    score = rightScore - wrongScore;
    if (x == 5) {
        continueGame();
    }
}
void continueGame() {
    cout << "Do you want to continue game? enter Yes or No" << '\n';
    std::string answer = "";
    cin >> answer;
    if (answer == "Yes") {
        if (isGameStarted == true) {
            isGameStarted = false;
            startGame();
        }
    }
    if (answer == "No") {
        if (score < 0) {
            cout << "Game is finished your score is 0. Better luck next time." << '\n';
        } else if (score > 0) {
            cout << "Game is finished and your score is " << score << '\n';
        }
    }
}
