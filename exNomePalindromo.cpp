/*scrivi un programma in C++ che prenda
in imput una stringa di caratteri e 
verifichi se questa è un palindromo.*/
#include <iostream>
#include <string>
using namespace std;

string contrario(string parola)
{
    string inverso = ""; //stringa vuota per partire da 0.
    for (int i = parola.length() -1; i >= 0; i--)
    {
        inverso += parola[i];
    }
    return inverso;
}

bool palindromo(string parola)
{
    if (parola == contrario(parola))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string parola;
    cout << "inserisci una parola: ";
    cin >> parola;
    if(palindromo(parola) == true)
    {
        cout << "la parola è palindroma.";
    }
    else
    {
        cout << "la parola non è palindroma.";
    }
    return 0;

}