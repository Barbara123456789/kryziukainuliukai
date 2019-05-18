#include <iostream>
#include <iomanip>
using namespace std;

char kvadratouzp[10] = {'o','1','2','3','4','5','6','7','8','9'};

int tiklaim()
{
    if (kvadratouzp[1] == kvadratouzp[2] && kvadratouzp[2] == kvadratouzp[3])
		return 1;
	else if (kvadratouzp[4] == kvadratouzp[5] && kvadratouzp[5] == kvadratouzp[6])
		return 1;
	else if (kvadratouzp[7] == kvadratouzp[8] && kvadratouzp[8] == kvadratouzp[9])
		return 1;
	else if (kvadratouzp[1] == kvadratouzp[4] && kvadratouzp[4] == kvadratouzp[7])
		return 1;
	else if (kvadratouzp[2] == kvadratouzp[5] && kvadratouzp[5] == kvadratouzp[8])
		return 1;
	else if (kvadratouzp[3] == kvadratouzp[6] && kvadratouzp[6] == kvadratouzp[9])
		return 1;
	else if (kvadratouzp[1] == kvadratouzp[5] && kvadratouzp[5] == kvadratouzp[9])
		return 1;
	else if (kvadratouzp[3] == kvadratouzp[5] && kvadratouzp[5] == kvadratouzp[7])
		return 1;
	else if (kvadratouzp[1] != '1' && kvadratouzp[2] != '2' && kvadratouzp[3] != '3' && kvadratouzp[4] != '4' && kvadratouzp[5] != '5' && kvadratouzp[6] != '6' && kvadratouzp[7] != '7' && kvadratouzp[8] != '8' && kvadratouzp[9] != '9')
		return 0;
	else
		return -1;
}

void lent()
{
	system("cls");
	cout <<setw(20)<<" "<< "\n\n\t Kryziuku kuliuku zaidimas \n\n";
	cout <<setw(8)<<" "<< "Pirmas zaidejas (X)  -   Antras zaidejas  (O)" << endl << endl;
	cout << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl;
	cout <<setw(16)<<" "<< "  " << kvadratouzp[1] << "  |  " << kvadratouzp[2] << "  |  " << kvadratouzp[3] << endl;
	cout <<setw(16)<<" "<< "_____|_____|_____" << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl;
	cout <<setw(16)<<" "<< "  " << kvadratouzp[4] << "  |  " << kvadratouzp[5] << "  |  " << kvadratouzp[6] << endl;
	cout <<setw(16)<<" "<< "_____|_____|_____" << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl;
	cout <<setw(16)<<" "<< "  " << kvadratouzp[7] << "  |  " << kvadratouzp[8] << "  |  " << kvadratouzp[9] << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl << endl;
};

int main() {
	int zaidejas = 1,i,ejimas;
	char zyme, op2;


	do
	{  lent();
		zaidejas=(zaidejas%2)? 1:2;
		cout <<setw(4)<<" " << " Zaidejau " << zaidejas << ", irasykite savo ejimo skaiciu:  ";
		cin >> ejimas;
		zyme=(zaidejas == 1) ? 'X' : 'O';
		if (ejimas == 1 && kvadratouzp[1] == '1')
			kvadratouzp[1] = zyme;
		else if (ejimas == 2 && kvadratouzp[2] == '2')
			kvadratouzp[2] = zyme;
		else if (ejimas == 3 && kvadratouzp[3] == '3')
			kvadratouzp[3] = zyme;
		else if (ejimas == 4 && kvadratouzp[4] == '4')
			kvadratouzp[4] = zyme;
		else if (ejimas == 5 && kvadratouzp[5] == '5')
			kvadratouzp[5] = zyme;
		else if (ejimas == 6 && kvadratouzp[6] == '6')
			kvadratouzp[6] = zyme;
		else if (ejimas == 7 && kvadratouzp[7] == '7')
			kvadratouzp[7] = zyme;
		else if (ejimas == 8 && kvadratouzp[8] == '8')
			kvadratouzp[8] = zyme;
		else if (ejimas == 9 && kvadratouzp[9] == '9')
			kvadratouzp[9] = zyme;
		else
		{
			cout<<setw(4)<<" "<<"Klaidingas ejimas. Irasytas netinkamas skaicius. Spasuskite Enter ir paradekite ejima is naujo.";
			zaidejas--;
			cin.ignore();
			cin.get();
		}
		i=tiklaim();
		zaidejas++;
		//cout << "Ar norite zaisti toliau? (t)" << endl;
        //cin >> op2;
		}// while (op2 == 't');


    while(i==-1);
	lent();
	if(i==1)
		cout<<setw(8)<<" "<<" Zaidejas "<<--zaidejas<<" laimejo ";
	else
		cout<<setw(8)<<" "<<"Zaidimas baigtas. Lygiosios";


    return 1;

};

