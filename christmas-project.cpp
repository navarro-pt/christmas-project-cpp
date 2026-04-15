#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void gotoxy(int x, int y)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
	
}
using namespace std;
int main() 
{
	int opcao, insano, correto, tentativas, resposta, pisca;
	int cor=73;
	tentativas=0;
	pisca=0;
	srand(time(NULL));
	system("mode 660");
	setlocale(LC_ALL, "Portuguese");
	system("color 4c");
	do
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 74);
		gotoxy(90, 30);
		cout<<"+*-MENU-*+"<<endl;
		gotoxy(90, 31);
		cout<<"1- Ver árvore de Natal"<<endl;
		gotoxy(90, 32);
		cout<<"2- Ver o Pai Natal"<<endl;
		gotoxy(90, 33);
		cout<<"3- Jogo das Prendas"<<endl;
		gotoxy(90, 34);
		cout<<"4- Sair do menu"<<endl;
		gotoxy(90, 35);
		cin>>opcao;
		switch(opcao)
		{
			case 1:
				system("cls");
				 while (pisca<10)
   {
   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
   		cout << "                             A" << endl;
    cout << "                            /  \\" << endl;
    cout << "                           J    L" << endl;
    cout << "                     ------'   `------" << endl;
    cout << "                      `.           .'" << endl;
    cout << "                        `.       .'" << endl;
    cout << "                         /       \\" << endl;
    cout << "                        J   .'.   L" << endl;
    cout << "                        |.' | |`. |" << endl;
    cout << "                        '   | |//`" << endl;
    cout << "                       .-.-. _ _ _  |" << endl;
    cout << "                      /| | |(/|||||_|" << endl;
    cout << "                      _| | |/-'`'`'/|" << endl;
    cout << "                     / \\/|   o  + __.- /(" << endl;
    cout << "                    |  '|/| -|/(||||(_V_)" << endl;
    cout << "                    `._.| |/_/_)`-'' ///_<" << endl;
    cout << "                        >///\\\\\\//==<<<=" << endl;
    cout << "                      _ >>>\\\\\\>//<__<<<-'" << endl;
    cout << "                     / `-._>>>.-'   |<<" << endl;
    cout << "                    J     _.))     /<<<<" << endl;
    cout << "                v   |  .-'' |/__   |<<<||_" << endl;
    cout << "             \\\\||| `-> _/ / \\  `-<<<<<<*** **" << endl;
    cout << "           \\\\**|||| /    /><<\\    \\<<<********" << endl;
    cout << "             >>**////    /<>>>>`.   |****** <<_\\_\\" << endl;
    cout << "              >>***/_  .'>>><>>><\\  |*****<<<|_|_|" << endl;
    cout << "           .-' >***>>|/>//>><\\\\**|/\\|***<<<<<|_|_|" << endl;
    cout << "           \\.-' \\***<<<>>///\\\\******<<>><>>*****\\\\\\\\\\" << endl;
    cout << "            \\-'_.J--.<<<<>><<****>>///(\\|\\)|(//<<<," << endl;
    cout << "           (   )|(-'  (>>><<****<\\\\)_.><<<<-" << endl;
    cout << "          .-`-'_)\\-.--.\\>>><*****//||>(\\ (\\\\_.\\<<<< .-" << endl;
    cout << "         .' _.-'()\\`.**>>//****<<<>><<`-``-``-`<<.-' _" << endl;
    cout << "     .--'_.'>>>><>>`\\.***(`._.-.<<<<<<(_____``<.'_.-' |<" << endl;
    cout << "    /-'   >><<>>>>>//<>>>/|\\ |  /<<>><|     `-._/      L" << endl;
    cout << "           ->>.<>><>>>>>/|| \\|.'|<<>\\\\|  .-----'|._    |" << endl;
    cout << "   .--._ >><.' \\>>>>>>///||  |  |<<>><|.'       )-----'`." << endl;
    cout << "   |   _.--'    |///////\\\\-----'<>>>>>==\\\\<><>>>>< ===::===>>"<< endl;
    cout << "  /    .'>><>>)_ -->>>>===::::==>>******|/>>>/  `.  .--.`-.|" << endl;
    cout << " /    />>>>>>>'`'`'`-`<===:::<<< *****(\\ .-.<(   )-(   )" << endl;
    cout << "/.'| />>>>>>>.-.-.-._\\|> =//||\\\\******-'@--'>>`-'<<\\`-'`._" << endl;
    cout << "   |/>>>>>>>-'`'`'`-.\\\\>>==<<<<***.'\\ |_|)_|<<<<<<< \\_ `- `." << endl;
    cout << "  / >>>>>>.-..''`'`-.\\\\->>>><<>(  /(\\\\\\/// <<<<<=    \\_ .-'" << endl;
    cout << " /-' >>>----\\((::::)))// /><>>**|   (\\\\\\///<<<<---." << endl;
    cout << "|.'  >>>| | | |\\__.'.'>>>>>****.'/ (\\\\////<<<<-`-`" << endl;
    cout << " `   >>>|-|-| |>>>>>>>>>>**** .--. /_\\\\\\////<<<|_|_|<<<" << endl;
    cout << "     >>>|_|_|/>><>><<>*****vv(    V  `.\\\\<<<>>>|_|_|<<<<" << endl;
    cout << "     ////>>>>>`.>>>>******>>><`--'\\   /<<<<<>>>>><<<<<<<" << endl;
    cout << "     '' ///>>>>><<>>*****>>>><<<<<<`-'<<<<<<>><<<><<<<<<<" << endl;
    cout << "       ''    ->>>>><<>///>>>>><<<<<<\\\\\\\\\\><<<<<>>><<<<\\\\" << endl;
    cout << "               ////<<>><<<>>>><<<<>\\\\\\\\\\\\\\>><\\\\\\\\\\\\" << endl;
    cout << "              '' / ////////>>><<<\\\\\\\\\\\\\\<  \\\\ \\\\\\\\\\" << endl;
    cout << "                   /|| .////|||\\\\\\\\\\\\\\" << endl;
    cout << "                      (MMMMMMMMMMMMMMMMMMM)" << endl;
    cout << "                      |`----.MMMMMMMM.---'|" << endl;
    cout << "                      `---.____   ____.---'" << endl;
    cout << "                       |       \"\"\"       |" << endl;
    cout << "                       |                 |" << endl;
    cout << "                       |                 |" << endl;
    cout << "                       |                 |" << endl;
    cout << "                       |                 |" << endl;
    cout << "                       (                 )" << endl;
    cout << "                        `----._____.----'" << endl;
   	Sleep(500);
   	system("cls");
    cor++;
    if (cor>79)
    	cor=73;
    pisca++;
   }
				  
    break; 
case 2:
	system("cls");
    cout << "|,\\/ ,| |[_' |[_]) |[_]) \\\\//" << endl;
    cout << " ||\\/|| |[_, ||'\\, ||'\\,  ||" << endl;
    cout << endl;
    cout << "            ___ __ __ ____  __  __  ____  _  _    __    __" << endl;
    cout << "           // ' |[_]| |[_]) || ((_' '||' |,\\/ ,|  //\\\\  ((_'" << endl;
    cout << "           \\\\, |[']| ||'\\, || ,_))  ||  ||\\/|| //``\\\\ ,_))" << endl;
    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 75);
    cout << "                                         ,;7," << endl;
    cout << "                                       _ ||:|," << endl;
    cout << "                     _,---,_           )\\'  '|'" << endl;
    cout << "                   .'_.-.,_ '.         ',')  j" << endl;
    cout << "                  /,'   ___}  \\        _/   /" << endl;
    cout << "      .,         ,1  .''  =\\ _.''.   ,`';_ |" << endl;
    cout << "    .'  \\        (.'T ~, (' ) ',.'  /     ';'," << endl;
    cout << "    \\   .\\(\\O/)_. \\ (    _Z-'`>--, .'',      ;" << endl;
    cout << "     \\  |   I  _|._>;--'`,-j-'    ;    ',  .'" << endl;
    cout << "    __\\_|   _.'.-7 ) `'-' \"       (      ;'" << endl;
    cout << "  .'.'_.'|.' .'   \\ ',_           .'\\   /" << endl;
    cout << "  | |  |.'  /      \\   \\          l  \\ /" << endl;
    cout << "  | _.-'   /        '. ('._   _ ,.'   \\i" << endl;
    cout << ",--' ---' / k  _.-,.-|__L, '-' ' ()    ;" << endl;
    cout << " '._     (   ';   (    _-}             |" << endl;
    cout << "  / '     \\   ;    ',.__;         ()   /" << endl;
    cout << " /         |   ;    ; ___._._____.: :-j" << endl;
    cout << "|           \\,__',-' ____: :_____.: :-\\" << endl;
    cout << "|               F :   .  ' '        ,  L" << endl;
    cout << "',             J  |   ;             j  |" << endl;
    cout << "  \\            |  |    L            |  J" << endl;
    cout << "   ;         .-F  |    ;           J    L" << endl;
    cout << "    \\___,---' J'--:    j,---,___   |_   |" << endl;
    cout << "              |   |'--' L       '--| '-'|" << endl; 
    cout << "               '.,L     |----.__   j.__.'" << endl;
    cout << "                | '----'   |,   '-'  }" << endl;
    cout << "                j         / ('-----';" << endl;
    cout << "               { \"---'--;'  }       |" << endl;
    cout << "               |        |   '.----,.' " << endl;
    cout << "               ',.__.__.'    |=, _/" << endl;
    cout << "                |     /      |    '.'" << endl;
    cout << "                |'= -x       L___   '--," << endl;
    cout << "                L   __\\          '-----'" << endl;
    cout << "                 '.____)             " << endl;
    break; 
case 3:
	system("cls");
	gotoxy(70, 30);
	cout<<"-+* Jogo das Prendas -+*"<<endl;
	gotoxy(70, 31);
	cout<<"Neste jogo, terás de entregar prendas!"<<endl;
	gotoxy(70, 32);
	cout<<"Para entregar uma prenda, tens de adivinhar o número correto, sem ultrapassar as tentativas fornecidas"<<endl;
	gotoxy(70, 33);
	cout<<"Escolha a dificuldade"<<endl;
	gotoxy(70, 34);
	cout<<"1 - Fácil"<<endl;
	gotoxy(70, 35);
	cout<<"2 - Normal"<<endl;
	gotoxy(70, 36);
	cout<<"3 - Insano"<<endl;
	gotoxy(70, 37);
	cin>>insano;
	switch(insano)
	 {
		case 1:
			correto=rand() % 5;
			cout<<"Adivinha número de 0 a 5. Tens 3 tentativas"<<endl;
			cin>>resposta;
			if(resposta==correto)
			{
				cout<<"Parabéns, adivinhou corretamente!!!"<<endl;
			}
			else
			{
				while(tentativas!=3)
				{
					if(resposta>correto)
					{
						cout<<"Errado, "<<correto<<"tente novamente. Dica: O número correto é menor do que "<<resposta<<endl;
					}
					else
					{
						cout<<"Errado, "<<correto<<"tente novamente. Dica: O número correto é maior do que "<<resposta<<endl;
					}
					tentativas++;
					cin>>resposta;
				}
			}break;
		
		case 2:
		correto=rand() % 20;
			cout<<"Adivinha o número de 1 a 20. Tens 3 tentativas"<<endl;
			cin>>resposta;
			if(resposta==correto)
			{
				cout<<"Parabéns, adivinhou corretamente!!!"<<endl;
			}
			else
			{
				while(tentativas!=3)
				{
					if(resposta>correto)
					{
						cout<<"Errado, tente novamente. Dica: O número correto é menor do que "<<resposta<<endl;
					}
					else
					{
						cout<<"Errado, tente novamente. Dica: O número correto é maior do que "<<resposta<<endl;
					}
					tentativas++;
					cin>>resposta;
				}
			}
		break;
		case 3:
		correto=rand() % 100;
			cout<<"Adivinha número de 1 a 100. Tens 5 tentativas"<<endl;
			cin>>resposta;
			if(resposta==correto)
			{
				cout<<"Parabéns, adivinhou corretamente!!!"<<endl;
			}
			else
			{
				while(tentativas!=5)
				{
					if(resposta>correto)
					{
						cout<<"Errado, tente novamente. Dica: O número correto é menor do que "<<resposta<<endl;
					}
					else
					{
						cout<<"Errado, tente novamente. Dica: O número correto é maior do que "<<resposta<<endl;
					}
					tentativas++;
					cin>>resposta;
				}
			}
		break;	
		}
		
		
	
    case 4:
    	return 0;
 	break;
	
    
}
	
	}	while(opcao !=4);

	return 0;
}
