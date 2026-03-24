#include <iostream>

// ---- VERSIONE 1 ----

    // COMPLESSITA TEMPO: O(n^2), in cui n è la lunghezza della sequenza da 1 a N (insieme dei numeri naturali)

    // COMPLESSITA SPAZIO: O(1), la memoria rimane costante nonostante la grandezza dell'input

int riceviNumero(){ // funzione che riceve un numero input e lo ritorna
    int n;
    std::cout<<"Inserisci un numero: ";
    std::cin>>n;
    return n;
}

int pivotInteger(int n){ // funzione che trova l'intero pivot di un numero (vedi README.md per definizione completa)
    int pivot = 0; // creo 3 variabili: pivot (che sarà il risultato finale), sommaInizio, che mi sommerà i valori da sx verso dx, e sommaFine, somma da dx verso sx
    int sommaInizio = 0;
    int sommaFine = 0;

    for(int i = 1; i <= n; i++){ // ciclo for con cui scorro attraverso tutti i numeri e li sommo a sommaInizio
        sommaInizio += i; // aggiungo il valore i a sommaInizio
        sommaFine = 0; // resetto sommaFine prima di ogni suo ciclo per evitare somme involute
        for(int j = n; j >= 1; j--){ // secondo ciclo for che scorre da dx verso sx
            sommaFine += j; // aggiungo il valore di j a sommaFine
            if(sommaInizio == sommaFine && i == j){ // PUNTO CHIAVE: controllo se le somme sono uguali, se lo sono però anche i e j devono coincidere, dato che il numero pivot è un numero condiviso da entrambe le somme
                pivot = i; // salvo il valore di i in pivot, potevo anche ritornare i ma pivot è piu chiaro
                return pivot;
            }
        }
    }
    return -1; // se non esiste il numero pivot, ritorno -1
}

void printPivot(){ // funzione che stampa il risultato
    int n = pivotInteger(riceviNumero());
    std::cout<<"L'intero pivot del numero è "<<((n == -1) ? "inesistente": std::to_string(n)); // !! condizione ternaria, sintassi è CONDIZIONE ? (RISULTATO CONDIZIONE VERA) : (RISULTATO CONDIZIONE FALSA), entrambi i risultati devono essere dello stesso tipo, per quello il to_string
}

int main(){
}