#include <iostream>
using namespace std;
int main()
{
  string wpis;
  string jezyk;
  cout << "Wybierz jezyk/select lang (PL/EN)" << endl;
  cin >> jezyk;
  if(jezyk=="PL")
  {
    cout << "Witaj w ForgeVM!" << endl;
    cout << endl;
    cout << "Wybierz serwer" << endl;
    cout << "Lista serwerow dostepna pod /lista" << endl;
    cout << "Uruchomisz serwer pod /run ALIAS" << endl;
    cout << "Wgrasz serwer pod /install ALIAS" << endl;
    cout << "Edytuj swoj plik konfiguracyjny pod /edit ALIAS" << endl;
    cout << "Milej zabawy z przyjaciolmi!" << endl;
    cout << endl;
    cout << "Wpisz polecenie:";
    cin >> wpis;
    if(wpis=="/lista");
    if(wpis=="/run");
    if(wpis=="/install");
    if(wpis=="/edit");
    if(wpis=="/kremowka"):
    if(wpis=="/bomba");
  }
  else if(jezyk=="EN")
  {
    cout << "Kup se translatora!";
    return 0;
  }
}
