// integrantes: Agatha e Pedro.
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

    vector<string> passageiros;
    vector<string> origens;
    vector<string> destinos;
    vector<string> dataViagem;


    void desenhoBoasVindas(){
    cout << "\n";
    cout << "                      ---------------------------------   \n";
    cout << "                    |                                   | \n";
    cout << "                    |       Bem vindo ao programa       | \n";
    cout << "                    |                de                 | \n";
    cout << "                    |         Passagens Aereas          | \n";
    cout << "                    |                                   | \n";
    cout << "                      ---------------------------------   \n";
    }

    void desenhaMenu(){
    cout << "\n";
    cout << "   ------------- MENU --------------   \n";
    cout << " |                                   | \n";
    cout << " |  Escolha uma opcao:               | \n";
    cout << " |  - 1) Cadastrar passagens         | \n";
    cout << " |  - 2) Listar passagens            | \n";
    cout << " |  - 0) Sair                        | \n";
    cout << " |                                   | \n";
    cout << "   ------------- MENU --------------   \n";
    }


    void Limpador(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void CadastrarPassagem(){
      Limpador();
      string nomes, Origens, Destinos, DataViagem;


      cout << "informe o nome do passageiro: ";
      getline(cin, nomes);

      cout << "Informe seu lugar de origem: ";
      getline(cin, Origens);

      cout << "Informe seu destino: ";
      getline(cin, Destinos);

      cout << "Informe a data da viagem: ";
      getline(cin, DataViagem);
      cout << endl;

      passageiros.push_back(nomes);
      origens.push_back(Origens);
      destinos.push_back(Destinos);
      dataViagem.push_back(DataViagem);

      cout << "Seu cadastro foi realizado com sucesso!!";
    }

    void ListarPassagens(){
      Limpador();
    
    cout << "\n";
    cout << "   ---------------------------------   \n";
    cout << " |                                   | \n";
    cout << " |       Bem vindo ao programa       | \n";
    cout << " |                de                 | \n";
    cout << " |        Listar passageiros!        | \n";
    cout << " |                                   | \n";
    cout << "   ---------------------------------   \n";
    cout << "\n";

    cout << "Quantidade de passagens: " << passageiros.size() << endl << endl;

      for (int i = 0; i < passageiros.size(); i++)
      {
        cout << "Passageiros: " << passageiros[i] << endl;
        cout << "Origens: " << origens[i] << endl;
        cout << "Destinos: " << destinos[i] << endl;
        cout << "Datas: " << dataViagem[i] << endl << endl;
      }

    }

int main(){
    system ("cls");
    int opcao = -1;
    string continua = "";
    desenhoBoasVindas();

    do {
        desenhaMenu();
        cout << "opcao: ";
        cin >> opcao;
        cout << endl;

      switch (opcao)
     {
      case 0:
        cout << "- Voce escolheu sair do programa... " << endl;
        break;
      case 1:
        cout << "- Voce escolheu cadastrar passagem! " << endl;
        CadastrarPassagem();
        cout << endl;
        break;
        cin >> continua;
    
      case 2:
        cout << "- Voce escolheu a opcao Listar passagens! " << endl;
        ListarPassagens();
        break;
        cin >> continua;

      default:
        cout << " ! Opcao invalida ! " << endl;
        break;
     }

    cout << " " << endl;
    
    } while (opcao != 0);
        cout << "       ---> Obrigada por usar nosso programa! :) <--- ";

    cout << " " << endl;




    return 0; 
}