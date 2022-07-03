# Descripción

Ludwig es el encargado de organizar las fases de eliminación del torneo de Smash Bros más grande del año, Online Mashing International (OMI). Los organizadores le pidieron que haga las eliminaciones de la siguiente manera:

1. De las personas que sigan en el torneo, escoge a $2^n$ personas de forma aleatoria y has un sub-torneo. Un sub-torneo es una llave de eliminación donde $2^n-1$ personas son eliminadas y una persona puede seguir jugando.
2. Repite el proceso hasta que solo quede un jugador, el ganador del torneo.

Ayuda a Ludwig a encontrar la menor cantidad de sub-torneos que tiene que hacer para poder declarar al ganador del OMI.


# Entrada

$N$, la cantidad de jugadores inscritos al torneo.

# Salida

La menor cantidad de sub-torneos que tiene que hacer para poder declarar al ganador del OMI.

# Ejemplo

||input
1
||output
0
||end

# Límites

$1 \leq N \leq 10^{18}$