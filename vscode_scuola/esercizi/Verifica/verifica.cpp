#include <iostream>
#include <string>
#include <vector>

std::string riceviStringa()
{
    std::string Stringa;
    std::cout << "Inserire parola: ";
    getline(std::cin >> std::ws, Stringa);
    return Stringa;
}

std::string isVocale(const char c)
{
    char vocali[] = {'a', 'e', 'i', 'o', 'u'};
    for (auto i : vocali)
    {
        if (c == i || c == toupper(i))
        {
            return "vocale";
        }
        else if (c < 65 || c > 122 || (c > 90 && c < 97))
        {
            return "altro";
        }
    }
    return "consonante";
}

bool isUpper(const char c)
{
    if (c == toupper(c))
    {
        return true;
    }
    return false;
}

std::string modificaLettere(std::string s)
{
    std::vector<std::string> lettera;
    for (auto c : s)
    {
        lettera.push_back(isVocale(c));
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (lettera[i] == "vocale")
        {
            if (isUpper(s[i]))
            {
                s[i] = 'x';
            }
            else
            {
                s[i] = '*';
            }
            continue;
        }
        else if (lettera[i] == "consonante")
        {
            if (isUpper(s[i]))
            {
                s[i] = '+';
            }
            else
            {
                s[i] = '?';
            }
            continue;
        }
    }
    return s;
}

std::string scambioParole(std::string s)
{
    int middleString = 0;
    if (s.size() % 2 == 0)
    {
        middleString = s.size() / 2;
    }
    else
    {
        middleString = (s.size() / 2) + 1;
    }
    for (int i = 1; i <= middleString; i++)
    {
        if (i % 2 == 0)
        {
            std::swap(s[i - 1], s[s.size() - i]);
        }
    }
    return s;
}

void stampaEncriptato()
{
    std::cout << modificaLettere(riceviStringa());
}

void stampaScambio()
{
    std::cout << scambioParole(riceviStringa());
}

void riduciAlfabeto()
{
    std::vector<char> alfabeto;
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
    std::cout<<"\nAlfabeto minuscolo: \n";
    for(auto c: alfabeto){
        std::cout<< char(c + 32) << " ";
    }
}

int main()
{
}