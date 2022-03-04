
//MÓDULO AMARILLO

const int VIBRA1 = 2;
const int VIBRA2 = 3;
const int VIBRA3 = 4;
const int VIBRA4 = 5;
const int VIBRA5 = 6;
const int VIBRA6 = 7;

void setup() {
    pinMode (VIBRA1, OUTPUT);
    pinMode (VIBRA2, OUTPUT);
    pinMode (VIBRA3, OUTPUT);
    pinMode (VIBRA4, OUTPUT);
    pinMode (VIBRA5, OUTPUT);
    pinMode (VIBRA6, OUTPUT);
}

void loop() {
    digitalWrite(VIBRA1, HIGH);
      delay(250);
    digitalWrite(VIBRA1, LOW);
    digitalWrite(VIBRA2, HIGH);
       delay(250);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, HIGH);
       delay(250);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, HIGH);
       delay(250);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, HIGH);
       delay(250);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, HIGH);
       delay(250);
    digitalWrite(VIBRA6, LOW);
    digitalWrite(VIBRA1, HIGH);
    digitalWrite(VIBRA2, HIGH);
       delay(2000);
    digitalWrite(VIBRA1, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, HIGH);
    digitalWrite(VIBRA4, HIGH);
       delay(2000);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, HIGH);
    digitalWrite(VIBRA6, HIGH);
       delay(2000)
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);


    
    digitalWrite(VIBRA1, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);
      delay(500);
    digitalWrite(VIBRA1, HIGH);
    digitalWrite(VIBRA2, HIGH);
    digitalWrite(VIBRA3, HIGH);
    digitalWrite(VIBRA4, HIGH);
    digitalWrite(VIBRA5, HIGH);
    digitalWrite(VIBRA6, HIGH);
      delay(3000)
    digitalWrite(VIBRA1, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);
      delay(500);
    digitalWrite(VIBRA1, HIGH);
    digitalWrite(VIBRA2, HIGH);
    digitalWrite(VIBRA3, HIGH);
    digitalWrite(VIBRA4, HIGH);
    digitalWrite(VIBRA5, HIGH);
    digitalWrite(VIBRA6, HIGH);
      delay(3000)
    digitalWrite(VIBRA1, LOW);
    digitalWrite(VIBRA2, LOW);
    digitalWrite(VIBRA3, LOW);
    digitalWrite(VIBRA4, LOW);
    digitalWrite(VIBRA5, LOW);
    digitalWrite(VIBRA6, LOW);   
}
