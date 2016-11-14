#include <iostream>
#include <unordered_map>
 
using namespace std;

int main(){
  // container unordered_map é um Hash
  unordered_map<string, int> meu_hash;
  // o iterator é o  manipulador do unordered_map
  unordered_map<string,int>::iterator it;
  // dados
  string nome;
  int idade,opcao;

  // pergunta ao usuário
  cout << " 0 - Sair " << endl;
  cout << " 1 - Continuar " << endl;
  cin >> opcao;

  while(opcao != 0) {
    cin >> nome >> idade;
    meu_hash[nome] = idade;

    // pergunta ao usuário novamente
    cout << " 0 - Sair " << endl;
    cout << " 1 - Continuar " << endl;
    cin >> opcao;
  }

  cout << "Imprimindo todos os elementos do Hash" << endl;
  for(it = meu_hash.begin(); it != meu_hash.end(); it++){
    cout << it->first << ": " << it->second << endl;
  }

  cout << "Fim do programa" << endl;
  return 0;
}
