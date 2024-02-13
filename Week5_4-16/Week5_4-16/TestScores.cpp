#include "TestScores.h"
#include <iostream>
using namespace std;

void TestScores::showGrade()
{
    // Constants for grade thresholds
    const int A_SCORE = 90,
        B_SCORE = 80,
        C_SCORE = 70,
        D_SCORE = 60,
        MIN_SCORE = 0,    // Minimum valid score
        MAX_SCORE = 100;  // Maximum valid score

    int testScore = -1;              // Holds the user entered numeric test score

    // Get the numeric test score
    cout << "Enter your numeric test score: ";
    cin >> testScore;

    // Check if the input is valid
    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {
        // The score is valid, so determine the letter grade
        if (testScore >= A_SCORE)
            cout << "Your grade is A.\n";
        else if (testScore >= B_SCORE)
            cout << "Your grade is B.\n";
        else if (testScore >= C_SCORE)
            cout << "Your grade is C.\n";
        else if (testScore >= D_SCORE)
            cout << "Your grade is D.\n";
        else
            cout << "Your grade is F.\n";
    }
    else
    {
        // An invalid score was entered
        cout << "\nThat is an invalid score. Run the program\n"
            << "again and enter a value in the range of\n"
            << MIN_SCORE << " through " << MAX_SCORE << ".\n";
    }
    displayMenu();
}

void TestScores::displayMenu()
{
    int choice = -1;
    cout << "1. Enter Student Score. \n";
    cout << "2. Quit. \n";
    
    cin >> choice;

    if (choice == 1)
    {
        showGrade();
    }
    else if (choice == 2)
    {
        cout << "See you next time! \n";
    }
    else
    {
        cout << "Please choose 1 or 2.\n";
        displayMenu();
    }
}
