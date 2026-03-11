Questo esercizio prende una stringa dall'utente usando <stringh>, partendo prima da una singola parola, per poi passare a una frase.

Per ogni stringa, verranno riconosciute:

**VOCALI**

Crea una funzione per riconoscerle, poi stampa i risultati.

La funzione dovrebbe essere circa cosi:

```cpp

char parole[30][70] // 30 parole di lunghezza 70;

// funzione che inserisce stringhe in parole --> usa strcpy(soggetto, destinazione)

bool isVocale(carattere in stringa){
    if(condizione per le vocali){
        return true;
    }
    return false;
}

void findVocale(stringa){
    int vocali // prende totale vocali nella stringa
    for(ciclo per caratteri in stringa){
        if(isVocale(stringa[i])){
            vocali++;
        }
    }
}

```

Prova anche a fare confronti con i valori ASCII, dovrebbe essere migliore