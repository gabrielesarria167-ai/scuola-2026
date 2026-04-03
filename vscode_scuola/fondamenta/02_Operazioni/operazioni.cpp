#include <iostream>
using namespace std;
int main()
{
    cout << 1 + 2; // cout<< è un operatore output, che stampa gli argomenti dopo le << nel terminale, in questo caso stamperà 3

    // SOMME E DIFFERENZE

    int num1 = 12;
    int num2 = 14;
    int sum = num1 + num2;
    cout << "\n"<< sum;
    int differenza = num1 - num2;
    cout << "\n"<< differenza;

    // DIVISIONI E MOLTIPLICAZIONI CON INT

    int numero1 = 12;
    int numero2 = 3;
    int divisione = numero1 / numero2;
    cout << "\n"<< divisione; // stampa la divisione tra num1 e num2 (4), il testo "\n" essenzialmente va a capo (stampo quindi la divisione nella riga sotto)
    int moltiplicazione = numero1 * numero2;
    cout << "\n"<< moltiplicazione;

    numero1 = 10;
    numero2 = 4;
    divisione = numero1 / numero2;
    cout << "\n"<< divisione; // sia la variabile divisione che i due numeri divisi sono int, il risultato diventa int

    // DIVISIONI E MOLTIPLICAZIONI CON DOUBLE

    double numero3 = 10;
    double numero4 = 4;
    double divisionePrecisa = numero3 / numero4;
    cout << "\n"<< divisionePrecisa; // tutti i valori sono double (o float), il risultato uscirà con la virgola

    numero3 = 12.3;
    numero4 = 3.12;
    divisionePrecisa = numero3 / numero4;
    cout << "\n"<< divisionePrecisa;
    double moltiplicazionePrecisa = numero3 * numero4;
    cout << "\n"<< moltiplicazionePrecisa;

    // ESEMPI CON MODULO

    int numeroMoltoGrande = 123456;
    int numeroMoltoPiccolo = 7;
    int resto = numeroMoltoGrande % numeroMoltoPiccolo;
    cout << "\n"<< resto;

    numeroMoltoGrande = -7;
    numeroMoltoPiccolo = 5;
    resto = numeroMoltoGrande % numeroMoltoPiccolo; // Qua il resto sarà -2, il risultato del modulo dipende dal segno del dividendo (il primo numero)
    cout << "\n"<< resto;

    numeroMoltoGrande = 24;
    numeroMoltoPiccolo = -5;
    resto = numeroMoltoGrande % numeroMoltoPiccolo; // Qua il dividendo è positivo, quindi il resto sarà positivo indipendentemente dal divisore
    cout<<"\n"<<resto;
}