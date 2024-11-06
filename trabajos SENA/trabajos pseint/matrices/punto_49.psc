Algoritmo punto_49
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
    Definir matriz Como Entero;
    Definir suma, promedio Como Real;
    Definir encontrado Como Logico;
	Dimension matriz[3,3];
    encontrado <- Falso;
	
	//promedio en la matriz1
    Para fila <-1 Hasta 3 Hacer
		
        Para columna <- 1 Hasta 3 Hacer
			
            Escribir "Ingrese el valor para la posición (", fila, ",", columna, "): ";
            Leer matriz[fila, columna];
            suma <- suma + matriz[fila, columna];
        FinPara
    FinPara
	
    promedio <- suma / 9 ; 
	//promedio en la matriz2
    Para fila <- 1 Hasta 3 Hacer
		
        Para columna <- 1 Hasta 3 Hacer
			
            Si matriz[fila, columna] = promedio Entonces
                encontrado <- Verdadero;
            FinSi
        FinPara
        Si encontrado Entonces
        FinSi
    FinPara
	//mostrando resultados
    Si encontrado Entonces
        Escribir "El promedio ", promedio, " está almacenado en la matriz.";
    Sino
        Escribir "El promedio ", promedio, " no está almacenado en la matriz.";
    FinSi
FinAlgoritmo
