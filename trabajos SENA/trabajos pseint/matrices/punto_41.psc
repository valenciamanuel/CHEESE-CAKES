Algoritmo punto_41
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	
    Definir matriz1 Como Entero;
    Definir matriz2 Como Entero;
    Definir suma1, suma2, contador1, contador2, promedio1, promedio2, i, j Como Entero;
	Dimension matriz1[6,6];
	Dimension matriz2[6,6];
	
    suma1 <- 0;
    suma2 <- 0;
    contador1 <- 0;
    contador2 <- 0;
	//datos de la primera matriz
    Escribir "Ingrese los elementos de la primera matriz:";
    Para i <- 1 Hasta 5 Hacer
		
        Para j <- 1 Hasta 5 Hacer
			
            Leer matriz1[i,j];
            Si i <> j Entonces
                suma1 <- suma1 + matriz1[i,j];
                contador1 <- contador1 + 1;
            Fin Si
        Fin Para
    Fin Para
	//datos de la segunda matriz
    Escribir "Ingrese los elementos de la segunda matriz:";
    Para i <- 1 Hasta 5 Hacer
		
        Para j <- 1 Hasta 5 Hacer
			
            Leer matriz2[i,j];
            Si i <> j Entonces
                suma2 <- suma2 + matriz2[i,j];
                contador2 <- contador2 + 1;
            Fin Si
        Fin Para
    Fin Para
	
    promedio1 <- suma1 / contador1;
    promedio2 <- suma2 / contador2;
	//mostrando datos
    Si promedio1 = promedio2 Entonces
        Escribir "Los promedios enteros de los elementos fuera de la diagonal son iguales.";
    Sino
        Escribir "Los promedios enteros de los elementos fuera de la diagonal no son iguales.";
    Fin Si
Fin Algoritmo
