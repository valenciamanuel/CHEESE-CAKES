Proceso punto_27
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	
	//definiendo variables
	Definir mat1,mat2 , f,c,contadormat1,contadormat2  Como Entero;
	Dimension mat1[4,5];
	Dimension mat2[4,5];
	contadormat1<-0;
	contadormat2<-0;
	//generano los datos de la mattriz1 aleatoriamnete
	Escribir "Generando los datos de la matriz 1.";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
			mat1[f,c]<-azar(50)+1;//sacando los numeros al azar
		FinPara
	FinPara
	//generano los datos de la mattriz2 aleatoriamnete
	Escribir "Generando los datos de la matriz 2.";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
			mat2[f,c] <- azar(50)+1;
		FinPara
	FinPara
	
	//mostrando los datos de la matriz1
	Escribir "Datos de la matriz 1";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <-0 hasta 4 con paso 1 hacer		
			Escribir Sin Saltar mat1[f,c] ," -  ";
		FinPara
		Escribir "  ";//espacio  de linea
	FinPara
	//mostrando los datos de la matriz2
	Escribir "Datos de la matriz 2";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
			Escribir Sin Saltar mat2[f,c] ," -  ";
		FinPara
		Escribir "  ";
	FinPara
	//comparacion de primos matriz2
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
	si mat1[f,c] mod 10 = 9  Entonces
		contadormat1 <- contadormat1 + 1 ;
	sino si mat1[f,c] mod 10 =  2 Entonces
		contadormat1 <- contadormat1 + 1 ;
		
	sino si mat1[f,c] mod 10 =  3 Entonces
			contadormat1 <- contadormat1 + 1 ;
			
			
		sino  si mat1[f,c] mod 10 =5 Entonces
				
				contadormat1 <- contadormat1 + 1 ;
				
			sino si  mat1[f,c] mod 10 = 7 Entonces
					contadormat1 <- contadormat1 + 1 ;
				sino si mat1[f,c] mod 10 = 1 entonces
						contadormat1 <- contadormat1 + 1 ;
					FinSi
					
					
				FinSi
			FinSi
		FinSi
	FinSi
FinSi
FinPara
FinPara
//comparacion de primos matriz2
Para f <- 0 hasta 3 con paso 1 hacer   
	Para c <- 0 hasta 4 con paso 1 hacer		
		si mat2[f,c] mod 10 = 9  Entonces
			contadormat2 <- contadormat2 + 1 ;
		sino si mat2[f,c] mod 10 =  2 Entonces
				contadormat2 <- contadormat2 + 1 ;
				
			sino si mat2[f,c] mod 10 =  3 Entonces
					contadormat2 <- contadormat2 + 1 ;
					
					
				sino  si mat2[f,c] mod 10 =5 Entonces
						
						contadormat2 <- contadormat2 + 1 ;
						
					sino si  mat2[f,c] mod 10 = 7 Entonces
							contadormat2 <- contadormat2 + 1 ;
						sino si mat2[f,c] mod 10 = 1 entonces
								contadormat2 <- contadormat2 + 1 ;
							FinSi
							
							
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
FinPara

		

	si contadormat1=contadormat2 Entonces
		Escribir "la matriz 1 tiene la misma cantidad de primos que la matriz 2";
	sino 
		si contadormat1> contadormat2 Entonces
			escribir "la matriz 1 tiene mas primos que la matriz 2";//la matriz1 es mayor a la 2
		SiNo
			si contadormat2>contadormat1 Entonces
				Escribir "la matriz 2 tiene mas primos que la matriz 1";//la matriz 2 es mayor a la 1
			FinSi
		FinSi
	FinSi
	Escribir "la matriz 1 tiene ", contadormat1, " numeros primos";//mostando la cantidad de primos
	Escribir "la matriz 2 tiene ", contadormat2, " numeros primos";
	
FinProceso
