#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int Vida1 = 20, Vida2 = 20;
	int dano1 = 0, dano2 = 0;
	string P1, P2;
	bool sair = false;

	cout << "Digite o nome do jogador 1" << endl;
	cin >> P1;
	cout << "Digite o nome do jogador 2" << endl;
	cin >> P2;

	while (sair == false)
	{
		cout << "-" << dano1 << "                   -" << dano2 << endl;
		cout << " o                   o  " << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^  " << endl;
		cout << P1 << "                " << P2 << endl;
		cout << "Vida: " << Vida1 << "         " << " Vida: " << Vida2 << endl;
		cout << "Atq: 2" << "         " << "Atq: 2" << endl;
		cout << "Def: 4" << "         " << "Def: 4" << endl;

		int dado6;
		srand((int)time(0));

		dado6 = rand() % 6 + 1;
		dano1 = dado6 - 4;
		if (dado6 < 4)
		{
			dano1 = 0;
		}
		Vida1 = Vida1 - dano1;

		dado6 = rand() % 6 + 1;
		dano2 = dado6 - 4;
		if (dado6 < 4)
		{
			dano2 = 0;
		}
		Vida2 = Vida2 - dano2;
		system("pause");

		cout << "Vida: " << Vida1 << "         " << "Vida: " << Vida2 << endl;

		if (Vida1 <= 0 || Vida2 <= 0)
		{
			sair = true;
		}
		system("cls");
	}
	cout << "Game Over" << endl;
	if (Vida1 > 0) cout << "voce ganhou: " << P1 << endl;
	else if (Vida2 > 0) cout << "voce ganhou: " << P2 << endl;
	else cout << "os dois perderam" << endl;

	return 0;
}
