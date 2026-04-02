# 01 - VARIABILI

>[!Note]
>Se avete domande, volete aggiungere qualcosa, o volete collaborare, mandatemi un messaggio. Consiglio di controllare questa lezione, anche se la date per scontato, perchè potrebbe rinfrrescarvi la memoria in concetti che magari avete perso

In questa prima lezione, andremo sopra uno dei pilastri della programmazione, che ci permette di svolgere tutto: le ***variabili***.

---

## DEFINIZIONI

Una variabile, concettualmente, è un '_contenitore_' di memoria nel tuo computer che può assumere diversi valori.

Per renderlo semplice, è come una scatola vuota con un nome e che ha come scopo quello di contenere un valore.

E' intuibile quindi che prima di assegnare dei valori a caso, si devono creare (o _dichiarare_, per usare termini più tecnici), delle variabili, che preparano questi spazi di memoria.

In _C++_, a differenza di linguaggi come _Python_ e _JavaScript_,  per dichiarare una variabile, si deve anche specificare che tipo di informazione (_data type_) conterrà.

Questo aiuta al compilatore (che è il software che trasforma il codice dal linguaggio che scriviamo noi a linguaggio macchina o direttamente binario) a capire la dimensione del contenitore.

Ad esempio, se ho una variabile _int_ (intero o integer), il compilatore saprà gia che dovrà salvare 4 byte. 

---

## TIPI DI VARIABILI (DATA TYPES)

Abbiamo capito quindi che le variabili, quando vengono dichiarate, necessitano di conoscere la propria tipologia.

Ce ne sono tanti di tipo di variabili, però per adesso, questi bastano e avanzano:

- ***int*** , integer, rappresenta un numero intero (eg. 1, 4, 12, -3)

- ***string*** , stringa, rappresenta una sequenza di caratteri, che possono essere lettere e/o numeri (eg. "ciao", "g4br13l3", "1234")

- ***char*** , carattere, rappresenta un carattere singolo che può essere una lettera e/o un numero (eg. 'a', '@', '1')

- ***bool*** , booleano, può essere vero o falso (true, false)

- ***double*** , doppio, rappresenta un numero con svariate cifre decimali, circa 15

- ***float*** , simile a double, ma contiene di solito 7 cifre decimali

Nel file _variabili.cpp_, troverete diverse dimostrazioni e proprietà per ogni tipo di variabile.







