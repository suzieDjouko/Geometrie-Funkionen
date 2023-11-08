# U04
## Geometrie-Funktionen um Dreieck, Quadrat, Kreis, Würfel und Kugel
Der Satz des Pythagoras:

Im rechtwinkligen Dreieck ist die Fläche des Quadrates
über der Hypotenuse gleich der Summe der Flächen
der Quadrate über den Katheten.
Schreiben Sie ein Programm, das die Länge der
Hypotenuse berechnet, wenn die Katheten gegeben sind.
• Alle Ausgaben finden im Hauptprogramm statt.
• Initialisieren Sie die Variablen für die Katheten
a = 1.9 und b = 4.2 als double-Werte.

a) Schreiben Sie eine Funktion pythagoras(), die die
Katheten a und b als Parameter entgegen nimmt
und die Länge der Hypotenuse zurückgibt.

• Geben Sie das Ergebnis aus (die spitzen Klammern sind Platzhalter für die Werte):
a: <a>, a Quadrat: <aquadrat>
b: <b>, b Quadrat: <bquadrat>
c: <c>, c Quadrat: <cquadrat>
b) Schreiben Sie eine Funktion konvertRadius(). Aufrufparameter ist die
Kantenlänge c des Hypotenusen-Quadrates aus Aufgabe a). Rückgabe ist der
Radius r einer Kreisfläche mit identischem Flächeninhalt wie das Quadrat. Der
Radius muss berechnet und als double-Wert
zurückgegeben werden.
• Ausgabe:
Kreisradius: <r> Flaecheninhalt: <kflaeche>
a²
b²
c²


c) Schreiben Sie zwei weitere Funktionen:
• kubusVolumen() zur Berechnung des Volumen des Würfels mit der
Kantenlänge c
• kugelVolumen() zur Berechnung des Volumens
der Kugel mit dem Radius r. Die Ergebnisse
sollen als double-Werte zurückgegeben werden.
• Ausgabe:
Kantenlaenge: <c> Wuerfelvolumen: <kubusvolumen>
Kreisradius : <r> Kugelvolumen : <kugelvolumen>

Hinweise:
• Sie können für PI die in math.h definierte Konstante M_PI verwenden.
• Das Volumen einer Kugel berechnet sich so: V = 4/3 * PI * r * r * r.
• Die Wurzel-Funktion sqrt() ist Teil der math-Bibliothek (#include <math.h> sowie
Compiler-Option -lm am Ende der Befehlszeile).
• Vermeiden Sie die Integer-Division und ihre Folgen.
Es dürfen keine globalen Variablen verwendet werden.
Das Programm muss fehlerfrei und ohne Warnungen mit folgendem Aufruf übersetzbar sein:
gcc -Wall -o <Name der ausführbaren Datei> <Name der Quellcode Datei> -lm
