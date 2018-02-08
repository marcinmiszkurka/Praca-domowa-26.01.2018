## Praca domowa

##### Notatka linux - podstawowe polecenia krok po kroku
Przejście do pulpitu : cd Pulpit/ (lub Desktop)

1. Utworzenie katalogu :
>mkdir first_repo
>cd first_repo/

2. Instalacja Git:
>git sudo apt-get update
>sudo apt-get install git

3. Sprawdzenie wersji:  
>git git --version

4. Inicjalizacja repozytorium GIT w bieżącym katalogu: 
>git init

5. Wyświetlenie zawartości aktualnego katalogu: 
>ls

6. Utworzenie dowolnego pliku tu o nazwie touch:  
>touch test.txt

7. Edycja pliku: 
>nano test.txt

8. Dodanie wszystkich plików (lub ich zmian) do repozytorium git:  
>git add .

9. Wyświetlenie listy zmian w: 
>git status

10. Konfiguracja git 
>git config --global user.email "ntwój email"
>git config --global user.name "twój login"

11. Dodaje do commita wraz z komentarzem 
>git commit -m "tworzenie nowego pliku"

12. Sprawdzenie zmian: 
>git log

13. Edycja pliku: 
>nano test.txt

14. dodanie wszystkich plików do repozytorium git: 
>git add .

15. Dodaje do commita wraz z komentarzem: 
>git commit -m "pierwsza zmiana"

16. Sprawdzenie zmian: 
>git log

17. Edycja pliku: 
>nano test.txt

18. dodanie wszystkich plików do repozytorium git: 
>git add .

19. Dodaje do commita wraz z komentarzem: 
>git commit -m "druga zmiana"

20. Dodanie do git zdalnego repozytorium: 
>git remote add origin https://github.com/nazwa_uzytkownika/test.git

21 Wysłanie zmienionych plików do zdalnego repozytorium: 
>git push -u origin master

22. Kopiowanie danych z github:  
>git clone

23. Ściągnięcie zmian z serwera do posiadanego już repo w folderze:  
>git pull

24. dodajemy ignorowane pliki, rozszerzenia:  
>echo "*.o #ignoruj wszystkie skompilowane pliki" >> .gitignore
### Dziękować za uwagę
