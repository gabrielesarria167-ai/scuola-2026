# ESERCIZI VERIFICA DI GRIGOLINI

>[!IMPORTANT]
>Se ci sono esercizi mancanti, o qualcuno non funziona, ditemelo.


## Richieste

1)  funzione che data una parola sostituisce le vocali con * e consonanti con ?
    minuscole * e ?, maiuscole x e +

2)  funzione che data una stringa inverte in maniera alternata le lettere del nome,
    sostituendo solo lettere pari con il loro simmetrico

    eg: busatto --> btstatuo

3)  funzione che date tutte le lettere alfabetiche toglie tutte le vocali

4)  funzione che dalla stringa trasforma vocali in * e numero vocale, consonanti in ? e numero consonante 

    eg: c = ?3, A = x1

5)  funzione che divide le vocali e consonanti di una parola in due array
    eg: "gabriele" --> v1 = {a, i, e, e} v2 = {g, b, r, l}

---

## FUNZIONE 1

Questa funzione riceve una stringa input dall' utente, controlla tutti i caratteri che compongono la stringa e li sostituisce con dei valori encriptici.

Il diagramma è il seguente:

CREO funzione string riceviStringa(){

INIZIALIZZO variable Stringa
l'utente inserisce la sua parola
RICEVO quella parola e la SALVO in Stringa
RITORNO Stringa

}

CREO funzione modificaLettere( stringa ){

RICEVO stringa

CHIAMO funzione che prende ogni carattere della stringa partendo dal primo, e verifica se è VOCALE, CONSONANTE o ALTRO

CHIAMO funzione che prende ogni carattere della stringa partendo dal primo, e verifica se è MAIUSCOLO o MINUSCOLO

SE il carattere è una VOCALE {
    ALLORA vedo se è maiuscolo o minuscolo, usando il valore ASCII
    SE è maiuscolo{
        ALLORA lo rendo 'x'
    }
    SE NO{
        ALLORA lo rendo '*'
    }
}

SE NO{
    ALLORA è una consonante, vedo se è maiuscolo o minuscolo usando il valore ASCII
    SE è maiuscolo{
        ALLORA lo rendo '+'
    }
    SE NO{
        ALLORA lo rendo '?'
    }
}
CHIUDO FUNZIONE   
}

---

***SUB-PROBLEMI***

- Creare una funzione _string riceviStringa()_ che riceve un input dall'utente e lo ritorna sottoforma di string

- Creare una funzione _isVocale()_ che riceve la stringa e, per ogni carattere, ritorna TRUE se è VOCALE, false se è CONSONANTE

- Creare una funzione _isMaiuscola()_ che riceve la stringa e, per ogni carattere, ritorna TRUE se è maiuscola, false se è MINUSCOLA

- Controllo dei valori di ritorno delle funzioni _isVocale()_ e _isMaiuscola()_ con degli if():
se entrambe sono vere il carattere diventa x, se false diventa ?, se una è vera diventa o * o +

---

## FUNZIONE 2

Questa funzione riceve una stringa input dall'utente, e scambia i caratteri pari della stringa con il loro simmetrico.

Prima di tutto controlla se la stringa ha PARI caratteri o DISPARI, se sono pari dividi a meta normalmente:
se sono dispari dividi a meta per eccesso (eg. meta di 7 = 4), salvo questo valore in una variabile _middleString_.

Devi usare un ciclo for che aumenta fino ad essere uguale a _middleString_, dentro il for controlli se la posizione della lettera è pari o dispari, se è DISPARI niente se è PARI scambi (consigliato quindi di partire con i = 1)

esempio del for sarebbe
 ```cpp
 for(int i = 1; i<=middleString; i++){
    if(i%2 == 0){
        scambio valore opposto
    }
 }
```
---

Il diagramma è il seguente:

RICEVO e SALVO stringa da riceviStringa()

CREO funzione scambioParole(stringa){
    INIZIALIZZO variabile middleString = 0;
    SE la grandezza della stringa è PARI{
        ALLORA middleString equivale alla grandezza diviso 2
    }
    SE NO{
        ALLORA middleString equivale alla grandezza diviso 2, tutto +1
    }
    FINO A QUANDO (i parte da 1, i minore di middlestring, i aumenta di 1){
        SE i è PARI{
            ALLORA scambio lettera in posizione i con lettera in posizione finale - i
        }
    }
    RITORNO stringa;
}

---

## FUNZIONE 4

Questa funzione riceve una stringa input dall'utente, la salva e per ogni carattere lo rende encriptato usando la funzione _modificaIniziale()_, si salva la sua posizione nell'alfabeto (eg. a = 1, c = 3), e li stampa insieme.

---

Il diagramma concettuale è il seguente:

CREO funzione modificaFinale(stringa parola)

RICEVO e SALVO stringa parola 

INIZIALIZZO variabile parolaEncriptata

SALVO il valore di modificaIniziale(parola) in parolaEncriptata

INIZIALIZZO variabile stringa parolaFinale = ""

CREO FUNZIONE posizioneAlfabetica(carattere in parola), restituisce la posizione alfabetica sottoforma di stringa della lettera se ci appartiene, se non ci appartiene resistuisce ""

FINO A QUANDO(i parte da 0, i minore della grandezza di parola, i aumenta di 1){
    AGGIUNGO a parolaFinale il valore di _posizionelfabetica(carattere i in parola)_ usando +=
    AGGIUNGO a parolaFinale il carattere i di parolaEncriptata usando +=
}

RITORNO parolaFinale

---

***SUB-PROBLEMI***

- Creare funzione posizioneAlfabetica che riceve un carattere e ne ritorna la sua posizione alfabetica, "" se non appartiene all' alfabeto

- Ciclo for in cui aggiungo a parolaFinale la posizioneAlfabetica del singolo carattere con il carattere encriptato