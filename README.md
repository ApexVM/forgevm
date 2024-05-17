# ForgeVM
## ForgeVM czyli (kolejny) darmowy hosting serwerów Minecraft bazujący na runcode z ApexVM
Tak postanowiłam założyć swój hosting serwerów Minecraft bo aternos nie wyrabia a komputery runcode są serio mocne, więc tak całą bazą jest tak naprawdę moja instancja runcode na której mam postawiony mały serwer do zarządzania wirtualnymi komputerami, na testach runcode się nie zaciął ale nwm jak gdy kilka osób go używa :)

### Instalacja
Najpierw musisz mieć Windowsa 10 lub jakiegoś linuksa (ta nie używam to nwm)
Jeśli uzywasz Windowsa, otwórz plik forgevm-server.cxx w Dev C++ i go skompiluj
(E Slara, weź mi kompilator na linuksa zrób )

Po otwarciu aplikacji powinna wyświetlić się lista wersji Minecrafta, jeśli chcesz zainstalować np wersję 1.16.5 to wpisujesz
```
/install 1165
```
Następnie jeśli masz już zainstalowaną wersję, możesz uruchomić serwer (do tego polecam skontaktować się z ApexVM by dali tobie pliki do avm runnera)
Jeśli nadal używasz ForgeVM to uruchomisz swój serwer wpisując 
```
/run 1165
```
Po prostu zamień 1165 na twoją wersję Minecrafta

### Aliasy
Aliasy to wersje Minecrafta które wprowadzamy do ForgeVM, na przykład wersja 1.20.4 ma alias 1204, 1.16.5 - 1165, 1.12.2 - 1122, 1.8.9 - 189 itd.

Możesz wyświetlić wersje dostępne w ForgeVM wpisując:
```
/lista
```
Następnie przejdź do sekcji Instalacja

### Jak edytować pliki konfiguracyjne? 
Po prostu wpisz edit ALIAS, np:
```
/edit 1165
```

### Czy mod X ruszy na moim serwerze?
Jeśli ten mod zadziała na innych hostingach to tak, ForgeVM to launcher serwerów a nie hosting (pod hosting używam mojej instancji runcode w ApexVM), polecam sprawdzić :)

### Nie mogę wejść na serwer!
Ta pewno nie włączyłeś opcji non-premium wpisz edit ALIAS w cmd.exe i znajdź opcję "online-mode" i zmień na false

### Jak mam to udostępnić koledze?
No użyj avm forwadera, serveo czy innych, widziałam że Slara ma SelfHoster więc też polecam sprawdzić, są różne możliwości hostowania tych serwerów :)

### Czy to jest legit (bez wirusów)?
Cały program jest bezpieczny i stworzony przy użyciu chatu gpt i moich skillów więc no... jest git.

### Czy będą aktualizację?
Program ForgeVM będzie aktualizowany i tak, będę dawać aktualizacje tutaj ale także na moją stronkę (muszę sobie ogarnąć hosting).

### Jak usunąć serwer?
Usuń folder z plikami i sprawdź appdata czy tam nie ma szczątków.

### Gdzie mogę się z tobą skontaktować?
Nie tutaj, okej? Najpierw wejdź na Discorda ApexVM i tam mnie znajdziesz.
