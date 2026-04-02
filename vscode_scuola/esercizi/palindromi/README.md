# TROVARE IL NUMERO PALINDROMO

## CONSEGNA

Dato un numero input x, creare una funzione che legge questo numero e ritorna true se è palindromo, false se non lo è.

Un numero palindromo è caratterizzato dal fatto che può essere letto in uguale modo sia da sinistra che da destra.

Un numero è palindromo se:

$$
a(i) = a(k-i)
$$

Dove
 - _a_ è una cifra che compone il numero
 - _i_ è la posizione di a nel numero
 - _k_ è l'ultima cifra che compone il numero

Conoscendo questa formula, possiamo usare un ciclo for che legge la cifra i, e se è diversa dalla cifra k-i allora ritorna falso.

```cpp
for(int i = 0; i<k (posizione finale); i++){
    if(cifra[i] != cifra[k-i]){
        return false;
    }
}
return true;
```
---
## SUB-PROBLEMI

1) La prima cosa da fare è creare una funzione che legga un numero dall'utente e lo salvi.

2) Successivamente, Devo creare la funzione isPalindrome, che riceve il nostro numero dell'utente
3) Devo anche però scomporre il numero input nelle cifre che lo compongono, posso:
    - O rendere il numero una stringa usando ***to_string()***
    - O scomporre il numero nelle cifre singole e salvarle in un vettore int
  
4) Infine, devo fare un ciclo for che legge tutte le cifre che lo compongono, e confrontare la cifra i con quella k-i

---

## DIAGRAMMA MENTALE

CREO funzione isPalindrome(numero n)

RICEVO e SALVO numero n

CHIAMO funzione lunghezzaNumero(n) che mi ritorna quante cifre compongono il mio numero

INIZIALIZZO array di interi numeroScomposto[] di dimensione lunghezzaNumero(n)

CHIAMO funzione scomponiNumero(n), che mi scompone il numero nelle sue cifre

SALVO il risultato in numeroScomposto;

FINO A QUANDO (i parte da 0, i minore della lunghezza del numero, i aumenta di 1){

    SE il valore i in numeroScomposto è diverso dal valore di lunghezza del numero - i in numeroScomposto{

        RITORNO falso;
    }
}
RITORNO vero;

