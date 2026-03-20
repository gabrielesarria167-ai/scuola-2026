#ESERCIZI VERIFICA DI GRIGOLINI

***Richieste***

1)  funzione che data una parola sostituisce le vocali con * e consonanti con ?
    minuscole * e ?, maiuscole x e +

2)  funzione che data una stringa inverte in maniera alternata le lettere del nome,
    sostituendo solo lettere dispari con il loro simmetrico

    eg: busatto --> btstatuo

3)  funzione che date tutte le lettere alfabetiche toglie tutte le vocali

4)  funzione che dalla stringa trasforma vocali in * e numero vocale, consonanti in ? e numero consonante 

    eg: c = ?3, A = x1

5)  funzione che divide le vocali e consonanti di una parola in due array
    eg: "gabriele" --> v1 = {a, i, e, e} v2 = {g, b, r, l}

---

**FUNZIONE 1**

Questa funzione riceve una stringa input dall' utente, controlla tutti i caratteri che compongono la stringa e li sostituisce con dei valori encriptici.

Il diagramma è il seguente:

CREO funzione string riceviStringa(){

INIZIALIZZO variable Stringa
l'utente inserisce la sua parola
RICEVO quella parola e la SALVO in Stringa
RITORNO Stringa

}

CREO funzione modificaLettere( riceviStringa() ){

RICEVO stringa

CHIAMO funzione che prende ogni carattere della stringa partendo dal primo, e verifica se è VOCALE o CONSONANTE

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

I sub-problemi sono:

- Creare una funzione _string riceviStringa()_ che riceve un input dall'utente e lo ritorna sottoforma di string

- Creare una funzione _isVocale()_ che riceve la stringa e, per ogni carattere, ritorna TRUE se è VOCALE, false se è CONSONANTE

- Creare una funzione _isMaiuscola()_ che riceve la stringa e, per ogni carattere, ritorna TRUE se è maiuscola, false se è MINUSCOLA

- Controllo dei valori di ritorno delle funzioni _isVocale()_ e _isMaiuscola()_ con degli if():
se entrambe sono vere il carattere diventa x, se false diventa ?, se una è vera diventa o * o +