###Hint
În această problemă, nu se calculează suma divizorilor, ci suma cadourilor primite de către locatarii fiecărei case. Modul în care se determină suma cadourilor este bazat pe faptul că fiecare Elf livrează un anumit număr de cadouri la fiecare casă în funcție de numărul său.

Fiecare Elf este asignat un număr și livrează cadouri la casele care sunt divizibile exact cu numărul Elf-ului respectiv. Acest lucru se întâmplă deoarece Elf-ul respectiv vizitează doar casele a căror numerotare se împarte exact la numărul său.

De exemplu, Elf-ul 2 va livra cadouri la fiecare a doua casă (2, 4, 6, 8, etc.), iar suma cadourilor primite de fiecare casă va fi 10 * 2 (deci 20 cadouri) pentru că Elf-ul 2 livrează 10 cadouri la fiecare casă la care ajunge.

Prin urmare, când căutăm cea mai mică casă pentru care suma cadourilor este cel puțin egală cu o anumită valoare dată, verificăm casa cu casa până când găsim prima casă la care suma cadourilor îndeplinește condiția dată. Nu este vorba despre suma divizorilor în sine, ci despre cum Elf-ii livrează cadouri în funcție de divizorii numerelor caselor.