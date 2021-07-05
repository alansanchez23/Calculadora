
long suma(int,int);
long resta(int,int);

void setup() {
  Serial.println(9600);

}

void loop() {
int a = 10, b = 5;
long c = 0;
long d=0;

///Llamado de las funciones 
c = suma(a,b);
d = resta(a,b);

///Impresion de los resultados
Serial.println("El resultado de la suma es: "+c);
Serial.println("El resultado de la resta es: "+d);

}

long suma(int a,int b){   ///Esta es la funcion de alan sanchez suma
long c = a+b; 
return c;
}

{
long resta(int a,int b){   ///Esta es la funcion de Miguel Gomez RESTA
long c = a-b; 
return c;
}
