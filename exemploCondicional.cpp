#include <iostream>
#include <locale.h>
#include <windows.h>


using namespace std;


int main()
{
setlocale(LC_ALL, "pt_BR.UTF-8");
	
	SetConsoleOutputCP(CP_UTF8);


double ap, np, mf;

cout << " " << endl;
cout << "PROGRAMA PARA CALCULAR A MÉDIA FINAL!" << endl;
cout << " " << endl;
cout << "Digite a nota da avaliação presencial: ";
cin >> ap;
cout << "Digite a nota do questionário online: ";
cin >> np;

mf = (ap * 0.75) + (np * 0.25);

system("cls");
 
if (mf < 5)
{ 
    cout << " " << endl;
    system("color 40"); 
    cout << "A média obtida foi de: " << mf <<  "  -RUIM" << endl;
}else if (mf >= 5 && mf < 7)

{
    cout << " " << endl;
    system("color 60");
cout << "A média obtida foi de: " << mf <<  "  -REGULAR " << endl;
}else if (mf >= 7 && mf < 9)
{
    cout << " " << endl;
    system("color 70");
cout <<"A média obtida foi de: " << mf <<  "  -BOM " << endl;
}else {
    cout << " " << endl;
    system("color 20");
    cout << "A média obtida foi de: " << mf <<  " -EXCELENTE " << endl;

} 
cout << " " << endl;
system("pause");
    return 0;
}
