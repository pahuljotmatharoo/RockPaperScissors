#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
#include <vector>
using namespace std;

int main()
{
    //For random number
    srand(static_cast<unsigned int>(std::time(nullptr)));
    vector <string> choicec = { "rock", "paper", "scissor" };
    cout << "Welcome to Rock, Paper, Scisscors \nHow many times would you like to play? \n";
    int plays; cin >> plays;
    string choice;
    for (int i = 0; i < plays; i++) {
        //Generating random number from 0-2
        int random = rand() % 3;
        //Picking either Rock, Paper, or Scissor from vector at index [random number]
        string choicecc = choicec[random];
        cout << "Pick either Rock, Paper, or Scisscor \n";
        cin >> choice;
        //When picking choice not given
        while (choice != "Rock" && choice != "Paper" && choice != "Scissor") {
            cout << "You entered incorrectly. Pick either Rock, Paper, or Scisscor \n";
            cin >> choice;
        }
        //Winning or Losing determined
        if (choice == "Rock" && choicecc == choicec[0]) {
            cout << "It's a draw\n";
        }
        else if (choice == "Rock" && choicecc == choicec[1]) {
            cout << "You lost, the computer picked paper\n";
        }
        else if (choice == "Rock" && choicecc == choicec[2]) {
            cout << "You won, the computer picked scissor\n";
        }
        else if (choice == "Paper" && choicecc == choicec[0]) {
            cout << "You won, the computer picked rock\n";
        }
        else if (choice == "Paper" && choicecc == choicec[1]) {
            cout << "It's a draw\n";
        }
        else if (choice == "Paper" && choicecc == choicec[2]) {
            cout << "You lost, the computer picked scissor\n";
        }
        else if (choice == "Scissor" && choicecc == choicec[0]) {
            cout << "You lost, the computer picked rock\n";
        }
        else if (choice == "Scissor" && choicecc == choicec[1]) {
            cout << "You won, the computer picked paper\n";
        }
        else if (choice == "Scissor" && choicecc == choicec[2]) {
            cout << "It's a draw\n";
        }
    }
 }
