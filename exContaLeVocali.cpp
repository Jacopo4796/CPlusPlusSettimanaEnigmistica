/*scrivi un programma in C++ che prenda in
input una stringa di caratteri e ne conti il
numero di vocali.*/
#include <iostream>
#include <string>
using namespace std;

int ciSonoVocali(string parola)
{
    int vocali = 0;
    for (int i = 0; i < parola.length(); i++)
    {
        if ((parola[i] == 'a') || (parola[i] == 'e') || (parola[i] == 'i') || (parola[i] == 'o') || (parola[i] == 'u') ||
            (parola[i] == 'A') || (parola[i] == 'E') || (parola[i] == 'I') || (parola[i] == 'O') || (parola[i] == 'U'))
        {
            vocali++;
        }
    }
    return vocali;
}
int main()
{
    string parola;
    cout << "inserisci una parola";
    cin >> parola;
    cout << "nella parola inserita ci sono " << ciSonoVocali(parola) << " vocali.";
}