#Sortowanie bąbelkowe 

(ang. bubble sort) prostametoda sortowania o złożoności czasowej i pamięciowej.
Polega na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności, jeżeli zaburza ona porządek, w jakim się sortuje tablicę. Sortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.


#Sortowanie przez wybieranie
(selection sort ) jedna z prostszych metod sortowania. Polega na wyszukaniu elementu mającego się znaleźć na żądanej pozycji i zamianie miejscami z tym, który jest tam obecnie. Operacja jest wykonywana dla wszystkich indeksów sortowanej tablicy. Algorytm przedstawia się następująco: wyszukaj minimalną wartość z tablicy spośród elementów od i do końca tablicy zamień wartość minimalną, z elementem na pozycji i gdy zamiast wartości minimalnej wybierana będzie maksymalna, wówczas tablica będzie posortowana od największego do najmniejszego elementu.
Algorytm jest niestabilny. Przykładowa lista to: [2a,2b,1] → [1,2b,2a] (gdzie 2b=2a)


#Sortowanie przez wstawianie 

(ang. Insert Sort, Insertion Sort) – jeden z najprostszych algorytmów sortowania, którego zasada działania odzwierciedla sposób w jaki ludzie ustawiają karty – kolejne elementy wejściowe są ustawiane na odpowiednie miejsca docelowe. Jest efektywny dla niewielkiej liczby elementów. Pomimo tego, że jest znacznie mniej wydajny, posiada pewne zalety:liczba wykonanych porównań jest zależna od liczby inwersji w permutacji, dlatego algorytm jest wydajny dla danych wstępnie posortowanych, jest wydajny dla zbiorów o niewielkiej liczebności, jest stabilny. 
