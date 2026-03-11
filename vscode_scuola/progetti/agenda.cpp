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

std::vector<Contatto> c;

// FUNZIONI OVERLOAD

std::istream &operator>>(std::istream &in, Contatto &c)
{
    std::cout << "\nInserisci il nome del contatto: ";
    std::getline(in >> std::ws, c.nome);
    std::cout << "\nInserisci il cognome del contatto: ";
    std::getline(in >> std::ws, c.cognome);
    std::cout << "\nInserisci l'età del contatto: ";
    in >> c.eta;
    std::cout << "\nInserisci il numero di telefono del contatto: ";
    std::getline(in >> std::ws, c.ntelefono);
    std::cout << "\nInserisci l'indirizzo del contatto: ";
    std::getline(in >> std::ws, c.indirizzo);
    std::cout << "\nInserisci il numero civico del contatto: ";
    in >> c.ncivico;
    return in;
}

std::ostream &operator<<(std::ostream &out, Contatto &c)
{
    out << "\n\n\n"
        << "---------- CONTATTO ---------\n\n";
    out << "NOME E COGNOME: " << c.nome << " " << c.cognome;
    out << "\nETÀ: " << c.eta;
    out << "\nNUMERO DI TELEFONO: " << c.ntelefono;
    out << "\nINDIRIZZO: " << c.indirizzo << " " << c.ncivico;
    return out;
}

void displaymenu()
{
    std::cout << "-------------------------------------\n\n";
    std::cout << "Benvenuto nella tua agenda personale!\n"
              << "\nSeleziona una opzione tra le seguenti:\n\n";
    std::cout << "1. Crea contatto" << "\n2. Modifica contatto" << "\n3. Visualizza contatti" << "\n4. Elimina contatto" << "\n5. Esci\n";
}

std::vector<Contatto> createContact()
{ // case 1
    Contatto c;
    std::vector<Contatto> agenda;
    std::cout << "\n\n----------------------\n\n";
    std::cout << "Scrivere 'fine' per terminare creazione contatti.\n";
    while (true)
    {
        std::cin >> c;
        if (c.nome == "fine" || c.cognome == "fine")
        {
            return agenda;
        }
        agenda.push_back(c);
    }
}

void modifyContact(std::vector<Contatto> &c)
{ // case 2
    std::cout << "\nCosa vuoi modificare?";
    std::cout << "\n1. Nome" << "\n2. Cognome" << "\n3. Età" << "\n4. Numero di telefono" << "\n5. Indirizzo" << "\n6. Numero civico";
}

void displayContacts(std::vector<Contatto> &c)
{ // case 3
    for (auto &i : c)
    {
        std::cout << i;
    }
}

void eliminateContact(std::vector<Contatto> &c) // case 4
{
    while (true)
    {
        std::string info;
        std::string nome;
        std::string cognome;
        bool over = false;
        std::cout << "\nInserisci il nome e il cognome del contatto che desideri eliminare.\n\n";
        for (auto &i : c)
        {
            std::cout << i.nome << " " << i.cognome << "  |  ";
        }
        std::cout << "\n";
        std::getline(std::cin >> std::ws, info);
        for (char &i : info)
        {
            if (i == ' ')
            {
                over = true;
            }
            else if (!over)
            {
                nome.push_back(i);
            }
            else
            {
                cognome.push_back(i);
            }
        }
        bool found = false;
        int index;
        for (size_t i = 0; i < c.size(); i++)
        {
            if (c[i].nome == nome && c[i].cognome == cognome)
            {
                c.erase(c.begin() + i);
                found = true;
                index = i;
            }
        }
        if (found)
        {
            if (c.size() > 0)
            {
                for (size_t i = index; i < c.size() - 1; i++)
                {
                    c[i] = c[i + 1];
                }
            }
            std::cout << "\nContatto rimosso con successo.\n";
            return;
        }
        else
        {
            std::cout << "\nErrore: contatto non esistente.\n";
        }
    }
}

void getchoice()
{
    while (true)
    {
        int n;
        std::cin >> n;
        switch (n)
        {
        case 1:
            c = createContact();
            return;
        case 2:
            modifyContact(c);
            return;
        case 3:
            displayContacts(c);
            return;
        case 4:
            eliminateContact(c);
            return;
        case 5:
            return;
        default:
            std::cout << "\nErrore: Opzione non valida.\n";
        }
    }
}

int main()
{
    while (true)
    {
        displaymenu();
        getchoice();
    }
}