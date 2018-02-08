# Sortowanie bąbelkowe 

(ang. bubble sort) prostametoda sortowania o złożoności czasowej i pamięciowej.
Polega na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności, jeżeli zaburza ona porządek, w jakim się sortuje tablicę. Sortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.


# Sortowanie przez wybieranie
(selection sort ) Sortowanie te polega na wyszukaniu najmniejszego elementu z całej tablicy i wstawieniu go na następny element posortowanej tablicy. Gdy najmniejszy element zamienimy na największy, wówczas tablica będzie posortowana od największego do najmniejszego elementu. 
Przykład

  void Sortowanie( int tab[], int size )
  {
      int k;
      for( int i = 0; i < size; i++ )
      {
          k = i;
          for( int j = i + 1; j < size; j++ )
          if( tab[ j ] < tab[ k ] )
               k = j;
          
          swap( tab[ k ], tab[ i ] );
      }
  }



# Sortowanie przez wstawianie 

(ang. Insert Sort, Insertion Sort) – jeden z najprostszych algorytmów sortowania, którego zasada działania odzwierciedla sposób w jaki ludzie ustawiają karty – kolejne elementy wejściowe są ustawiane na odpowiednie miejsca docelowe. Jest efektywny dla niewielkiej liczby elementów. Pomimo tego, że jest znacznie mniej wydajny, posiada pewne zalety:liczba wykonanych porównań jest zależna od liczby inwersji w permutacji, dlatego algorytm jest wydajny dla danych wstępnie posortowanych, jest wydajny dla zbiorów o niewielkiej liczebności, jest stabilny. 
