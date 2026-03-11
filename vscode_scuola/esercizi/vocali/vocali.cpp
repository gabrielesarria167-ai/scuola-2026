#include <iostream>
#include <string.h>

char listaParole[10][30]; // creo matrice globale che puo contenere 5 parole di lunghezza 30

// funzione che inserisce input utente in un array di parole (Parola), e lo copia in listaParole
void insertWords()
{
    char Parola[30];
    int indice = 0;
    while (true)
    {
        std::cout << "Inserisci le tue parole/frasi di massimo 30 caratteri (digitare 'stop' per finire): ";
        std::cin.getline(Parola, 30); // legge intero input con spazi inclusi. sintassi è: std::cin.getline(destinazione, n max di caratteri accettabili)
        if(strcmp(Parola, "stop") == 0 || strcmp(Parola, "STOP")){ // confronto l'input dell'utente con lo stop usando strcmp --> ritorna 0 se i due valori sono uguali
            return;
        }
        strcpy(listaParole[indice], Parola);
        indice++;
    }
}

int main()
{
    insertWords(); // questo andrebbe in una funzione a parte che stampa tutto
    for(auto i: listaParole){
        if(strcmp(i, "") != 0){
        std::cout<<"\nParola: "<<i;
        }
    }
}