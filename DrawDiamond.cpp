// DrawDiamond.cpp : Use this shell of a program to get started
//

#include <iostream>
#include <iomanip>

using namespace std;

const int MIN_WIDTH = 1;
const int MAX_WIDTH = 75;

int main()
{
    int iInputValue = 0;

    while(true)
    {
        cout << "PLease enter an ODD integer in the range of " << MIN_WIDTH << " to " << MAX_WIDTH << " or 0 to quit: ";
        cin >> iInputValue;
        cout << endl;

        // Is the input less than or greater than or even?
        if (iInputValue < MIN_WIDTH || iInputValue > MAX_WIDTH || (iInputValue % 2) == 0)
        {
            cout << "Invalid integer...program exiting" << endl;
            // Non Windows user test code:
            // cout << "Press any key to continue. . ." << endl;
            // cin.ignore();
            // cin.get();
            system("pause");
            return 0;
        }

        //////////////////////////////////////////
       
        int Star_Location = 0;             // Top star is in the center
        int Space_Num = 0;                 // Space is fill in between 2 stars
        int midSpace = 0;
        char star = '*';
        char centerRow = 'X';
        char space = ' ';

        Star_Location = (iInputValue + 3)/2;  // Find top star location which is in the center
        cout << setfill(space);

        // Print out star pyramid
        for (int i= Star_Location; i > 1; i-- )
        {
            cout << setw(i) << star ;
            midSpace = i;
            Space_Num = Star_Location - midSpace;
            // Start filling out between stars with space
            if (Space_Num > 0)
            {
                Space_Num = Space_Num *2;
                cout << setw(Space_Num) << star;
            }
            cout << endl;
        }

        // Print out center line with X
        for (int s=0; s < (iInputValue +2); s++) cout << centerRow;
        cout << endl;

        //Print out reverted pyramid, condition should be complementary set of spyramid
        for (int t=2; t <= Star_Location; t++ )
        {
            cout << setw(t) << star ;
            midSpace = t;
            Space_Num = Star_Location - midSpace;
            // Start filling out between stars with space
            if (Space_Num > 0)
            {
                Space_Num = Space_Num *2;
                cout << setw(Space_Num) << star;
            }
            cout << endl;
        }


        /////////////////////////////////////////

        cout << endl;
        // Non Windows user test code
        // cout << "Press any key to continue. . ." << endl;
        // cin.ignore();
        // cin.get();
        system("pause");
        system("cls");

    }

    return 0;
}