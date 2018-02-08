##Praca domowa

#####Notatka linux - podstawowe polecenia krok po kroku
Przejście do pulpitu : cd Pulpit/ (lub Desktop)

Utworzenie katalogu : mkdir first_repo
cd first_repo/

Instalacja Git: git sudo apt-get update
sudo apt-get install git

Sprawdzenie wersji:  git git --version

Inicjalizacja repozytorium GIT w bieżącym katalogu: git init

Wyświetlenie zawartości aktualnego katalogu: ls

Utworzenie dowolnego pliku tu o nazwie touch:  touch test.txt

Edycja pliku: nano test.txt

Dodanie wszystkich plików (lub ich zmian) do repozytorium git:  git add .

Wyświetlenie listy zmian w: git status

Konfiguracja git git config --global user.email "ntwój email"
git config --global user.name "twój login"

Dodaje do commita wraz z komentarzem git commit -m "tworzenie nowego pliku"

Sprawdzenie zmian: git log

Edycja pliku: nano test.txt

dodanie wszystkich plików do repozytorium git: git add .

Dodaje do commita wraz z komentarzem: git commit -m "pierwsza zmiana"

Sprawdzenie zmian: git log

Edycja pliku: nano test.txt

dodanie wszystkich plików do repozytorium git: git add .

Dodaje do commita wraz z komentarzem: git commit -m "druga zmiana"

Dodanie do git zdalnego repozytorium: git remote add origin https://github.com/nazwa_uzytkownika/test.git

Wysłanie zmienionych plików do zdalnego repozytorium: git push -u origin master

Kopiowanie danych z github:  git clone

Ściągnięcie zmian z serwera do posiadanego już repo w folderze:  git pull

dodajemy ignorowane pliki, rozszerzenia:  echo "*.o #ignoruj wszystkie skompilowane pliki" >> .gitignore
