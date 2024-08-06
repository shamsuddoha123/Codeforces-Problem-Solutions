#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneetWins = 0;

        // Enumerate all 2-turn card flip scenarios:
        // Suneet flips a1, Slavic flips b1
        int suneetWinsCurrent = 0, slavicWinsCurrent = 0;
        if (a1 > b1) suneetWinsCurrent++;
        else if (b1 > a1) slavicWinsCurrent++;
        if (a2 > b2) suneetWinsCurrent++;
        else if (b2 > a2) slavicWinsCurrent++;
        if (suneetWinsCurrent > slavicWinsCurrent) suneetWins++;

        // Suneet flips a1, Slavic flips b2
        suneetWinsCurrent = 0, slavicWinsCurrent = 0;
        if (a1 > b2) suneetWinsCurrent++;
        else if (b2 > a1) slavicWinsCurrent++;
        if (a2 > b1) suneetWinsCurrent++;
        else if (b1 > a2) slavicWinsCurrent++;
        if (suneetWinsCurrent > slavicWinsCurrent) suneetWins++;

        // Suneet flips a2, Slavic flips b1
        suneetWinsCurrent = 0, slavicWinsCurrent = 0;
        if (a2 > b1) suneetWinsCurrent++;
        else if (b1 > a2) slavicWinsCurrent++;
        if (a1 > b2) suneetWinsCurrent++;
        else if (b2 > a1) slavicWinsCurrent++;
        if (suneetWinsCurrent > slavicWinsCurrent) suneetWins++;

        // Suneet flips a2, Slavic flips b2
        suneetWinsCurrent = 0, slavicWinsCurrent = 0;
        if (a2 > b2) suneetWinsCurrent++;
        else if (b2 > a2) slavicWinsCurrent++;
        if (a1 > b1) suneetWinsCurrent++;
        else if (b1 > a1) slavicWinsCurrent++;
        if (suneetWinsCurrent > slavicWinsCurrent) suneetWins++;

        cout << suneetWins << endl;
    }

    return 0;
}