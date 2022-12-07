#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char sentance[100], temp = 0;
    cin.getline(sentance, 100, '\n');
    bool counter = false, mistakescounter = false;
    int mistakes = 0, arr[100];
    for (size_t i = 0; i < strlen(sentance); i++)
    {
        if ((sentance[i] < 65  sentance[i]>90) && (sentance[i] > 122  sentance[i] < 97))
        {
            arr[i] = 3;
        }
        else
        {
            arr[i] = 2;
        }
    }
    while (counter != true)
    {
        counter = true;
        for (sizet i = 0; i < strlen(sentance); i++)
        {
            if (((sentance[i] == temp  sentance[i] + 32 == temp  sentance[i] - 32 == temp) && ((temp >= 65 && temp <= 90)  (temp >= 97 && temp <= 122)))  arr[i] != 2)
            {
                if (arr[i] == 2)
                {
                    arr[i] = 1;
                    mistakescounter = false;
                }
                cout << sentance[i];
            }
            else
            {
                cout << "";
                counter = false;
            }
        }
        if (mistakescounter == true)
        {
            mistakes++;
        }
        cout << "  " << mistakes << "/5 MISTAKES";
        cout << '\n';
        //LOSE CONDITION
        if (mistakes >= 5)
        {
            cout << "YOU LOSE!";
            break;
        }
        //WIN CONDITION
        if (counter == true)
        {
            cout << "YOU WIN!";
            break;
        }
        cin >> temp;
        mistakescounter = true;
    }
}