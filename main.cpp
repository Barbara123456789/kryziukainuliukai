#include "Bibliotekos, zaidimo lentele ir laimejimo tikrinimas.h"

int main()
{
char kvadratouzp[10] = {'o','1','2','3','4','5','6','7','8','9'};
int zaid = 1,i,sk;
char zyme;

do
{
   lentele(kvadratouzp);
   if(zaid%2==1)
    zaid=1;
   else
    zaid=2;

if(zaid==2)
{ cout<<setw(5)<<" "<<"Zaidejo " << zaid<<", ejimas: "<<endl;
   cout<<setw(5)<<" " <<"Jei norite zaisti su kompiuteriu spauskite Enter ;) \n\t Jei ne, tada antro zaidejo ejimas."<<endl;
   sk=rand()%9;
   zyme='O';

   int turn=1;
   int viet=0;
       while(viet==0)
        {
            if (sk == 1 && kvadratouzp[1] == '1'){
                kvadratouzp[1] = zyme;
       viet=1;}
       else if (sk == 2 && kvadratouzp[2] == '2'){
            kvadratouzp[2] = zyme; viet=1;}
             else if (sk == 3 && kvadratouzp[3] == '3'){
                    kvadratouzp[3] = zyme;
             viet=1;}
             else if (sk == 4 && kvadratouzp[4] == '4'){
                    viet=1;
             kvadratouzp[4] = zyme;}
             else if (sk == 5 && kvadratouzp[5] == '5'){
                    kvadratouzp[5] = zyme;
             viet=1;} else if (sk == 6 && kvadratouzp[6] == '6'){
                 kvadratouzp[6] = zyme;
                 viet=1;}
                 else if (sk == 7 && kvadratouzp[7] == '7'){
                        kvadratouzp[7] = zyme; viet=1;}
                 else if (sk == 8 && kvadratouzp[8] == '8'){
                        kvadratouzp[8] = zyme;
                 viet=1;}
                 else if (sk == 9 && kvadratouzp[9] == '9'){
                        kvadratouzp[9] = zyme;
                 viet=1;}
                 else  { sk=rand()%9;}
}
   i=tikrin(kvadratouzp);
   zaid++;
   _getche();
   lentele(kvadratouzp);
}
   else if(zaid==1)
{
cout<<setw(5)<<" " << "Zaidejo "<< zaid << ", ejimas:  ";
cin >> sk;
zyme='X';

if (sk == 1 && kvadratouzp[1] == '1')
kvadratouzp[1] = zyme;
else if (sk == 2 && kvadratouzp[2] == '2')
kvadratouzp[2] = zyme;
else if (sk == 3 && kvadratouzp[3] == '3')
kvadratouzp[3] = zyme;
else if (sk == 4 && kvadratouzp[4] == '4')
kvadratouzp[4] = zyme;
else if (sk == 5 && kvadratouzp[5] == '5')
kvadratouzp[5] = zyme;
else if (sk == 6 && kvadratouzp[6] == '6')
kvadratouzp[6] = zyme;
else if (sk == 7 && kvadratouzp[7] == '7')
kvadratouzp[7] = zyme;
else if (sk == 8 && kvadratouzp[8] == '8')
kvadratouzp[8] = zyme;
else if (sk == 9 && kvadratouzp[9] == '9')
kvadratouzp[9] = zyme;
else
{
cout<<setw(4)<<" "<<"Klaidingas ejimas. Irasytas netinkamas skaicius. Spasuskite Enter ir paradekite ejima is naujo.";
  zaid--;
   _getche();
}
   i=tikrin(kvadratouzp);
   zaid++;}
}while(i==-1);
   lentele(kvadratouzp);
     if(i==1)
{cout<<setw(8)<<"Zaideja "<<--zaid<<". Laimejo! ";}
else
cout<<"Ups! Lygiosios... Kas laimes kita karta?.. ";

    cout <<endl;
	cout <<setw(60)<<" "<<"Parenge: B.K. MRf-17"<< endl;
	cout <<endl;

_getche();
}




