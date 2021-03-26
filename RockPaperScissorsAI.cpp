/*
Rock, Paper, Scissors AI
Pawelski
3/26/2021
This program should generate a random number, which is used to have the
computer pick either rock, paper, or scissors. The program uses the following
assignments for the random numbers...
0 = rock
1 = paper
2 = scissors
Currently, the program is missing the cose to display the message "The computer
picked scissors." Add the code to do this.
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int computerChoice = rand() % 3;
    switch (computerChoice)
    {
        case 0:
            cout << "The computer picked rock.\n";
            break;
        case 1:
            cout << "The computer picked paper.\n";
            break;
        // Add the case for 2, which should print "The computer picked
        // scissors."
    }
    return 0;
}
