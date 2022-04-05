/*
Rock, Paper, Scissors AI
Pawelski
4/5/2022
This program should generate a random number, which is used to have the
computer pick either rock, paper, or scissors. The program uses the following
assignments for the random numbers...
0 = rock
1 = paper
2 = scissors
Currently, the program is missing two cases. The first should display
the message "The computer picked paper.", and the second should display
the message "The computer picked scissors." Add these cases to the
switch case.
*/

#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    srand(time(0));
    int computer_choice = rand() % 3;
    switch (computer_choice)
    {
    case 0:
        std::cout << "The computer picked rock.\n";
        break;
    // Add your code here!
    }
    return 0;
}
