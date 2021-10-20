#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    /*srand(time(0));*/

    int number = rand() % 100;
    int guess;
    int tries = 0;

    cout << "Guess the number from 1 and 100.\n";

    while (true)
    {

        cin >> guess;

        if (guess < 0)
        {
            cout << "Too low.\n";
        }

        else if
            (guess > 100)
        {
            cout << "Too high.\n";
        }

        else if (guess == number)
        {
            cout << "Your guess is correct.\n";
            printf("tries=%d\n", tries);
        }

        else
        {
            cout << "Your guess is incorrect. Please try again.\n";
            
            
        }
        tries += 1;
        /*tries++;
        printf("tries=%d", tries);*/
    }


    return 0;
}