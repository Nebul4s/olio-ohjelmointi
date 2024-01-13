#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum);

int main()
{
    srand(time(0));

    int guessAmount = game(40);
    cout << "Arvasit " << guessAmount << " kertaa" << endl;
    return 0;
}

int game(int maxnum){;
    int randomNumber = rand() % maxnum + 1;

    int guess;
    int guessAmount = 0;
    //works fine in cmd, yet Qt console ignores any cin request?
    cin >> guess;

    while (guess != randomNumber) {
        if (guess > randomNumber) {
            cout << "Luku on pienempi" << endl;
            cin >> guess;
            guessAmount++;
        }
        else {
            cout << "Luku on suurempi" << endl;
            cin >> guess;
            guessAmount++;
        }
    }
    cout<<"Oikea vastaus"<<endl;

    return guessAmount;
}

