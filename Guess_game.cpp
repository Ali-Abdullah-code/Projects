#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int random = rand() % 100, guess, choice;
    int x, easy = 10, med = 7, mas = 4;
    cout << "Enter 1 if you want to play a game or 0 if you do not: ";
    cin >> x;
    if (x == 1 || x == 0)
    {
        if (x == 1)
        {

            cout << "Select mode\n1.Easy\n2.Medium\n3.Master\n";
            cout << "Enter mode: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "You have total " << easy << " chances\n";
                for (; x != 0;)
                {
                    cout << "Enter your guessed number[1 - 100]: ";
                    cin >> guess;
                    if (guess < random)
                    {
                        cout << "Too low\n";
                        easy--;
                        if (easy == 0)
                        {
                            cout << "You reached the limit " << easy << " chances left.\n";
                            cout << "The number was: " << random << endl;
                            break;
                        }
                        cout << easy << " Chances left\n";
                    }
                    else if (guess > random)
                    {
                        cout << "Too High\n";
                        easy--;
                        if (easy == 0)
                        {
                            cout << "You reached the limit " << easy << " chances left.\n";
                            cout << "The number was: " << random << endl;
                            break;
                        }
                        cout << easy << " Chances left\n";
                    }
                    else
                    {
                        cout << "Congratulations you won.";
                        break;
                    }
                }
                break;
            case 2:
                cout << "You have total " << med << " chances\n";
                for (; x != 0;)
                {
                    cout << "Enter your guessed number[1 - 100]: ";
                    cin >> guess;
                    if (guess < random)
                    {
                        cout << "Too low\n";
                        med--;
                        if (med == 0)
                        {
                            cout << "You reached the limit " << med << " chances left.\n";
                            cout << "The number was: " << random << endl;
                            break;
                        }
                        cout << med << " Chances left\n";
                    }
                    else if (guess > random)
                    {
                        cout << "Too High\n";
                        med--;
                        if (med == 0)
                        {
                            cout << "You reached the limit " << med << " chances left.\n";
                            cout << "The number was: " << random << endl;
                            break;
                        }
                        cout << med << " Chances left\n";
                    }
                    else
                    {
                        cout << "Congratulations you won.";
                        break;
                    }
                }
                break;
            case 3:
                cout << "You have total " << mas << " chances\n";
                for (; x != 0;)
                {
                    cout << "Enter your guessed number[1 - 100]: ";
                    cin >> guess;
                    if (guess < random)
                    {
                        cout << "Too low\n";
                        mas--;
                        if (mas == 0)
                        {
                            cout << "You reached the limit " << mas << " chances left.\n";
                            cout << "The number was: " << random << endl;
                            break;
                        }
                        cout << mas << " Chances left\n";
                    }
                    else if (guess > random)
                    {
                        cout << "Too High\n";
                        mas--;
                        if (mas == 0)
                        {
                            cout << "You reached the limit " << mas << " chances left.\n";
                            cout << "The number was: " << random << endl;
                            break;
                        }
                        cout << mas << " Chances left\n";
                    }
                    else
                    {
                        cout << "Congratulations you won.";
                        break;
                    }
                }
                break;
            default:
                cout << "Invalid input";
                break;
            }
        }
        else
            cout << "Exit";
    }
    else
        cout << "Invalid input.";
    return 0;
}