#include <Servo.h>

float ref_vol = 4.94;
float v_gau25 = 2.5;   
float vpgau   = 0.018;
Servo servo1;

int n=0;
int o=0;
double t=0;

int a=45;
int b=37;
int c=49;
int d=53;
int e=41;
int f=43;
int g=39;
int h=47;
int i=51;
int J=38;
int K=44;
int L=36;
int M=46;
int N=40;
int O=50;
int P=42;
int Q=52;
int R=48;

int v=50;


 
void setup() {
  Serial.begin(9600);                //シリアル通信のデータ転送レートを設定しポート開放
  Serial.println("--- Started ---"); //スタート表示   
  servo1.attach(13);
  servo1.write(0);
  pinMode(36,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(42,OUTPUT);
  pinMode(44,OUTPUT);
  pinMode(46,OUTPUT);
  pinMode(48,OUTPUT);
  pinMode(50,OUTPUT);
  pinMode(52,OUTPUT);
  pinMode(37,OUTPUT);
  pinMode(39,OUTPUT);
  pinMode(41,OUTPUT);
  pinMode(43,OUTPUT);
  pinMode(45,OUTPUT);
  pinMode(47,OUTPUT);
  pinMode(49,OUTPUT);
  pinMode(51,OUTPUT);
  pinMode(53,OUTPUT);

//ENRGY RIGHT START UP PROGRAM
  
  

  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  digitalWrite(i,HIGH);
  digitalWrite(J,HIGH);
  digitalWrite(K,HIGH);
  digitalWrite(L,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(N,HIGH);
  digitalWrite(O,HIGH);
  digitalWrite(P,HIGH);
  digitalWrite(Q,HIGH);
  digitalWrite(R,HIGH);
  
  delay(200);
  
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,LOW);
  digitalWrite(i,LOW);
  digitalWrite(J,LOW);
  digitalWrite(K,LOW);
  digitalWrite(L,LOW);
  digitalWrite(M,LOW);
  digitalWrite(N,LOW);
  digitalWrite(O,LOW);
  digitalWrite(P,LOW);
  digitalWrite(Q,LOW);
  digitalWrite(R,LOW);

  delay(200);

  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  digitalWrite(i,HIGH);
  digitalWrite(J,HIGH);
  digitalWrite(K,HIGH);
  digitalWrite(L,HIGH);
  digitalWrite(M,HIGH);
  digitalWrite(N,HIGH);
  digitalWrite(O,HIGH);
  digitalWrite(P,HIGH);
  digitalWrite(Q,HIGH);
  digitalWrite(R,HIGH);
  
  delay(200);
  
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,LOW);
  digitalWrite(i,LOW);
  digitalWrite(J,LOW);
  digitalWrite(K,LOW);
  digitalWrite(L,LOW);
  digitalWrite(M,LOW);
  digitalWrite(N,LOW);
  digitalWrite(O,LOW);
  digitalWrite(P,LOW);
  digitalWrite(Q,LOW);
  digitalWrite(R,LOW);


  delay(200);

  

  
  digitalWrite(i,HIGH);
  digitalWrite(R,HIGH);
  delay(v);
  digitalWrite(h,HIGH);
  digitalWrite(Q,HIGH);
  delay(v);
  digitalWrite(g,HIGH);
  digitalWrite(P,HIGH);
  delay(v);
  digitalWrite(f,HIGH);
  digitalWrite(O,HIGH);
  delay(v);
  digitalWrite(e,HIGH);
  digitalWrite(N,HIGH);
  delay(v);
  digitalWrite(d,HIGH);
  digitalWrite(M,HIGH);
  delay(v);
  digitalWrite(c,HIGH);
  digitalWrite(L,HIGH);
  delay(v);
  digitalWrite(b,HIGH);
  digitalWrite(K,HIGH);
  delay(v);
  digitalWrite(a,HIGH);
  digitalWrite(J,HIGH);
  delay(v);


  digitalWrite(i,LOW);
  digitalWrite(R,LOW);
  delay(v);
  digitalWrite(h,LOW);
  digitalWrite(Q,LOW);
  delay(v);
  digitalWrite(g,LOW);
  digitalWrite(P,LOW);
  delay(v);
  digitalWrite(f,LOW);
  digitalWrite(O,LOW);
  delay(v);
  digitalWrite(e,LOW);
  digitalWrite(N,LOW);
  delay(v);
  digitalWrite(d,LOW);
  digitalWrite(M,LOW);
  delay(v);
  digitalWrite(c,LOW);
  digitalWrite(L,LOW);
  delay(v);
  digitalWrite(b,LOW);
  digitalWrite(K,LOW);
  delay(v);
  digitalWrite(a,LOW);
  digitalWrite(J,LOW);
  delay(v);




  digitalWrite(i,HIGH);
  digitalWrite(R,HIGH);
  delay(v);
  digitalWrite(h,HIGH);
  digitalWrite(Q,HIGH);
  delay(v);
  digitalWrite(g,HIGH);
  digitalWrite(P,HIGH);
  delay(v);
  digitalWrite(f,HIGH);
  digitalWrite(O,HIGH);
  delay(v);
  digitalWrite(e,HIGH);
  digitalWrite(N,HIGH);
  delay(v);
  digitalWrite(d,HIGH);
  digitalWrite(M,HIGH);
  delay(v);
  digitalWrite(c,HIGH);
  digitalWrite(L,HIGH);
  delay(v);
  digitalWrite(b,HIGH);
  digitalWrite(K,HIGH);
  delay(v);
  digitalWrite(a,HIGH);
  digitalWrite(J,HIGH);
  delay(v);


  digitalWrite(i,LOW);
  digitalWrite(R,LOW);
  delay(v);
  digitalWrite(h,LOW);
  digitalWrite(Q,LOW);
  delay(v);
  digitalWrite(g,LOW);
  digitalWrite(P,LOW);
  delay(v);
  digitalWrite(f,LOW);
  digitalWrite(O,LOW);
  delay(v);
  digitalWrite(e,LOW);
  digitalWrite(N,LOW);
  delay(v);
  digitalWrite(d,LOW);
  digitalWrite(M,LOW);
  delay(v);
  digitalWrite(c,LOW);
  digitalWrite(L,LOW);
  delay(v);
  digitalWrite(b,LOW);
  digitalWrite(K,LOW);
  delay(v);
  digitalWrite(a,LOW);
  digitalWrite(J,LOW);
  delay(v);

}
void loop() {
  static int num=0;
  float voltage =  (analogRead(A0) / 1024.0) * ref_vol;
  //Serial.print("voltage = ");                           
  //Serial.println(voltage);                              
  float v_s = voltage - 0.05;                           
  float v_n = voltage + 0.05;                           

  if (v_gau25 > v_n) {                 
    o=0;    
    n=n+1;
    delay(10);
    
      servo1.write(40);
      delay(100);
      servo1.write(0);
      delay(100);
      
  }
  if (v_gau25 < v_s) { //2.5V未満ならS極
    n=0;
    o=o+1;
    delay(10);
  }
    Serial.print(n); //反応秒数・非反応秒数表示
    Serial.print(","); //反応秒数・非反応秒数表示
    Serial.println(o); //反応秒数・非反応秒数表示
}
