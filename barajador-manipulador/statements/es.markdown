# Descripción

Santy se encuentra en Estados Unidos después de haber perdido su trabajo. Con su ritmo de gastos, es probable que se quede sin dinero pronto. Por esta razón, ha decidido unirse a juegos de blackjack clandestinos en un intento por duplicar sus fondos.

Aunque Santy no es un entusiasta de los juegos de azar, prefiere tener el control en todo momento. Por ello, ha aprendido a manipular la baraja mientras la mezcla, asegurándose de que el juego esté inclinado a su favor.

Al comenzar una partida, el crupier solicita a todos los jugadores que mezclen las cartas. Dado que Santy es el último en mezclar, aprovecha esta oportunidad para ordenar la baraja de manera que le beneficie en cada ronda, o al menos le permita anticipar los resultados.

Sin embargo, justo antes de comenzar el juego, el crupier mezcla las cartas nuevamente. Esta vez, el crupier toma las dos cartas del medio de la baraja y las coloca al principio y al final. En otras palabras, si el orden original de las cartas era $[3, 9, 10, 5, 1, 7]$, el nuevo orden de la baraja será $[10, 3, 9, 1, 7, 5]$.

El crupier repite este proceso $M$ veces, lo que coloca a Santy en una situación complicada, ya que no está seguro de cuándo debería apostar alto y cuándo no. Tu tarea consiste en ayudar a Santy a descifrar el orden resultante de la baraja después de que el crupier haya completado todas las mezclas.

# Entrada

En primer lugar, un entero positivo par $N$, que indica el número de cartas en la baraja. A continuación, se presenta un arreglo de enteros positivos $A$, que representa el orden inicial de la baraja. En la última línea, se da el valor de $M$, que corresponde al número de veces que el crupier mezcla la baraja.

# Salida

El estado final de la baraja.

# Ejemplo

||input
6
3 9 10 5 1 7
1
||output
10 3 9 1 7 5
||input
10
1 2 3 4 5 6 7 8 9 10
3
||output
3 4 5 1 2 9 10 6 7 8
||input
6
8 7 3 1 4 2
3
||output
8 7 3 1 4 2
||input
4
2 2 2 2
4
||output
2 2 2 2
||input
6
1 2 3 4 5 6
5
||output
2 3 1 6 4 5
||end

# Límites

- (20 puntos) $1 \leq N \leq 1000$, $1 \leq M \leq 1000$, $1 \leq A_i \leq 10^6$
- (20 puntos) $1 \leq N \leq 1000$, $1 \leq M \leq 1000$, $1 \leq A_i \leq 10^{12}$
- (20 puntos) $1 \leq N \leq 10^6$, $1 \leq M \leq 1000$, $1 \leq A_i \leq 10^6$
- (20 puntos) $1 \leq N \leq 1000$, $1 \leq M \leq 10^{12}$, $1 \leq A_i \leq 10^6$
- (20 puntos) $1 \leq N \leq 10^6$, $1 \leq M \leq 10^{12}$, $1 \leq A_i \leq 10^{12}$
