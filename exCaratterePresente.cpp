/*scrivi un programma in C++ che prenda in imput
una stringa di caratteri e conti quante volte ogni
 carattere è presente all'interno della stringa.*/
#include <iostream>
#include <string>
using namespace std;

bool cercaCarattere(string parola, char car)
{
    for (int i = 0; i < parola.length(); i++)
    {
        if (parola[i] == car)
        {
            return true;
        }
    }
    return false;
}

void contaCarattere(string parola)
{
    string appo = "";
    int lettera = 1;
    for (int i = 0; i < parola.length(); i++)
    {
        if (!cercaCarattere(appo, parola[i]))
        {
            for (int y = i + 1; y < parola.length(); y++)
            {
                if (parola[i] == parola[y])
                {
                    lettera++;
                }
            }
            appo += parola[i];
            cout << parola[i] << " è contenuto " << lettera << " volte. \n";
        }
        lettera = 1;
        }
}

int main()
{
    string parola;
    cout << "inserisci una parola: ";
    cin >> parola;
    contaCarattere(parola);
}