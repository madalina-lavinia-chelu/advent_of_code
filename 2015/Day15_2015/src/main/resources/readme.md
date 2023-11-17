   
#####1. Proprietățile Ingredientelor:
*Butterscotch: capacitate=−1,durabilitate=−2,gust=6,textura˘=3,calorii=8capacitate=−1,durabilitate=−2,gust=6,textura˘=3,calorii=8
*Cinnamon: capacitate=2,durabilitate=3,gust=−2,textura˘=−1,calorii=3capacitate=2,durabilitate=3,gust=−2,textura˘=−1,calorii=3

#####2. Alegerea Cantităților:
Presupunem că alegem 44 lingurițe de Butterscotch și 56 lingurițe de Cinnamon (suma este 100).

#####3. Calculul Scorurilor Individuale pentru Cantitățile Alese:
* Butterscotch: scor_butterscotch=max(0,44×−1)+max(0,44×−2)+max(0,44×6)+max(0,44×3)=0+0+264+132=396scor_butterscotch=max(0,44×−1)+max(0,44×−2)+max(0,44×6)+max(0,44×3)=0+0+264+132=396
* Cinnamon: scor_cinnamon=max(0,56×2)+max(0,56×3)+max(0,56×−2)+max(0,56×−1)=112+168+0+0=280scor_cinnamon=max(0,56×2)+max(0,56×3)+max(0,56×−2)+max(0,56×−1)=112+168+0+0=280

#####4. Calculul Scorului Total al Cookie-ului:
Scor_total=scor_butterscotch×scor_cinnamon=396×280=110880scor_total=scor_butterscotch×scor_cinnamon=396×280=110880

 Deci, scorul total al cookie-ului pentru aceste cantități alese este 110880. În implementarea algoritmului, acest proces de alegere a cantităților și calcul al scorurilor ar fi iterat pentru toate combinațiile posibile pentru a găsi cea mai mare valoare a scorului total.