
long suma(int,int);
long resta(int,int);
long multi(int,int);
long division(int,int);

void setup() {
  Serial.println(9600);

}

void loop() {
int a = 10, b = 5;
long c = 0;
long d=0;
long e=0;
long f=0;

///Llamado de las funciones 
c = suma(a,b);
d = resta(a,b);
e = multi(a,b);
f = division(a,b);

///Impresion de los resultados
Serial.println("El resultado de la suma es: "+c);
Serial.println("El resultado de la resta es: "+d);
Serial.println("El resultado de la multiplicacion es: "+e);
Serial.println)"El resultado de la division es: "+f);
}

long suma(int a,int b){   ///Esta es la funcion de alan sanchez SUMA
long c = a+b; 
return c;
}

long resta(int a,int b){   ///Esta es la funcion de Miguel Gomez RESTA
long c = a-b; 
return c;
}

long multi(int a,int b){  //Esta es la función de Jorge Cuevas MULTIPLICACIÓN
  long e = a*b;
  return e;
}

long division(int a, int b){ //Esta es la función de Bautista División
  long f = a/b;
  return f;
}
