
long suma(int,int);
long resta(int,int);

void setup() {
  Serial.println(9600);

}

void loop() {
int a = 10, b = 5;
long c = 0;
c = suma(a,b);
long d=0;
d = resta(a,b);

Serial.println("El resultado de la operaciones es: "+c);

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
