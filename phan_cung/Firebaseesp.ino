#include <FirebaseESP8266.h>
#include <Servo.h>
#include <ESP8266WiFi.h>
#define WIFI_SSID "SASUKETAMIN"
#define WIFI_PASSWORD "12345679"

#define FIREBASE_HOST "https://home-management-a9ea5-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "7m4FMgVjk38kLttefxtog6dpvWoXcEAUqJyzB4l1"

FirebaseData firebaseData;
int Light1 = 12;
int Light2 = 14;
int Light3 = 4;
int Light4 = 5;
int servo = 13;
int goc;
Servo myServo;

// Điều khiển đèn 
void LightControl();
// Điều khiển cổng
void DoorControl();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print("."); 
  }
  
  Serial.println("");
  Serial.println("connected");
  Serial.println(WiFi.localIP());
  Serial.println();

  Firebase.begin(FIREBASE_HOST,FIREBASE_AUTH);
    pinMode(Light1,OUTPUT);
    pinMode(Light2,OUTPUT);
    pinMode(Light3,OUTPUT);
    pinMode(Light4,OUTPUT);
    myServo.attach(servo);
}

void loop() {
  LightControl();
  DoorControl();
}

void LightControl(){
    if(Firebase.get(firebaseData,"/list_strings/alarm"))
  {
    if(firebaseData.dataType()=="string"){
      String alarm = firebaseData.stringData();
      if(alarm=="bật đèn"){
        digitalWrite(Light1,HIGH);
        digitalWrite(Light2,HIGH);
        digitalWrite(Light3,HIGH);
        digitalWrite(Light4,HIGH);
     }
     if(alarm=="Tắt Đèn"){
        digitalWrite(Light1,LOW);
        digitalWrite(Light2,LOW);
        digitalWrite(Light3,LOW);
        digitalWrite(Light4,LOW);
      }
      
      if(alarm=="bật đèn 1"){
        digitalWrite(Light1,HIGH);
      }
      if(alarm=="tắt đèn 1" || alarm == "Tắt Đèn 1"){
        digitalWrite(Light1,LOW);
      }
      
      if(alarm=="bật đèn 2" ){
        digitalWrite(Light2,HIGH);
      }
      if(alarm=="tắt đèn 2" || alarm == "Tắt Đèn 2"){
        digitalWrite(Light2,LOW);
      }
      
      if(alarm=="bật đèn 3"){
        digitalWrite(Light3,HIGH);
      }
      if(alarm=="tắt đèn 3" || alarm == "Tắt Đèn 3"){
        digitalWrite(Light3,LOW);
      }
      
      if(alarm=="bật đèn 4"){
        digitalWrite(Light4,HIGH);
      }
      if(alarm=="tắt đèn 4" || alarm == "Tắt Đèn 4"){
        digitalWrite(Light4,LOW);
      }

      if(alarm=="nhấp nháy"){
        digitalWrite(Light1,HIGH);
        digitalWrite(Light2,LOW);
        digitalWrite(Light3,HIGH);
        digitalWrite(Light4,LOW);    
        delay(100);

        digitalWrite(Light1,LOW);
        digitalWrite(Light2,HIGH);
        digitalWrite(Light3,LOW);
        digitalWrite(Light4,HIGH);    
        delay(100);
         
      }
    }
  }
}
void DoorControl(){
  if(Firebase.get(firebaseData,"/list_strings/alarm"))
  {
    if(firebaseData.dataType()=="string"){
      String alarm = firebaseData.stringData();
      if(alarm=="open the door"){
        myServo.write(180);
        goc = myServo.read();
        Serial.print("Goc hien tai: "); Serial.println(goc);
        delay(1000);
        myServo.write(0);
        goc = myServo.read();
        Serial.print("Goc hien tai: "); Serial.println(goc);
      }
      if(alarm=="Close the door"){
        myServo.write(0);
        goc = myServo.read();
        Serial.print("Goc hien tai: "); Serial.println(goc);
      }
    }
  }
}




//  myServo.write(0);
//  goc = myServo.read();
//  Serial.print("Goc hien tai: "); Serial.println(goc);
//  delay(500);
//  digitalWrite(Light1,HIGH);
//  
//
//  myServo.write(90);
//  goc = myServo.read();
//  Serial.print("Goc hien tai: "); Serial.println(goc);
//  delay(500);
//
//  digitalWrite(Light2,HIGH);
//  
//  myServo.write(180);
//  goc = myServo.read();
//  Serial.print("Goc hien tai: "); Serial.println(goc);
//  delay(500);
//  digitalWrite(Light3,HIGH);
//  digitalWrite(Light4,HIGH);
//
//  delay(500);
//  digitalWrite(Light1,LOW);
//  digitalWrite(Light2,LOW);
//  digitalWrite(Light3,LOW);
//  digitalWrite(Light4,LOW);
//  delay(200);
  
//  if(Firebase.get(firebaseData,"/list_strings/alarm"))
//  {
//    if(firebaseData.dataType()=="string"){
//      String alarm = firebaseData.stringData();
//      if(alarm=="bật đèn"){
//        digitalWrite(Light1,HIGH);
//        digitalWrite(Light2,HIGH);
//        digitalWrite(Light3,HIGH);
//        digitalWrite(Light4,HIGH);
      
//     }
//      if(alarm=="bật đèn 1"){
//        digitalWrite(Light1,HIGH);
//      }
//      if(alarm=="bật đèn 2"){
//        digitalWrite(Light2,HIGH);
//      }
//      if(alarm=="bật đèn 3"){
//        digitalWrite(Light3,HIGH);
//      }
//      if(alarm=="bật đèn 4"){
//        digitalWrite(Light4,HIGH);
//      }
//    }
//  }
//  // put your main code here, to run repeatedly:
//  if(Firebase.get(firebaseData,"/List_lights/light1"))
//  {
//    if(firebaseData.dataType()=="string"){
//      String light1 = firebaseData.stringData();
//      if(light1=="1"){
////        Serial.println("Light1: open");
////        digitalWrite(Light1,HIGH);
//        digitalWrite(Light1,HIGH);
//        delay(15);
//        digitalWrite(Light1,LOW);
//        delay(15);
//      } else if(light1 == "0"){
//        Serial.println("Light1: close");
//        digitalWrite(Light1,LOW);
//      }
//    }
//  }
//
//  if(Firebase.get(firebaseData,"/List_lights/light2"))
//  {
//    if(firebaseData.dataType()=="string"){
//      String light2 = firebaseData.stringData();      
//      if(light2=="1"){
////        Serial.println("Light2: open");
////        digitalWrite(Light2,HIGH);
//        digitalWrite(Light2,HIGH);
//        delay(15);
//        digitalWrite(Light2,LOW);
//        delay(15);
//      } else if(light2 == "0"){
//        Serial.println("Light2: close");
//        digitalWrite(Light2,LOW);
//      }
//    }
//  }
//
//  if(Firebase.get(firebaseData,"/List_lights/light3"))
//  {
//    if(firebaseData.dataType()=="string"){
//      String light3 = firebaseData.stringData();
//      if(light3=="1"){
////        Serial.println("Light3: open");
////        digitalWrite(Light3,HIGH);
//        digitalWrite(Light3,HIGH);
//        delay(15);
//        digitalWrite(Light3,LOW);
//        delay(15);
//      } else if(light3 == "0"){
//        Serial.println("Light3: close");
//        digitalWrite(Light3,LOW);
//      }
//    }
//  }
//
//  if(Firebase.get(firebaseData,"/List_lights/light4"))
//  {
//    if(firebaseData.dataType()=="string"){
//      String light4 = firebaseData.stringData();
//      if(light4=="1"){
////        Serial.println("Light4: open");
////        digitalWrite(Light4,HIGH);
//        digitalWrite(Light4,HIGH);
//        delay(15);
//        digitalWrite(Light4,LOW);
//        delay(15);
//      } else if(light4 == "0"){
//        Serial.println("Light4: close");
//        digitalWrite(Light4,LOW);
//      }
//    }
//  }
