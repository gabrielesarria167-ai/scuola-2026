#include <iostream>
#include <string>
#include <vector>

std::string riceviStringa(){
    std::string Stringa;
    std::cout<<"Inserire parola: ";
    getline(std::cin>>std::ws, Stringa);
    return Stringa;
}

std::vector<bool> isVocale(std::string parola){
    char vocali[] = {'a','e','i','o','u'};
    std::vector<bool> controlloVocale;
    for(int i = 0; i<parola.size(); i++){
        for(int j = 0; j < sizeof(vocali)/sizeof(vocali[0]); j++){
            if(parola[i] == vocali[j] || parola[i] == toupper(vocali[j])){
                controlloVocale.push_back(true);
                continue;
            }
            else{
                controlloVocale.push_back(false);
                continue;
            }
        }
    }
    return controlloVocale;
}


int main(){
    std::vector<bool> controllo = isVocale(riceviStringa());
    for(auto i:controllo){
        if(i){
            std::cout<<"true\n";
        }
        else{
            std::cout<<"false\n";
        }
    }
}