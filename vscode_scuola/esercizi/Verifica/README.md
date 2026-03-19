````cpp
    void aggiungiArco(int partenza, int fine){
        vettore[partenza].push_back(fine);
        vettore[fine].push_back(partenza) // metodo 
    }
````

    1) programma che data una parola sostrituisce le vocali con * e consonanti con ?
    minuscole * e ?, maiuscole x e +

    2) programmac ehd ata una stringa inverte in maniera alternata le lettere del nome, modifica solo lettere dispari
    eg. busatto --> btstatuo
    3) programma che date tutte le lettere alfabetiche toglie tutte le vocali
    4)programma che dalla stringa trasforma vocali in * e numero vocale, consonanti in ? e numero consonante (eg. c = ?3)
    5) programma che divide vocali e consonani di una parola
