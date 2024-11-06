Proceso punto_45
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	
 
	definir matriz1, matriz2 Como Entero;
    Dimension matriz1[5, 5];
    Dimension matriz2[5, 5];
    Definir promMayor1, promMayor2 Como Entero;
    Definir sumaMayor1, sumaMayor2, contMayor1, contMayor2 Como Entero;
    Definir fila, columna Como Entero;
	
   //encontrando numero mayor
    Para fila <- 0 Hasta 4 Con Paso 1 Hacer
        sumaMayor1 <- 0;
        contMayor1 <- 0;
        Para columna <- 0 Hasta 4 Con Paso 1 Hacer
            Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la matriz 1: ";
            Leer matriz1[fila, columna];
            Si matriz1[fila, columna] > sumaMayor1 Entonces
                sumaMayor1 <- matriz1[fila, columna];
            FinSi
        FinPara
    FinPara
//encontrando numero mayor
    Para fila <- 0 Hasta 4 Con Paso 1 Hacer
        sumaMayor2 <- 0;
        contMayor2 <- 0;
        Para columna <- 0 Hasta 4 Con Paso 1 Hacer
            Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la matriz 2: ";
            Leer matriz2[fila, columna];
            Si matriz2[fila, columna] > sumaMayor2 Entonces
                sumaMayor2 <- matriz2[fila, columna];
            FinSi
        FinPara
    FinPara
	
    
//asignacion con trunc
	promMayor1 <- Trunc(sumaMayor1 / 5);
	promMayor2 <- Trunc(sumaMayor2 / 5);

	

    Si promMayor1 = promMayor2 Entonces
        Escribir "El promedio entero de los números mayores de cada fila de la primera matriz es igual al promedio entero de los números mayores de cada fila de la segunda matriz.";
    SiNo
        Escribir "El promedio entero de los números mayores de cada fila de la primera matriz no es igual al promedio entero de los números mayores de cada fila de la segunda matriz.";
    FinSi
FinProceso

