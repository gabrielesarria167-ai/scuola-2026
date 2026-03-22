#include <iostream>
#include <string> // funzioni utili: to_string(variabile che NON è string), per dichiarare è std::string nomeVariabile
#include <vector> // funzioni utili: push_back(elemento), per dichiarare è std::vector<tipo delle variabili che contiene> nomeVettore

// se ci sono esercizi che mancano, scrivetemi
// !! TUTTE QUESTE FUNZIONI NON SONO NECESSARIE, SEMPLICEMENTE RENDONO PIU FACILE DA CAPIRE I PROBLEMI


// ---- ESERCIZIO 1 ----


std::string riceviStringa() // funzione che riceve stringa input dall'utente
{
    std::string Stringa;
    std::cout << "Inserire parola: ";
    getline(std::cin >> std::ws, Stringa);
    return Stringa;
}

std::string isVocale(const char c) // funzione che controlla se un carattere è una vocale, consonante o altro
{
    char vocali[] = {'a', 'e', 'i', 'o', 'u'}; // dichiaro tutte le vocali in un array
    for (auto i : vocali) // uguale al ciclo for normale, solo piu veloce in casi come questi, usate ciclo for normale per sicurezzza
    {
        if (c == i || c == toupper(i)) // controllo se appartiene a un elemento dell'array vocali, o alla sua maiuscola (toupper)
        {
            return "vocale";
        }
        else if (c < 65 || c > 122 || (c > 90 && c < 97)) // confronto con caratteri ascii, non necessario ma io mi trovo meglio cosi
        {
            return "altro";
        }
    }
    return "consonante"; // se non è ne una vocale ne un carattere speciale, è una consonante
}

bool isUpper(const char c) // funzione che controlla se un carattere è una maiuscola o minuscola
{
    if (c == toupper(c)) // controllo se il carattere è uguale alla sua versione maiuscola, se lo è allora il carattere è una maiuscola
    {
        return true;
    }
    return false;
}

std::string modificaIniziale(std::string s) // funzione che rende encripta la parola iniziale, ma senza i numeri dell'alfabeto (è l'es 1, vedi README)
{
    std::vector<std::string> lettera; // dichiaro un vettore lettera, verifico il tipo di ogni lettera di s (la stringa parametro), e salvo i risultati in lettera usando push_back
    for (auto c : s) // sempre il ciclo for veloce, semplicemente prende ogni elemento di s (in questo caso gli elementi sono caratteri)
    {
        lettera.push_back(isVocale(c)); // invio il risultato della funzione isVocale e lo salvo in lettera
    }
    for (int i = 0; i < s.size(); i++) // per ogni lettera di s, controllo i diversi casi
    {
        if (lettera[i] == "vocale") // se è vocale, controllo se è maiuscolo o minuscolo con isUpper
        {
            if (isUpper(s[i]))
            {
                s[i] = 'x'; // modifico la lettera con il suo valore encriptato
            }
            else
            {
                s[i] = '*'; // modifico la lettera con il suo valore encriptato
            }
            continue; // in teoria anche break qua va bene, onesto mi son dimenticato perche ho messo continue
        }
        else if (lettera[i] == "consonante")
        {
            if (isUpper(s[i]))
            {
                s[i] = '+'; // modifico la lettera con il suo valore encriptato
            }
            else
            {
                s[i] = '?'; // modifico la lettera con il suo valore encriptato
            }
            continue; // in teoria anche break qua va bene, onesto mi son dimenticato perche ho messo continue
        }
    }
    return s; // questa è la stringa s modificata dopo il for
}

void stampaEncriptatoIniziale() // IGNORABILE, semplicemente stampa la versione encriptata iniziale della parola
{
    std::cout << modificaIniziale(riceviStringa());
}

// ---- ESERCIZIO 2 ----


std::string scambioParole(std::string s) // funzione che scambia le lettere pari (es 2 di README)
{
    int middleString = 0; // dichiaro la meta della stringa, controllo se è pari o dispari, se è pari la divisione esce normale, se è dispari devi arrotondare per eccesso
    if (s.size() % 2 == 0) // semplice if che controlla se la grandezza della stringa è pari o dispari, % si chiama modulo e resistuisce il resto di una divisione
    {
        middleString = s.size() / 2;
    }
    else
    {
        middleString = (s.size() / 2) + 1; // divisione per eccesso
    }
    for (int i = 1; i <= middleString; i++) // ciclo for che scambia i caratteri pari fino a meta stringa con quelli dell'altra meta, se avessi fatto la stringa intera e non meta non sarebbe cambiato niente
    {
        if (i % 2 == 0) // se il carattere è pari, scambio col suo opposto
        {
            std::swap(s[i - 1], s[s.size() - i]); // lo swap prende come parametri i due caratteri che verranno scambiati
        }
    }
    return s; // s è la stringa modificata
}

void stampaScambio() // IGNORABILE, semplicemente stampa lo scambio delle lettere della parola
{
    std::cout << scambioParole(riceviStringa());
}


// ---- ESERCIZIO 3 ----

void riduciAlfabeto()
{
    std::vector<char> alfabeto; // inserisco tutti i caratteri, usando il valore ascii, in alfabeto, tranne le vocali
    for (char i = 65; i <= 90; i++)
    {

        if (!(i == 65 || i == 69 || i == 73 || i == 79 || i == 85))
        {
            alfabeto.push_back(i);
        }
    }
    std::cout << "Alfabeto senza vocali: \n";
    std::cout << "\nAlfabeto MAIUSCOLO: \n";
    for (auto c : alfabeto)
    {
        std::cout << c << " ";
    }
    std::cout << "\nAlfabeto minuscolo: \n";
    for (auto c : alfabeto)
    {
        std::cout << char(c + 32) << " "; // char() semplicemente rende il risultato un carattere
    }
}


// ---- ESERCIZIO 4 ----

std::vector<char> creaAlfabeto() // IGNORABILE, semplicemente creo l'alfabeto perche mi sporca le altre funzioni sennò
{
    std::vector<char> alfabeto;
    for (int i = 65; i <= 90; i++) // con valore ascii dei caratteri li inserisco nell'alfabeto, IMPORTANTE, questo contiene solo le maiuscole
    {
        alfabeto.push_back(i);
    }
    return alfabeto;
}

std::string posizioneAlfabetica(char c)  // funzione che dato l'alfabeto trova la posizione dell'alfabeto di un carattere (eg. c ha posizione 3)
{
    std::vector<char> alfabeto = creaAlfabeto(); // creo vettore con l'alfabeto
    std::string indice = ""; // creo l'indice, gli do valore iniziale "" per evitare inconvenienti
    for (int i = 0; i < alfabeto.size(); i++) // confronto il carattere con tutto l'alfabeto per trovarne la posizione
    {
        if (c == alfabeto[i] || c == char(alfabeto[i] + 32)) // controllo se il carattere appartiene all'alfabeto, sommo 32 per verificare se appartiene alle lettere minuscole
        {
            indice = std::to_string(i + 1); // imposto l'indice alla posizione del carattere, IMPORTANTE, dato che i parte da 0 gli aggiungo 1 perche l'alfabeto parte da 1 e non da 0
            return indice; // ritorno il mio indice modificato
        }
    }
    return ""; // se il carattere NON appartiene all'alfabeto non aggiunge niente
}

std::string modificaFinale(std::string parola) // funzione che modifica totalmente una parola (es 4)
{
    std::string parolaEncriptata = modificaIniziale(parola); // modifico i caratteri della parola con  * + ? e x
    std::string parolaFinale = ""; // creo una variabile che conterra la 'somma' tra la parolaEncriptata e la posizione di ogni lettera
    for (int i = 0; i < parola.size(); i++) // per ogni carattere, aggiungo la versione encriptica e la sua posizione nell'alfabeto
    {
        parolaFinale += posizioneAlfabetica(parola[i]); // aggiungo alla fine di parolaFinale la posizione alfabetica del carattere
        parolaFinale += parolaEncriptata[i]; // aggiungo alla fine della parolaFinale la versione encriptata del carattere
    }
    return parolaFinale; // ritorno la parola completamente encriptata
}

void stampaEncriptatoFinale() // IGNORABILE, semplicemente stampa la versione encriptata finale della parola
{
    std::cout << modificaFinale(riceviStringa());
}


// ---- ESERCIZIO 5 ----


void divisioneLettere(std::string s) // funzione che riceve una stringa e divide le sue vocali dalle sue consonanti
{
    char vocali[100]; // creo array che contiene vocali e array che contiene consonanti
    char consonanti[100];
    int indiceVocali = 0; // mi creo un indice per le vocali e uno per le consonanti, gli imposto entrambi a 0
    int indiceConsonanti = 0;
    for (auto c : s) // per ogni carattere appartenente a s, controllo se è una vocale con la funzione isVocale, vedi es 1
    {
        if (isVocale(c) == "vocale") 
        {
            vocali[indiceVocali] = c; // salvo il carattere nell'array di vocali, aumento l'indice delle vocali
            indiceVocali++;
        }
        else if (isVocale(c) == "consonante")
        {
            consonanti[indiceConsonanti] = c; // salvo il carattere nell'array di consonanti, aumento l'indice delle consonanti
            indiceConsonanti++;
        }
    }
    std::cout << "Vocali:\n";
    for (int i = 0; i < indiceVocali; i++) // IGNORABILE, stampo i risultati
    {
        if (i == indiceVocali - 1)
        {
            std::cout << vocali[i];
        }

        else
        {
            std::cout << vocali[i] << ", ";
        }
    }
    std::cout << "\nConsonanti:\n";
    for (int i = 0; i < indiceConsonanti; i++)
    {
        if (i == indiceConsonanti - 1)
        {
            std::cout << consonanti[i];
        }

        else
        {
            std::cout << consonanti[i] << ", ";
        }
    }
}

void stampaDivisioneLettere(){
    divisioneLettere(riceviStringa());
}


// ---- MAIN ----

int main()
{
    // qua provate le funzioni
}