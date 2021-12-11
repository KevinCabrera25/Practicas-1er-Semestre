Algoritmo BattleRoyale
	
	//Se crea la estructura
	Definir Quimica Como Entero
	Definir Fisica Como Entero
	Definir Algebra Como Entero
	Definir Geometria Como Entero
	Definir Nombre Como Caracter
	
	//Se asignan valores a la estructura
	Quimica <- 0
	Fisica <- 0
	Algebra <- 0
	Geometria <- 0
	Nombre <- " "
	
	//Declaración de variables globales
	Definir MedallaQuimica, MedallaFisica, MedallaAlgebra, MedallaGeometria Como Caracter
	Definir UltimoQuimica, UltimoFisica, UltimoAlgebra, UltimoGeometria Como Caracter
		
	Escribir "Llamada a la función Asignacion"
	Escribir "Llamada a la función Comparacion"
	Escribir "Llamada a la función Impresion"
	
FinAlgoritmo

SubProceso Asignacion
	//Asignacion de Jugadores en cada espacio de la estructura
	Nombre0 <- Karen
	Nombre1 <- Alejandro
	Nombre2 <- AngelJacinto
	Nombre3 <- Dylan
	Nombre4 <- Ricardo
	Nombre5 <- Josue
	Nombre6 <- Yuss
	Nombre7 <- Ferchus
	Nombre8 <- Kuvassi
	Nombre9 <- AngelUriel
	Nombre10 <- Shasho
	Nombre11 <- Isra
	Nombre12 <- Pato
	Nombre13 <- Chilo
	Nombre14 <- JP
	Nombre15 <- Eric
	Nombre16 <- Rodrigo
	Nombre17 <- Abraham
	Nombre18 <- Kevin
	

	//Ciclo para analisis de cada contendiente
	Para i <- 0 Hasta 19 Con Paso 1 Hacer
		//Asignacion de habilidades de cada contendiente
		Quimica = azar (10)
		Fisica = azar (10)
		Algebra = azar (10)
		Geometria = azar (10)
	FinPara
	
	//Impresion de datos de cada contendiente
	Para i <- 0 Hasta 19 Con Paso 1 Hacer
		Escribir "Nombre del Contendiente: ", Nombre
		Escribir "Estadisticas en Quimica: ", Quimica
		Escribir "Estadisticas en Fisica: ", Fisica
		Escribir "Estadisticas en Algebra: ", Algebra
		Escribir "Estadisticas en Geometria: ", Geometria 
						
	Fin Para
		
FinSubProceso

SubProceso Comparacion
	//Declaracion de variables de control
	Definir delantera Como Entero
	Definir ultimo Como Entero
	Definir desempate Como Entero
	//Asignacion de variables de control
	delantera <- 0
	ultimo <- 10
	desempate <- 0
	
	//Compara Quimica
	Para i <- 0 Hasta 19 Con Paso 1 Hacer
		Si Quimica > delantera Entonces
			MedallaQuimica = Nombre //Remplaza nombres
			delantera = Quimica //Se guarda al jugador que va ganando
		Fin Si
		
		//Condicion de desempate
		Si Quimica == delantera Entonces
			desempate = azar (1)
			Si desempate == 1 Entonces //Si gana el segundo contendiente o no
				MedallaQuimica = Nombre //Remplaza nombres
				delantera = Quimica	//Se guarda al jugador que va ganando
			Fin Si
		Fin Si
		
		Si Quimica < ultimo Entonces //Compara al ultimo lugar
			UltimoQuimica = Nombre //Remplaza nombres
			ultimo = Quimica //Se guarda al jugador que va perdiendo
		Fin Si
		
		
	Fin Para
	
	//Se reinician las variables de control
	delantera = 0
	ultimo = 10
	
	//Compara Fisica
	Para i <- 0 Hasta 19 Con Paso 1 Hacer
		Si Fisica > delantera Entonces
			MedallaFisica = Nombre //Remplaza nombres
			delantera = Fisica //Se guarda al jugador que va ganando
		Fin Si
		
		//Condicion de desempate
		Si Fisica == delantera Entonces
			desempate = azar (1)
			Si desempate == 1 Entonces //Si gana el segundo contendiente o no
				MedallaFisica = Nombre //Remplaza nombres
				delantera = Fisica	//Se guarda al jugador que va ganando
			Fin Si
		Fin Si
		Si Fisica < ultimo Entonces //Compara al ultimo lugar
			UltimoFisica = Nombre //Remplaza nombres
			ultimo = Fisica //Se guarda al jugador que va perdiendo
		Fin Si
		
	Fin Para
		
	//Se reinician las variables de control
	delantera = 0
	ultimo = 10
	
	//Compara Algebra
	Para i <- 0 Hasta 19 Con Paso 1 Hacer
		Si Algebra > delantera Entonces
			MedallaAlgebra = Nombre //Remplaza nombres
			delantera = Algebra //Se guarda al jugador que va ganando
		Fin Si
		
		//Condicion de desempate
		Si Algebra == delantera Entonces
			desempate = azar (1)
			Si desempate == 1 Entonces //Si gana el segundo contendiente o no
				MedallaAlgebra = Nombre //Remplaza nombres
				delantera = Algebra	//Se guarda al jugador que va ganando
			Fin Si
		Fin Si
		
		Si Algebra < ultimo Entonces //Compara al ultimo lugar
			UltimoAlgebra = Nombre //Remplaza nombres
			ultimo = Algebra //Se guarda al jugador que va perdiendo
		Fin Si
		
	Fin Para
		
	//Se reinician las variables de control
	delantera = 0
	ultimo = 10
	
	//Compara Geometria
	Para i <- 0 Hasta 19 Con Paso 1 Hacer
		Si Geometria > delantera Entonces
			MedallaGeometria = Nombre //Remplaza nombres
			delantera = Geometria //Se guarda al jugador que va ganando
		Fin Si
		
		//Condicion de desempate
		Si Geometria == delantera Entonces
			desempate = azar (1)
			Si desempate == 1 Entonces //Si gana el segundo contendiente o no
				MedallaGeometria = Nombre //Remplaza nombres
				delantera = Geometria	//Se guarda al jugador que va ganando
			Fin Si
		Fin Si
		
		Si Geometria < ultimo Entonces //Compara al ultimo lugar
			UltimoGeometria = Nombre //Remplaza nombres
			ultimo = Geometria //Se guarda al jugador que va perdiendo
		Fin Si
		
	Fin Para
	
	
FinSubProceso

SubProceso Impresion
	
	//Se nombran a los ganadores llamando a las variables globales
	Escribir "El Contendiente ", MedallaQuimica, " ha ganado la medalla de oro en Quimica" 
	Escribir "El Contendiente ", MedallaFisica, " ha ganado la medalla de oro en Fisica"
	Escribir "El Contendietne ", MedallaAlgebra, " ha ganado la medalla de oro en Algebra"
	Escribir "El Contendiente ", MedallaGeometria, " ha ganado la medalla de oro en Geometria"
	
	//Se nombran a los ultimos lugares llamando a las variables globales
	Escribir "El Contendiente ", UltimoQuimica, " ha quedado en ultimo lugar en la prueba de Quimica"
	Escribir "El Contendiente ", UltimoFisica, " ha quedado en ultimo lugar en la prueba de Fisica"
	Escribir "El Contendiente ", UltimoAlgebra, " ha quedado en ultimo lugar en la prueba de Algebra"
	Escribir "El Contendiente ", UltimoGeometria, " ha quedado en ultimo lugar en la prueba de Geometria"
	
FinSubProceso
