1. Escribir una función a la cual se le envían un arreglo de flotantes con las componentes de
   un vector y el respectivo tamaño N, y la función retorne la magnitud de dicho vector.
   Ejemplo de uso:
   float a[]={3,4,5};
   float m=Magnitud(a,3);
   printf(“La magnitud del vector es %f”,pp);
   //en pantalla aparece El producto punto entre los dos vectores es 7.071


2. Escribir una función a la cual se le envíe un arreglo de flotantes, su tamaño y dos valores
   flotantes (mínimo y máximo), y la función retorne cuantos valores del arreglo están en el
   rango indicado.
   Ejemplo de uso:
   float Datos[]={8.5,3.0,6.8};
   int s;
   s=ValoresEnRango(Datos,3,2.0,6.0);
   printf(“La cantidad de datos entre 2 y 4 es %d”,s);
   //en pantalla aparece La cantidad de datos entre 2 y 4 es 2


3. Escribir un programa en lenguaje C que permita hacer una votación de hasta 10
   candidatos, al inicio deberá preguntar por la cantidad de candidatos y luego pedirá los
   nombres de los candidatos y luego preguntará por la cantidad de votantes, por cada
   votante preguntara por su respectivo voto (un número que identifica a cada candidato) y
   al final mostrará un recuento de los votos por cada candidato.
   Ejemplo de Uso:
   Cantidad de candidatos: 3
   Nombre Candidato 1:Juan
   Nombre Candidato 2:Pedro
   Nombre Candidato 3: Maria
   Cantidad de votantes: 4
   Voto 1 (1. Juan 2. Pedro 3. Maria):1
   Voto 2 (1. Juan 2. Pedro 3. Maria):1
   Voto 3(1. Juan 2. Pedro 3. Maria):3
   Voto 4(1. Juan 2. Pedro 3. Maria):1
   Resumen votación:
   Candidato 1: 3 votos
   Candidato 2: 0 votos.
   Candidato 3: 1 Voto.


4. Escribir un programa utilizando arreglos en Arduino que tome 10 valores de voltaje cada
   20 milisegundos por la entrada A0, luego calcule la media y la desviación estándar y la
   transmita por el puerto serial.


5. Escribir una función a la cual se le envían un arreglo de flotantes con las componentes de
   un vector y el respectivo tamaño N, y la función retorne la magnitud de dicho vector.
   Ejemplo de uso:
   float a[]={3,4,5};
   float m=Magnitud(a,3);
   printf(“La magnitud del vector es %f”,pp);
   //en pantalla aparece El producto punto entre los dos vectores es 7.071



6. Escribir una función a la cual se le envíe una cadena y un carácter la función retorne la
   cantidad de veces que aparece dicho carácter dentro de la cadena.


7. Escribir una función a la cual se le envíen tres arreglos bidimensionales de enteros de
   máximo10x10, las dimensiones de los arreglos (se asume que los tres arreglos tienen las
   mismas dimensiones, y al regresar en el tercer arreglo están copiadas las filas de los
   primeros dos arreglos intercaladas.


8. Escribir un programa al que se le indique el valor de la resistencia y el programa que pida
   tres cadenas con los colores de las bandas de una resistencia y el programa indique el
   valor de la resistencia.


9. Consultar en internet las ecuaciones para calcular la recta que mejor de ajusta a una serie
   datos por mínimos cuadrados y escribir una función a la cual se le envían tres arreglos, uno
   con los valores de x, otro con los valores de y en el último la función retorna dos valores:
   el valor de (b- corte con el eje y) y el valor de m (pendiente de la recta). El valor de retorno
   será un flotante con el coeficiente de correlación.


10. Elija uno de las funciones pedidas en el taller y construya una librería con esta y construya
    un proyecto usando la librería y el main respectivo (similar a como se explicó en la clase de
    construcción de librerías).