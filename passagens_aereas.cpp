// Vinicius Polimeno, Giovanna Matos
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

void desenhaBoasVindas()
{

    cout << " \t $------------------------$ " << endl;
    cout << " \t |      Bem vindo ao      | " << endl;
    cout << " \t |      programa de       | " << endl;
    cout << " \t |    passagens aereas    | " << endl;
    cout << " \t $------------------------$ " << endl;
    cout << endl;
}

void desenhoMenu()
{
    ;
    cout << "  $-----------MENU------------$ " << endl;
    cout << "  |                           | " << endl;
    cout << "  | Escolha uma opcao:        | " << endl;
    cout << "  |    1) Cadastrar Passagem  | " << endl;
    cout << "  |    2) Listar passagens    | " << endl;
    cout << "  |    0) Sair                | " << endl;
    cout << "  |                           | " << endl;
    cout << "  $-----------MENU------------$ " << endl;

    cout << "opcao: ";
}
void limpabufferdocin()
  {
   //limpar o buffer do cin antes de usar o gatline
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

  }
vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

// nome do passageiro
void cadastrarPassagem(){
limpabufferdocin();
string nome,origem,destino,dataViagem;
cout << "digite o nome do passageiro: ";
getline(cin,nome);
cout <<"\n";
cout << "digite o origem do passageiro: ";
getline(cin,origem);
cout <<"\n";
cout << "digite o destino do passageiro: ";
getline(cin,destino);
cout <<"\n";
cout << "digite dataViagem do passageiro: ";
getline(cin,dataViagem);
cout <<"\n";

passageiros.push_back(nome);
origens.push_back(origem);
destinos.push_back(destino);
datas.push_back(dataViagem);






}
void listarPassagem(){
    system("cls");

    cout << "\t  ----------------------------- \n ";
    cout << "\t |                             | \n ";
    cout << "\t |    Bem vindo ao programa    | \n ";
    cout << "\t |             de              | \n ";
    cout << "\t |     Lista de Passageiros    | \n ";
    cout << "\t |                             | \n ";
    cout << "\t  ----------------------------- \n ";
    cout << "\n";
    cout << "\n";

    cout << "Quantidade de passagens: " << passageiros.size() << endl << endl;
    
    for (int i = 0; i < passageiros.size(); i++)
    {
       cout << "Passageiro " << passageiros[i] << endl;
       cout << "Origem "  << origens[i] << endl;
       cout << "Destino "  << destinos[i] << endl;
       cout << "Data "  << datas[i] << endl << endl;
      
    }
    

}
int main()
{
    int opcao = -1;
    string continua = "";
    desenhaBoasVindas();
    do{
        desenhoMenu();
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 0:
            cout << " Voce escolheu a o opcao sair do programa " << endl;
            
            break;
        case 1:
            cout << " Voce escolheu a o opcao cadastrar a passagens " << endl;
            cadastrarPassagem();
            cout << endl;
            break;
        case 2:
            cout << "Voce escolheu a opcao listar passagens " << endl;
            listarPassagem();
            cout << endl;
            break;
        default:
            cout << " opcao invalida " << endl;
        }
    }while (opcao != 0);
        system("cls");
        cout << "Obrigado por utilizar o programa:) \n \n";
}