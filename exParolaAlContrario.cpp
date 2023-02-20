/*scrivi un programma in C++ che prenda in
input una stringa di caratteri e ne stampi
ogni carattere in ordine inverso, utilizzando
un ciclo for.*/
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

int main()
{
    string parola;
    cout << "inserisci una parola";
    cin >> parola;
    cout << "la parola " << parola << " al contrario è " << contrario(parola);
   // cout << "la parola " << parola << " al contrario è " << parola[i -1];
}