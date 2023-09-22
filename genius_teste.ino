#define ldg 2
#define ldy 3
#define ldr 4
#define ldb 5
#define second 1000
#define half_second 500

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldg,OUTPUT);
  pinMode(ldy,OUTPUT);
  pinMode(ldr,OUTPUT);
  pinMode(ldb,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(ldb);
  piscaled(ldg);
  piscaled(ldy);
  piscaled(ldr);
  piscaled(ldb);
  delay(half_second);
}

void piscaled(int ledGate){
  digitalWrite(ledGate,HIGH);
  delay(second);
  digitalWrite(ledGate,LOW);
  delay(half_second);
}
