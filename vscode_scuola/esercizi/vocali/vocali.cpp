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
        if(strcmp(Parola, "stop") == 0 || strcmp(Parola, "STOP") == 0){ // confronto l'input dell'utente con lo stop usando strcmp --> ritorna 0 se i due valori sono uguali
            return;
        }
        strcpy(listaParole[indice], Parola);
        indice++;
    }
}

// funzione che controlla se la lettera ricevuta è una vocale usando il codice ASCII
bool isVocale(const char& c){
    char lettera = toupper(c);
    if(lettera == 65 || lettera == 69 || lettera == 73 || lettera == 79 || lettera == 85){ // controllo se la lettera è una vocale usando il suo valore ASCII
        return true;
    }
    return false;
}

// funzione che controlla tutte le stringhe in listaParole e trova il totale delle vocali usando isVocale()
int findVocale(){
    int vocali = 0;
    for(size_t i = 0; i<10; i++){
        for(auto c: listaParole[i]){
            if(isVocale(c)){
                vocali++;
            }
        }
    }
    return vocali;
}

// funzione che stampa il totale delle vocali e le parole / frasi inserite
void printParole(){
    insertWords();
    int vocali = findVocale();
    std::cout<<"Parole/frasi inserite:\n";
    for(auto i: listaParole){
        if(strcmp(i, "") != 0){ // evito di stampare valori vuoti
            std::cout<<i<<"\n";
        }
    }
    std::cout<<"\nSono state rilevate "<<vocali<<" vocali in totale nelle tue parole.";

}

int main()
{
    printParole();
}
