#include <iostream>
using namespace std;
int main()
{
  int wpis;
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
  }
  else if(jezyk=="EN")
  {
    cout << "Kup se translatora!";
    return 0;
  }
}
