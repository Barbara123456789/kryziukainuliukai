#ifndef BIBLIOTEKOS,_ZAIDIMO_LENTELE_IR_LAIMEJIMO_TIKRINIMAS_H_INCLUDED
#define BIBLIOTEKOS,_ZAIDIMO_LENTELE_IR_LAIMEJIMO_TIKRINIMAS_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;

int tikrin(char[]);
void lentele(char[]);

void lentele(char kvadratouzp[])
{
system("cls");
    cout <<setw(20)<<" "<< "\n\n\t Kryziuku nuliuku zaidimas \n\n";
	cout <<setw(8)<<" "<< "Pirmas zaidejas (X)  -   Antras zaidejas  (O)" << endl << endl;
	cout <<endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl;
	cout <<setw(16)<<" "<< "  " << kvadratouzp[1] << "  |  " << kvadratouzp[2] << "  |  " << kvadratouzp[3] << endl;
	cout <<setw(16)<<" "<< "_____|_____|_____" << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl;
	cout <<setw(16)<<" "<< "  " << kvadratouzp[4] << "  |  " << kvadratouzp[5] << "  |  " << kvadratouzp[6] << endl;
	cout <<setw(16)<<" "<< "_____|_____|_____" << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl;
	cout <<setw(16)<<" "<< "  " << kvadratouzp[7] << "  |  " << kvadratouzp[8] << "  |  " << kvadratouzp[9] << endl;
	cout <<setw(16)<<" "<< "     |     |     " << endl << endl;

}


int tikrin(char kvadratouzp[])
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
else if (kvadratouzp[1] != '1' && kvadratouzp[2] != '2' && kvadratouzp[3] != '3'&& kvadratouzp[4] != '4' && kvadratouzp[5] != '5' && kvadratouzp[6] != '6'&& kvadratouzp[7] != '7' && kvadratouzp[8] != '8' && kvadratouzp[9] != '9')
return 0;
else
return -1;
}

#endif // BIBLIOTEKOS,_ZAIDIMO_LENTELE_IR_LAIMEJIMO_TIKRINIMAS_H_INCLUDED
