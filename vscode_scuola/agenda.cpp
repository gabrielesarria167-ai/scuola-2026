#include <iostream>
#include <string>
#include <vector>

struct Contatto
{
    std::string nome;
    std::string cognome;
    int eta;
    std::string ntelefono;
    std::string indirizzo;
    int ncivico;
};

// FUNZIONI INTERNE A FUNZIONE OVERLOAD

// FUNIONI NOME / COGNOME

bool controlloNome(std::string &stringa)
{
    for (auto &c : stringa)
    {
        if (c > '0' && c < '9')
        {
            return false;
        }
    }
    return true;
}

bool cfinaleNome(std::string &stringa)
{
    char scelta;
    for (auto &c : stringa)
    {
        c = tolower(c);
    }
    stringa[0] = toupper(stringa[0]);
    while (true)
    {
        std::cout << "Sei sicuro di questa scelta: " << stringa << " (y/n)? ";
        std::cin >> std::ws >> scelta;
        scelta = tolower(scelta);
        switch (scelta)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout << "\nErrore: Scelta Non Valida.\n";
        }
    }
}

// FUNZIONI ETA

bool controlloEta(int &eta)
{
    if (eta < 0 || eta > 150)
    {
        std::cout << "\nErrore: Età non valida.\n";
        return false;
    }
    return true;
}

// FUNZIONE OVERLOAD

std::istream &operator>>(std::istream &in, Contatto &c)
{
    bool cnomi = false;
    bool cnomif = false;
    bool ceta = false;
    while (!cnomi || !cnomif)
    {
        std::cout << "\nInserisci il nome del contatto: ";
        std::getline(in >> std::ws, c.nome);
        cnomi = controlloNome(c.nome);
        if (!cnomi)
        {
            std::cout << "\nErrore: Nome Invalido.\n";
        }
        else
        {
            cnomif = cfinaleNome(c.nome);
        }
    }
    cnomi = false;
    cnomif = false;
    while (!cnomi || !cnomif)
    {
        std::cout << "\nInserisci il cognome del contatto: ";
        std::getline(in >> std::ws, c.cognome);
        cnomi = controlloNome(c.cognome);
        if (!cnomi)
        {
            std::cout << "\nErrore: Cognome Invalido.\n";
        }
        else
        {
            cnomif = cfinaleNome(c.cognome);
        }
    }
    while (!ceta)
    {
        std::cout << "\nInserisci l'età del contatto: ";
        in >> c.eta;
        if (!(in >> c.eta))
        {
            ceta = false;
            std::cout << "\nUn numero non lettere\n";
            in.clear();
            break;
        }
        else{
            ceta = controlloEta(c.eta);
        } 
    }
    std::cout << "\nInserisci il numero di telefono del contatto: ";
    std::getline(in >> std::ws, c.ntelefono);
    std::cout << "\nInserisci l'indirizzo del contatto: ";
    std::getline(in >> std::ws, c.indirizzo);
    std::cout << "\nInserisci il numero civico del contatto: ";
    in >> c.ncivico;
    return in;
}

int main()
{
    std::vector<Contatto> agenda;
    Contatto c;
    int i = 0;
    while (true)
    {
        std::cin >> c;
        agenda.push_back(c);
        char scelta;
        std::cout << "wanna break from the ads? (y/n): ";
        std::cin >> scelta;
        if (scelta == 'y')
        {
            break;
        }
    }
}