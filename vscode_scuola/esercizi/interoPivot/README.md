# TROVA L'INTERO PIVOT

>[!NOTE]
>Questo esercizio è stato **completato**, ma inserirò diverse alternative del codice che variano per efficienza e/o memoria


## CONSEGNA

Dato un numero di valore input n, il programma troverà un suo **numero x "pivot"**, cioè un numero in cui la somma tra tutti i numeri compresi tra 1 e x è uguale alla somma tra tutti i numeri compresi tra x e n.

$$
n (input) = 8
$$
allora
$$
x(pivot) = 6
$$
$$
1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8
$$

- Se il numero esiste, allora ritorni il numero

- Se non esiste, allora ritorni -1

E' garantito che per ogni numero ci sia al massimo 1 numero pivot.

---

## DIAGRAMMA DI ESECUZIONE

CREO una funzione di nome pivotInteger(numero n)

RICEVO e SALVO il numero n

INIZIALIZZO variabile pivot, IMPOSTO valore iniziale a 0

INIZIALIZZO variabile sommaInizio, IMPOSTO valore iniziale a 0

INIZIALIZZO variabile sommaFine, IMPOSTO valore iniziale a 0

FINO A QUANDO(i parte da 1, i minore o uguale di n, i aumenta di 1){

    IMPOSTO il valore di sommaInizio a sommaInizio + i sommaInizio = 1 + 2 + 3 + 4 + 5

    IMPOSTO il valore di sommaFine a 0;

    FINO A QUANDO(j parte da n, j maggiore o uguale di 1, j diminuisce di 1){ 
        IMPOSTO il valore di sommaFine a sommaFine + j
        SE il valore di sommaFine e il valore di sommaInizio sono uguali E i è uguale a j{
            ALLORA i (o j) è il numero pivot, IMPOSTO pivot a i
            RITORNO pivot
        }
    }
    RITORNO -1

}





