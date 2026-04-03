# 02 - OPERAZIONI

>[!Note]
>Se avete domande, volete aggiungere qualcosa, o volete collaborare, mandatemi un messaggio. Consiglio di controllare questa lezione, anche se la date per scontato, perchè potrebbe rinfrescarvi la memoria in concetti che magari avete perso.

In questo capitolo vedremo come effettuare calcoli con variabili di tipo _int_, _double_ e _float_, svolgendo semplici espressioni.

Dopo questo capitolo, dovreste possedere una conoscenza almeno base di:

- Operazioni con * , / , + e -

- Sapere cosa fa % (modulo)

- Poter svolgere espressioni matematiche basiche
---

## DEFINIZIONI

Non credo di dover spiegare come funzionano le moltiplicazioni e le divisioni, tanto meno le addizioni e le sottrazioni, dovete solo sapere quali simboli rappresentano cosa.

>[!Important]
>Per tutte le operazioni, se almeno uno degli operandi è di tipo _float_ o _double_, il risultato sarà con decimali (_type promotion_)

- '/' rappresenta la divisione tra un numero e un altro.
  - Se i due operandi sono entrambi di tipo _int_, il risultato sarà di tipo _int_
  - Se almeno uno è _float_ o _double_, il risultato diventa _double_ o _float_

- '*' rappresenta la moltiplicazione tra un numero e un altro
- come per la divisione, se uno dei fattori è di tipo _double_ o _float_, il valore del risultato sarà un _double_

L'unica novità è il modulo (%), che rappresenta il resto di una divisione tra un numero e un altro

eg.  12 % 5 = 2 (il resto della divisione 12/5 è 2)

- I numeri divisi devono essere di tipo _int_
- Il risultato di un modulo sarà **sempre** un valore di tipo _int_

Nel file _operazioni.cpp_ vedrete diverse espressioni e calcoli aritmetici con variabili.

