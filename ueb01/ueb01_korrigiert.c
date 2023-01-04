#include <stdio.h>
int main()
{
   double Wert1 = 9.99, Wert2 = 19.99, Wert3 = 24.49;	//Der Dezimalzahl der Variable Wert2 war nicht mit einem Punkt, sondern mit einem Kommer getrennt
   double Netto, Mehrwert, Brutto;   //erster Fehler: u fehlte beim Datentyp double

   printf("\nDieses Programm berechnet aus 3 Werten ");
   printf("die Nettosumme, daraus die Mehrwertsteuer "); //Semikolon fehlte
   printf("und schliesslich den Bruttobetrag.\n");
   printf("Die drei Werte: %.2f, &.2f und %.2f\n", Wert1, Wert2, Wert3);
   Netto = Wert1 + Wert2 + Wert3;
   printf("Nettosumme : %.2f\n", Netto);	// Die Variable Netto wae nur mit einem t geschrieben
   Mehrwert = Netto * 0.19; 	//zwischen der variable Netto und der Zahl 0.19 stand nur der Buchstabe x und nicht der Multiplikator
   printf("Mehrwertsteuer: %.2f\n", Mehrwert);
   Brutto = Netto - Mehrwert;
   printf("Bruttobetrag : %.2f\n", Brutto);

   return 0;
}
