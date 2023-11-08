/*
Datum :  8.11.2023
Name: Djouko Suzie

*/

#include<stdio.h>
#include<math.h>

// Funktion zur Bezeichnung der Hypotenuse
double pythagoras(double a, double b) {
	return  sqrt(a * a + b * b);
}

//Funktion zur Bezeichnung des Radius 
double konvertRadius(double c) {
	double quadratFlaeche = c * c; // Flaecheninhalt des Quadrats
	return sqrt(quadratFlaeche / M_PI); // Berechnung des Raduis
}

// Funktion zur Berechnung des Volums eines Wuerfels  
double kubusVolumen(double c) {
	return c * c * c;
}

// Funktion zur Berechnung des Volums einer Kugel
double kugelVolumen(double r) {
	return (4.0 * 3.0) * M_PI * r * r * r;

}

int main() {
	// Initialisierung der Kathente a und b als double Werte 
	double a = 1.9;
	double b = 4.2;
	//Berechnung der Hypotense mittels der Funktion
	double c = pythagoras(a, b);

	//Ausgabe
	printf("a: %lf , a Quadrat: %lf\n", a, a * a);
	printf("b: %lf , b Quadrat: %lf\n", b, b * b);
	printf("c: %lf , c Quadrat: %lf\n", c, c * c);

	//Aufruf der Funtion konvertRadius
	double r = konvertRadius(c);
	// Ausgabe des Kreisflacheinhalt
	printf("Kreisradius: %lf , Flaecheninhalt: %lf\n", r, M_PI * r * r);

	// Aufruf von kubusVolumen und kugelVolumen
	double kubus = kubusVolumen(c);
	double kugel = kugelVolumen(r);

	// Ausgabe der Beide Volumen 
	printf("Kantenlaenge : %lf , Wuerfelvolumen: %lf\n", c, kubus);
	printf("Kreisradius : %lf , Kugelvolumen: %lf\n", r, kugel);

	return 0;
}