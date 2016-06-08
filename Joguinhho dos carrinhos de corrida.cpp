#include <iostream> //bliblioteca
#include <ctime> //bliblioteca
using namespace std; //não optar por escrever "std"
//espaços para organizar
void imprimir_espacos(int rodada); //declarando a função de espaços
int main() //funçaõ principal
{
	int total_espacos = 50;//espaços até o final
	int espacos_1 = 0; //espaços que o carrinho 1 andou
	int espacos_2 = 0; //espaços que o carrrinho 2 andou
	while (espacos_1 < total_espacos && espacos_2 < total_espacos) // sair do laço quando chegar ao término da corrida
	{
		system("cls"); //limpa a tela
		cout << "Jogo do carrinho de corrida legal" << endl; //imprimindo o nome do jogo
		cout << "                                                finish!" << endl; //imprimi o final da corrida

		srand((int)time(0)); //colocando a semente apartir do tempo
		//construindo os códigos do carrinho
		espacos_1 = rand() % 3 + 1 + espacos_1; //gerando números aleatórios de 1 a 3
		imprimir_espacos(espacos_1); //imprimindo espaços
		cout << "  _  " << endl; //imprimindo parte do carrinho
		imprimir_espacos(espacos_1); //imprimindo espaços do carrinho 1
		cout << "-o-o>" << endl; //imprimindo a outra parte do crrinho

		espacos_2 = rand() % 3 + 1 + espacos_2; //gerando números aleatórios de 1 a 3
		imprimir_espacos(espacos_2); //imprimindo espaços
		cout << "  _  " << endl; //imprimindo parte do carrinho
		imprimir_espacos(espacos_2); //imprimindo espaços do carrinho 2
		cout << "-o-o>" << endl; //imprimindo a outra parte do carrinho
	} //fim do laço
	if (espacos_1 > espacos_2) cout << "Carro 1 venceu a corrida!" << endl; ;//Imprimi na tela "Carro 1 venceu!" se o carro 1 vencer
	else if (espacos_2 > espacos_1) cout << "Carro 2 venceu a corrida!" << endl; ;//Imprimi na tela "Carro 2 venceu!" se o carro 2 vencer
	else cout << "Empate!" << endl; ;//Imprimir na tela "Empate" se nenhum dos carrinhos vencerem
	return 0; //término do jogo
} //fim

void imprimir_espacos(int rodada) //função que imprime os espaços
{ //início da função que irá imprimir os espaços
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++) //imprime os espaços
	{ //laço que imprime os espaços
		cout << " "; //imprimindo os espaços
	} //fim do laço que imprime os espaços
} //fim da função
