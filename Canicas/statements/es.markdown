# Descripción

Julio tiene una extraña obsesión por las canicas y los números primos. Él tiene una colección con canicas que tienen impresos todos los números primos desde $A$ hasta $B$.

Siendo la persona extraña que es, Julio decidió meter todas sus canicas a una bolsa. Si Julio saca exactamente $N$ canicas, ¿de cuántas formas puede sacar Julio $N$ canicas de la bolsa?

# Entrada

En la primera línea $A$ y $B$, el rango de las canicas de Julio. En la siguiente línea, $Q$, la cantidad de preguntas que se harán. En las siguiente $Q$ líneas, un entero $N_i$, la cantidad de canicas que saca Julio de la bolsa.

Se asegura que $N_i$ es menor o igual a la cantidad de primos entre $A$ y $B$ y que la cantidad de escoger las canicas no excede $10^9$.

# Salida

$Q$ líneas respondiendo de cuántas formas puede sacar Julio $N_i% canicas de la bolsa.

# Ejemplo

||input
1 120
5
1
12
18
23
30
||output
30
86493225
86493225
2035800
1
||end

# Límites

$2 \leq A \leq B \leq 10^4$
$ 0 \leq N \leq cantidad de primos entre A y B$
