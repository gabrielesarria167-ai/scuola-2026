Questo esercizio prende una stringa dall'utente, partendo prima da una singola parola, per poi passare a una frase.

Per ogni stringa, verranno riconosciute:

**lettere MAIUSCOLE**

**lettere MINUSCOLE**

**NUMERI**

**caratteri SPECIALI**

Crea una funzione per ogni compito, poi stampa i risultati.

Le funzioni dovrebbero essere circa cosi:

```cpp

int findMaiuscola(stringa){
    // ciclo for che controlla ogni carattere
        if(stringa[i] > 'A' && stringa[i] < 'Z'){
            count++;
        }
    return count; // uso count per tenere conto del totale 
}
```

Prova anche a fare confronti con i valori ASCII, dovrebbe essere migliore
