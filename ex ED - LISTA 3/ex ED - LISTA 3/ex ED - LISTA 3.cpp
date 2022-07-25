// Aluna : Talyta Scaramuzzo --- TIA: 32079915
// EX LISTA 3 - ESTRUTURA DE DADOS 1 

#include <iostream>
#include "StaticQueue.h"
#include <ctime>
#include <string>

using namespace std;

void Cadastrar(StaticQueue& filaA, StaticQueue& filaB)
{
    char marca, verifica;

    verifica = ' ';

    cout << "\n Funcao: Cadastro\n";

    while (verifica != 'N')
    {
        cout << "\nQual marca da agua deseja registrar (A/B): \n ";
        cin >> marca;
        marca = toupper(marca);

        while (marca != 'A' && marca != 'B')
        {
            cout << "Nao trabalhamos com esta marca, por favor insira A ou B: ";
            cin >> marca;
            marca = toupper(marca);
        }

        if (marca == 'A')
        {
            time_t t = time(nullptr);
            cout << "Registrado\n";
            cout << "Data: " << t; //O código asctime estava aparecendo um erro na qual nao faço ideia de como resolver prof, tinha a ver c a variavel t 
            cout << "\nEstante: 1\n";
            cout << "Prateleira: " << ((filaA.count / 10) + 1);
            cout << "\nGaveta: " << ((filaA.count % 10) + 1);
            Enqueue(filaA, t);
           

        }
        else if (marca == 'B')
        {
            time_t t = time(nullptr);
            cout << "Registrado";
            cout << "Data: " << t; //O código asctime estava aparecendo um erro na qual nao faço ideia de como resolver prof, tinha a ver c a variavel t
            cout << "\nEstante: 1\n";
            cout << "\nEstante: 2\n";
            cout << "Prateleira: " << ((filaB.count / 10) + 1);
            cout << "\nGaveta: " << ((filaB.count % 10) + 1);
            Enqueue(filaB, t);
           
        }

        cout << "\n Voce deseja repetir o processo (S/N)? ";
        cin >> verifica;

        verifica = toupper(verifica);

        while (verifica != 'S' && verifica != 'N')
        {
            cout << "\nResposta nao valida, favor reinserir o que deseja(S/N): ";
            cin >> verifica;
            verifica = toupper(verifica);
        }

    }
    cout << "\nA funcao foi executada, agora retornaremos ao menu\n";
}

void Remover(StaticQueue& filaA, StaticQueue& filaB)
{
    char marca, verifica;

    verifica = ' ';

    cout << "Funcao: Remover\n";

    while (verifica != 'N')
    {
        cout << "Qual marca de agua A ou B (C, se nao houver preferencia)? ";
        cin >> marca;

        marca = toupper(marca);

        while (marca != 'A' && marca != 'B' && marca != 'C')
        {
            cout << "Marca nao valida , favor inserir A, B ou C: ";
            cin >> marca;
            marca = toupper(marca);
        }

        if (marca == 'A')
        {
            if (IsEmpty(filaA) == false)
            {
                cout << "Estante: 1\n";
                cout << "Remover:\n";
                cout << "Prateleira: " << ((filaA.front / 10) + 1) << "\n";
                cout << "Gaveta: " << ((filaA.front % 10) + 1) << "\n";
                Dequeue(filaA);
            }

            else
            {
                cout << "\nEstoque em falta\n";
            }
        }
        else if (marca == 'B')
        {
            if (IsEmpty(filaB) == false)
            {
                cout << "Estante: 2\n";
                cout << "Remover:\n";
                cout << "Prateleira: " << ((filaB.front / 10) + 1) << "\n";
                cout << "Gaveta: " << ((filaB.front % 10) + 1) << "\n";
                Dequeue(filaB);
            }
            else
            {
                cout << "\nEstoque em falta\n";
            }

        }
        else
        {
            if (Front(filaA) <= Front(filaB) && IsEmpty(filaA) == false)
            {
                cout << "Estante: 1\n";
                cout << "Remover:\n";
                cout << "Prateleira: " << ((filaA.front / 10) + 1) << "\n";
                cout << "Gaveta: " << ((filaA.front % 10) + 1) << "\n";
                Dequeue(filaA);
            }
            else if (Front(filaB) < Front(filaA) && IsEmpty(filaB) == false)
            {
                cout << "Estante: 2\n";
                cout << "Remover:\n";
                cout << "Prateleira: " << ((filaB.front / 10) + 1) << "\n";
                cout << "Gaveta: " << ((filaB.front % 10) + 1) << "\n";
                Dequeue(filaB);
            }
            else if (IsEmpty(filaA) == true && IsEmpty(filaB) == true)
            {
                cout << "\nNenhum estoque disponivel\n";
            }
        }

        cout << "Deseja repetir todo o processo novamente(S/N)? ";
        cin >> verifica;
        verifica = toupper(verifica);

        while (verifica != 'S' && verifica != 'N')
        {
            cout << "Opcao invalida, favor reinserir(S/N): ";
            cin >> verifica;
            verifica = toupper(verifica);
        }

    }
}

int main()
{
    StaticQueue marcaA = Create();
    StaticQueue marcaB = Create();
    char funcao = 'D';
    while (funcao != 'C')
    {
        cout << "Qual funcao deseja executar? \n";
        cout << "\n A - Cadastro \n B - Remover \n C - Sair\n";
        cin >> funcao;
        funcao = toupper(funcao);
        while (funcao != 'A' && funcao != 'B' && funcao != 'C')
        {
            cout << "Opcao invalida, favor reinserir(A/B/C): ";
            cin >> funcao;
            funcao = toupper(funcao);
        }
        if (funcao == 'A')
        {
            Cadastrar(marcaA, marcaB);
        }
        if (funcao == 'B')
        {
            Remover(marcaA, marcaB);
        }
    }

    cout << "Fim";

}
