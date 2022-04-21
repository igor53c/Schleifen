// Schleifen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "i: " << i << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i > 4)
            break;

        cout << "i: " << i << endl;
    }

    cout << endl;

    for (int i = 0, j = 0; i + j < 10; i--, j += 2)
    {
        if (i > 4)
            break;

        cout << "i + j: " << i + j << endl;
    }

    cout << endl;

    int a = 1;

    for (; a <= 10; a++)
    {
        cout << "a: " << a << endl;
    }

    cout << "a: " << a << endl << endl;

    for (int i = 1;; i++)
    {
        if (i > 10)
            break;

        cout << "i: " << i << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10;)
    {
        /*cout << "i: " << i << endl;
        i++;*/

        // oder
        cout << "i: " << i++ << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; cout << "i: " << i++ << endl);

    cout << endl;

    /*for (;;)
        cout << "Immer wieder und wieder..." << endl;*/

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
            continue;

        cout << "i: " << i << endl;
    }

    cout << endl;

    for (int zeile = 1; zeile <= 10; zeile++)
    {
        for (int spalte = 1; spalte <= 10; spalte++)
        {
            printf("%4d", zeile * spalte);
        }

        cout << endl;
    }

    cout << endl;

    int i = 1;
    int zahl = 10;

    while (i <= zahl)
    {
        /*cout << "Schleifendurchlauf: " << i << endl;
        i++;*/

        // oder
        cout << "Schleifendurchlauf: " << i++ << endl;
    }

    cout << endl;

    cout << "Nach der while-Schleife: " << i << endl;

    cout << endl;

   /* while (true) 
    {
        cout << "Immer wieder und wieder..." << endl;
    }*/

    i = 1;

    do
    {
        cout << "Schleifendurchlauf: " << i++ << endl;
    } while (i <= 10);

    cout << endl;

    cout << "Nach der while-Schleife: " << i << endl << endl;

    setlocale(LC_ALL, "German");

    cin.imbue(locale("german"));

    double d, wert;

    cout << "Bitte einen Wert eingeben: " << endl;

    cin >> wert;

    cout << endl;

    d = wert;

    do
    {
        printf("%1.3f\n", d);

        // d = d / 2;

        // oder

        d /= 2;

    } while (d >= 11);

    cout << endl;

    // oder

    d = wert;

    do
    {
        printf("%1.3f\n", d);
    } while ((d /= 2) >= 11);

    cout << endl;

    /*for (int x = 1; x != 11; x++)
    {
        cout << "x: " << x << endl;
    }*/

    /*int x = 12;

    for (; x != 11; x++)
    {
        cout << "x: " << x << endl;
    }*/

    char c = 12;

    for (; c != 11; c++)
    {
        cout << "c: " << static_cast<int>(c) << endl;
    }

    cout << endl;

    d = 0;

    /*while (d != 1.0)
    {
        d += 0.1;
        printf("%1.3f\n", d);
    }*/
  
    while (d <= 1.0)
    {
        d += 0.1;
        printf("%1.3f\n", d);
    }

    cout << endl;

    int n, summe;

    n = 1, summe = 0;

    while (n <= 100)
    {
        ++n;  // falsch
        summe += n;
    }

    cout << "(a) Summe: " << summe << endl;

    n = 1;

    while (n < 100)
    {
        summe = 0; // falsch
        n = n + 1; 
        summe = summe + n;
    }

    cout << "(b) Summe: " << summe << endl;

    n = 1, summe = 1;

    while (n < 100)
        n += 1; //falsch
    summe += n;
   

    cout << "(c) Summe: " << summe << endl;

    n = 1, summe = 0;

    while (n <= 0100) // falsch
    {
        summe += n;
        ++n;
    }
    
    cout << "(d) Summe: " << summe << endl;

    n = 100;

    summe = (n + 1) * n / 2;  // richtig

    cout << "(e) Summe: " << summe << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
