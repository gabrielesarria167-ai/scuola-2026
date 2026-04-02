#include <iostream>
#include <string> // questa è una libreria, ci permette di usare il tipo di variabile stringa
using namespace std;

// la struttura per dichiarare una variabile è
// tipoVariabile NomeVariabile = valore che contiene (facoltativo)

int main(){ // nel main() viene eseguito il codice

    // DICHIARARE UNA VARIABILE
    // Quando dichiaro una variabile, essa non contiene un valore definito!

    int numero; // dichiaro una variabile di nome "numero", di tipo int 
    string parola;
    char lettera;
    bool maggiorenne;
    double numeroConTantiDecimali;
    float numeroConDecimali;

    // ASSEGNARE VALORI AD UNA VARIABILE

    numero = 12; // inserisco il valore 12 nella variabile numero, ora quella variabile contiene quel valore
    parola = "casa";
    lettera = 'A'; // ! per le stringhe, i valori inseriti vengono segnati con "", mentre per i caratteri vengono segnati con ''
    maggiorenne = false; // non sono maggiorenne, se lo fossi metterei maggiorenne = true;
    numeroConTantiDecimali = 1.2112323231; // tanti decimali
    numeroConDecimali = 1.323121; // tanti decimali

    // PROPRIETA' DEI TIPI DI VARIABILE

    numero = (numero + 12) / 3; // La proprieta essenziale degli int, dei float e dei double è la possibilità di effettuare calcoli matematici con essi
    parola[0] = 'Q'; // La proprietà essenziale delle stringhe è la possibilità di modificare i singoli caratteri di essi
    lettera = 66; // La proprietà essenziale dei caratteri è la possibilità di poter assegnargli il carattere usando il suo valore ASCII (66 è il codice ASCII di 'B')
    maggiorenne = true; // La proprietà essenziale dei booleani è la possibilità di poter cambiare il loro stato, da true a false o viceversa
    cout<<boolalpha <<maggiorenne;
}