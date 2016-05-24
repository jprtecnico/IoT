const int portaGnd = 4;
const int portaOut = 3;
const int portaVcc = 2;

int contador = 0;

void setup(){
   pinMode(portaGnd,OUTPUT);
   pinMode(portaOut,INPUT);
   pinMode(portaVcc,OUTPUT);
  
   digitalWrite(portaGnd,LOW);
   digitalWrite(portaOut,LOW);
   digitalWrite(portaVcc,HIGH);  
   Serial.begin(9600)
}  

void loop (){
   int x = digitalRead(portaOut);
   
   if(x == HIGH) {
      Serial.print('Movimento detectado');
      Serial.println(contador);
     contador++; 
   }   
   
   delay(10);
} 