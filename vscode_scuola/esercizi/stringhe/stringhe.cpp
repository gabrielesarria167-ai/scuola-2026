#include <iostream>
#include <string>

// impara <stringh>  --> strcpy(sorgente, destinazione) eg. (strcpy(parola, vettore di parole))

std::string frase;
int maiuscole = 0;
int minuscole = 0;
int numeri = 0;
int caratteriSpeciali = 0;

// funzione che riceve input di utente e lo inserisce in frase
void creaFrase()
{
    std::cout << "Inserisci la tua parola: ";
    std::getline(std::cin >> std::ws, frase);
}

// funzione che riceve frase e trova maiuscole
void findMaiuscole(const std::string &frase)
{
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] >= 'A' && frase[i] <= 'Z')
        {
            maiuscole++;
        }
    }
}

// funzione che riceve frase e trova minuscole
void findMinuscole(const std::string &frase)
{
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z')
        {
            minuscole++;
        }
    }
}

// funzione che riceve frase e trova numeri
void findNumeri(const std::string &frase)
{
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] >= '0' && frase[i] <= '9')
        {
            numeri++;
        }
    }
}

// funzione che riceve frase e trova caratteri speciali usando i valori ASCII, non funziona per caratteri con ASCII > 127
void findSpeciali(std::string frase)
{
    for (int i = 0; i < frase.size(); i++)
    {   // controlla tutti i caratteri di frase
        if ((frase[i] >= 0 && frase[i] <= 47) || // controllo con valori ASCII dei caratteri speciali
            (frase[i] >= 58 && frase[i] <= 64) ||
            (frase[i] >= 91 && frase[i] <= 96) ||
            (frase[i] >= 123))
        {
            caratteriSpeciali++;
        }
    }
}

// funzione che stampa i valori ottenuti dalle altre funzioni
void printValori(const std::string &frase)
{
    findMaiuscole(frase);
    findMinuscole(frase);
    findNumeri(frase);
    findSpeciali(frase);
    std::cout << "\nMaiuscole: " << maiuscole;
    std::cout << "\nMinuscole: " << minuscole;
    std::cout << "\nNumeri: " << numeri;
    std::cout << "\nCaratteri speciali: " << caratteriSpeciali;
}

int main()
{
    creaFrase();
    printValori(frase);
}