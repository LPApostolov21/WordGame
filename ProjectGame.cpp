#include <iostream>
#include <iomanip>
#include <windows.h> 
#include <string>
#include <cstring>
using namespace std;
void guess(string fakeSentance, int maxMistakes)
{
    char temp = 0, sentance[100];
    strcpy_s(sentance, fakeSentance.c_str());
    bool counter = false, mistakescounter = false;
    int mistakes = 0, arr[100], choice;
    for (size_t i = 0; i < strlen(sentance); i++)
    {
        if ((sentance[i] < 65 || sentance[i]>90) && (sentance[i] > 122 || sentance[i] < 97))
        {
            arr[i] = 3;
        }
        else
        {
            arr[i] = 2;
        }
    }
    system("cls");
    while (counter != true)
    {
        counter = true;
        for (size_t i = 0; i < strlen(sentance); i++)
        {
            if (((sentance[i] == temp || sentance[i] + 32 == temp || sentance[i] - 32 == temp) && ((temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122))) || arr[i] != 2)
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
                cout << "_";
                counter = false;
            }
        }
        if (mistakescounter == true)
        {
            mistakes++;
        }
        cout << "  " << mistakes << "/" << maxMistakes << " MISTAKES";
        cout << '\n';
        //LOSE CONDITION
        if (mistakes >= maxMistakes)
        {
            system("cls");
            cout << setw(49) << "_____" << setw(33) << "____" << setw(10) << "____" << setw(10) << "_______" << endl;
            cout << setw(35) << "\\" << setw(4) << "/" << setw(5) << "|" << setw(6) << "|" << setw(5) << "|" << setw(4) << "|" << setw(10) << "|" << setw(9) << "|" << setw(5) << "|" << setw(9) << "|____" << setw(7) << "|" << endl;
            cout << setw(38) << "\\ /" << setw(6) << "|" << setw(6) << "|" << setw(5) << "|" << setw(4) << "|" << setw(10) << "|" << setw(9) << "|" << setw(5) << "|" << setw(10) << "|" << setw(6) << "|" << endl;
            cout << setw(37) << "|" << setw(13) << "|_____|" << setw(11) << "|___|_'" << setw(12) << "|____" << setw(10) << "|____|" << setw(10) << "____|" << setw(6) << "|" << endl;
            cout << "1. Play again" << '\n' << "2. Exit" << '\n' << "Input: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                system("cls");
                cout << "Choose your word: ";
                cin >> fakeSentance;
                system("cls");
                cout << "Choose your maximum mistakes: ";
                cin >> maxMistakes;
                guess(fakeSentance, maxMistakes); break;
            default: break;
            }
            break;
        }

        //WIN CONDITION
        if (counter == true)
        {
            cout << setw(49) << "_____" << setw(39) << "_____" << endl;
            cout << setw(35) << "\\" << setw(4) << "/" << setw(5) << "|" << setw(6) << "|" << setw(5) << "|" << setw(4) << "|" << setw(10) << "\\" << setw(9) << "/" << setw(5) << "|" << setw(6) << "|" << setw(6) << "|\\" << setw(3) << "|" << endl;
            cout << setw(38) << "\\ /" << setw(6) << "|" << setw(6) << "|" << setw(5) << "|" << setw(4) << "|" << setw(11) << "\\" << setw(4) << "/\\" << setw(3) << "/" << setw(6) << "|" << setw(6) << "|" << setw(5) << "|" << setw(2) << "\\" << setw(2) << "|" << endl;
            cout << setw(37) << "|" << setw(13) << "|_____|" << setw(11) << "|___|_'" << setw(11) << "\\/" << setw(4) << "\\/" << setw(13) << "|_____|" << setw(5) << "|" << setw(4) << "\\|" << endl;
            cout << "1. Play again" << '\n' << "2. Exit" << '\n' << "Input: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                system("cls");
                cout << "Choose your word: ";
                cin >> fakeSentance;
                system("cls");
                cout << "Choose your maximum mistakes: ";
                cin >> maxMistakes;
                guess(fakeSentance, maxMistakes); break;
            default: break;
            }
            break;
        }
        cin >> temp;
        mistakescounter = true;
        system("cls");
    }
}
int main()
{
    system("Color 0D");
    int choose, mistakes;
    string word;
    cout << setw(52) << "_________" << endl;
    cout << "||" << setw(5) << "||" << setw(10) << "//\\\\" << setw(12) << "||\\\\" << setw(6) << "||" << setw(17) << "||=========" << setw(27) << "||\\\\" << setw(10) << "//||" << setw(10) << "//\\\\" << setw(12) << "||\\\\" << setw(6) << "||" << endl;
    cout << "||" << setw(5) << "||" << setw(11) << "//  \\\\" << setw(9) << "||" << setw(3) << "\\\\" << setw(5) << "||" << setw(8) << "||" << setw(34) << "||" << setw(3) << "\\\\" << setw(6) << "//" << setw(3) << "||" << setw(11) << "//  \\\\" << setw(9) << "||" << setw(3) << "\\\\" << setw(5) << "||" << endl;
    cout << "||===||" << setw(12) << "//====\\\\" << setw(8) << "||" << setw(4) << "\\\\" << setw(4) << "||" << setw(8) << "||" << setw(8) << "____" << setw(26) << "||" << setw(4) << "\\\\" << setw(4) << "//" << setw(4) << "||" << setw(12) << "//====\\\\" << setw(8) << "||" << setw(4) << "\\\\" << setw(4) << "||" << endl;
    cout << "||" << setw(5) << "||" << setw(13) << "//      \\\\" << setw(7) << "||" << setw(5) << "\\\\" << setw(3) << "||" << setw(8) << "||" << setw(9) << "|===||" << setw(25) << "||" << setw(7) << "\\\\//" << setw(5) << "||" << setw(13) << "//      \\\\" << setw(7) << "||" << setw(5) << "\\\\" << setw(3) << "||" << endl;
    cout << "||" << setw(5) << "||" << setw(14) << "//        \\\\" << setw(6) << "||" << setw(8) << "\\\\||" << setw(8) << "||" << "_______" << "||" << setw(25) << "||" << setw(12) << "||" << setw(14) << "//        \\\\" << setw(6) << "||" << setw(8) << "\\\\||" << endl;
    cout << setw(70) << "Project on theme WordGame";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "-------------LAZAR-------------------------------------->" << setw(3) << "1. Play" << setw(3) << "<---------------------KRISTINA-------------------------" << endl;
    cout << "-----------BOJIDAR-------------------------------------->" << setw(3) << "2. Creators" << setw(3) << "<-------------------IVAN---------------------------" << endl;
    cout << "-------------------------------------------------------->" << setw(3) << "3. Exit" << setw(3) << "<------------------------------------------------------" << endl;
    cout << "\n";
    cout << "\n";
    cout << setw(70) << "Input your choose here:";
    cin >> choose;
    switch (choose)
    {
    case 1:
        system("cls");
        cout << "Choose your word: ";
        cin >> word;
        system("cls");
        cout << "Choose your maximum mistakes: ";
        cin >> mistakes;
        guess(word, mistakes);
        break;
    case 2:
        system("cls");
        cout << setw(90) << "Here are all the creators and what have each of them done:" << endl;
        cout << "\n";
        cout << setw(100) << "Bozhidar Dukov and Lazar Apostolov invented the idea and made it real." << endl;
        cout << "\n";
        cout << setw(95) << "Kristina Zheleva created the Documentation and Presentation." << endl;
        cout << "\n";
        cout << setw(80) << "Ivan Cviatkov did all the Quality assurance." << endl;
        cout << "\n";
        break;
    case 3:
        system("cls");
        cout << "You have just exited the game. Have a nice day full of happiness";
        break;
    }
}