#include <SPI.h>
#include <Ethernet.h>


/******************** ETHERNET SETTINGS ********************/

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192, 168, 0, 2);            // default gateway
EthernetServer server(80);                       //server port
int mTimer1 = 10;
int mTimer2 = 10;

int inUse1 = 22;
int notInuse1 = 23;
int buttonPin1 = 38;
int val1 = LOW;
int state1 = 0;

int inUse2 = 24;
int notInuse2 = 25;
int buttonPin2 = 39;
int val2 = LOW;
int state2 = 0;

int inUse3 = 26;
int notInuse3 = 27;
int buttonPin3 = 40;
int val3 = LOW;
int state3 = 0;

int inUse4 = 28;
int notInuse4 = 29;
int buttonPin4 = 41;
int val4 = LOW;
int state4 = 0;

int inUse5 = 30;
int notInuse5 = 31;
int buttonPin5 = 42;
int val5 = LOW;
int state5 = 0;

int inUse6 = 32;
int notInuse6 = 33;
int buttonPin6 = 43;
int val6 = LOW;
int state6 = 0;

int inUse7 = 34;
int notInuse7 = 35;
int buttonPin7 = 44;
int val7 = LOW;
int state7 = 0;

int inUse8 = 36;
int notInuse8 = 37;
int buttonPin8 = 45;
int val8 = LOW;
int state8 = 0;

int counter = 0;
int speakerPin = 9;


void setup()
{
Ethernet.begin(mac,ip);                         // initialize Ethernet device
server.begin();                                // start to listen for clients
pinMode(inUse1, OUTPUT);
pinMode(notInuse1, OUTPUT);
pinMode(buttonPin1, INPUT);

pinMode(inUse2, OUTPUT);
pinMode(notInuse2, OUTPUT);
pinMode(buttonPin2, INPUT);

pinMode(inUse3, OUTPUT);
pinMode(notInuse3, OUTPUT);
pinMode(buttonPin3, INPUT);

pinMode(inUse4, OUTPUT);
pinMode(notInuse4, OUTPUT);
pinMode(buttonPin4, INPUT);

pinMode(inUse5, OUTPUT);
pinMode(notInuse5, OUTPUT);
pinMode(buttonPin5, INPUT);

pinMode(inUse6, OUTPUT);
pinMode(notInuse6, OUTPUT);
pinMode(buttonPin6, INPUT);

pinMode(inUse7, OUTPUT);
pinMode(notInuse7, OUTPUT);
pinMode(buttonPin7, INPUT);

pinMode(inUse8, OUTPUT);
pinMode(notInuse8, OUTPUT);
pinMode(buttonPin8, INPUT);

pinMode(speakerPin, OUTPUT);
Serial.begin(9600);

}

void loop()
{
  val1 = digitalRead(buttonPin1);
  val2 = digitalRead(buttonPin2);
  val3 = digitalRead(buttonPin3);
  val4 = digitalRead(buttonPin4);
  val5 = digitalRead(buttonPin5);
  val6 = digitalRead(buttonPin6);
  val7 = digitalRead(buttonPin7);
  val8 = digitalRead(buttonPin8);
     if(val1 == HIGH && state1 == 0){
        state1 = 1;
        }
     
     else if(val1 == HIGH && state1 == 1){
        state1 = 0;
     }
     
     if(val2 == HIGH && state2 == 0){
        state2 = 1;
      }
     
     else if(val2 == HIGH && state2 == 1){
        state2 = 0;
     }
  
     if(val3 == HIGH && state3 == 0){
        state3 = 1;
     }
     
     else if(val3 == HIGH && state3 == 1){
        state3 = 0;
     }
     if(val4 == HIGH && state4 == 0){
        state4 = 1;
        }
     
     else if(val4 == HIGH && state4 == 1){
        state4 = 0;
     }
     
     if(val5 == HIGH && state5 == 0){
        state5 = 1;
      }
     
     else if(val5 == HIGH && state5 == 1){
        state5 = 0;
     }
  
     if(val6 == HIGH && state6 == 0){
        state6 = 1;
     }
     
     else if(val6 == HIGH && state6 == 1){
        state6 = 0;
     }
     if(val7 == HIGH && state7 == 0){
        state7 = 1;
        }
     
     else if(val7 == HIGH && state7 == 1){
        state7 = 0;
     }
     
     if(val8 == HIGH && state8 == 0){
        state8 = 1;
      }
     
     else if(val8 == HIGH && state8 == 1){
        state8 = 0;
     }
  

     
     if(state1 == 1){
        digitalWrite(notInuse1, LOW);
        digitalWrite(inUse1, HIGH);
        Serial.print("Machine 1 in Use.\n");
       }
       else{
         digitalWrite(notInuse1, HIGH);
         digitalWrite(inUse1, LOW);
         Serial.print("Machine 1: Ready for Use\n");
       }
     if(state2 == 1){
        digitalWrite(notInuse2, LOW);
        digitalWrite(inUse2, HIGH);
        Serial.print("Machine 2 in Use.\n");
       }
     else{
         digitalWrite(notInuse2, HIGH);
         digitalWrite(inUse2, LOW);
         Serial.print("Machine 2: Ready for Use\n");
         }
     if(state3 == 1){
        digitalWrite(notInuse3, LOW);
        digitalWrite(inUse3, HIGH);
        Serial.print("Machine 3 in Use.\n");
       }
     else{
         digitalWrite(notInuse3, HIGH);
         digitalWrite(inUse3, LOW);
         Serial.print("Machine 3: Ready for Use\n");
         }
          if(state4 == 1){
        digitalWrite(notInuse4, LOW);
        digitalWrite(inUse4, HIGH);
        Serial.print("Machine 4 in Use.\n");
       }
       else{
         digitalWrite(notInuse4, HIGH);
         digitalWrite(inUse4, LOW);
         Serial.print("Machine 4: Ready for Use\n");
       }
     if(state5 == 1){
        digitalWrite(notInuse5, LOW);
        digitalWrite(inUse5, HIGH);
        Serial.print("Machine 5 in Use.\n");
       }
     else{
         digitalWrite(notInuse5, HIGH);
         digitalWrite(inUse5, LOW);
         Serial.print("Machine 5: Ready for Use\n");
         }
     if(state6 == 1){
        digitalWrite(notInuse6, LOW);
        digitalWrite(inUse6, HIGH);
        Serial.print("Machine 6 in Use.\n");
       }
     else{
         digitalWrite(notInuse6, HIGH);
         digitalWrite(inUse6, LOW);
         Serial.print("Machine 6: Ready for Use\n");
         }
     if(state7 == 1){
        digitalWrite(notInuse7, LOW);
        digitalWrite(inUse7, HIGH);
        Serial.print("Machine 7 in Use.\n");
       }
     else{
         digitalWrite(notInuse7, HIGH);
         digitalWrite(inUse7, LOW);
         Serial.print("Machine 7: Ready for Use\n");
       }
     if(state8 == 1){
        digitalWrite(notInuse8, LOW);
        digitalWrite(inUse8, HIGH);
        Serial.print("Machine 8 in Use.\n");
       }
     else{
         digitalWrite(notInuse8, HIGH);
         digitalWrite(inUse8, LOW);
         Serial.print("Machine 8: Ready for Use\n");
         }
      




        
EthernetClient client = server.available();    // look for the client

// send a standard http response header

client.println("HTTP/1.1 200 OK");
client.println("Content-Type: text/html");
client.println("Connnection: close");
client.println();

/* 
This portion is the webpage which will be
sent to client web browser one can use html , javascript
and another web markup language to make particular layout 
*/

client.println("<!DOCTYPE html>");      //web page is made using html
client.println("<html>");
client.println("<head>");
client.println("<title>ECT 406</title>");
client.println("<meta http-equiv=\"refresh\" content=\"1\">");

/*
The above line is used to refresh the page in every 1 second
This will be sent to the browser as the following HTML code:
<meta http-equiv="refresh" content="1">
content = 1 sec i.e assign time for refresh 
*/
client.println("</center>");
client.println("</head>");
client.println("<body>");
client.println("<style>");
client.println("body {background-color:tan;");
client.println("h3 (color:white;)");
client.println("</style>");
client.println("<center>");
client.println("<h1>* ECT 406  *</h1>");
client.println("<h2>* L.A.N.S. *</h2>");
client.println("</center>");
client.println("<pre>");
client.println("<h3>");
client.println("<center>");
client.print("***********************");
client.println("     ***********************");
client.print("*  Machine 1 Status:  *");
client.print("     *  Machine 2 Status:  *<br>");
if (state1 == 1)
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (state2 ==1)
{
client.println("     *   Not Available     *");
}
else
{
client.println("     *  Machine Available  *");
}
client.print("***********************");
client.println("     ***********************");
client.println("");
client.println("");
client.print("***********************");
client.println("     ***********************");
client.print("*  Machine 3 Status:  *");
client.print("     *  Machine 4 Status:  *<br>");
if (state3 == 1)
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (state4 == 1)
{
client.println("     *   Not Available     *");
}
else
{
client.println("     *  Machine Available  *");
}
client.print("***********************");
client.println("     ***********************");
client.println("");
client.println("");
client.print("***********************");
client.println("     ***********************");
client.print("*  Machine 5 Status:  *");
client.print("     *  Machine 6 Status:  *<br>");
if (state5 == 1)
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (state6 == 1)
{
client.println("     *   Not Available     *");
}
else
{
client.println("     *  Machine Available  *");
}
client.print("***********************");
client.println("     ***********************");
client.println("");
client.println("");
client.print("***********************");
client.println("     ***********************");
client.print("*  Machine 7 Status:  *");
client.print("     *  Machine 8 Status:  *<br>");
if (state7 == 1)
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (state8 == 1)
{
client.println("     *   Not Available     *");
}
else
{
client.println("     *  Machine Available  *");
}
client.print("***********************");
client.println("     ***********************");
client.println("</center>");
client.println("</pre>");
client.println("</h3>");
client.println("</body>");
client.println("</html>");

delay(1000);         // giving time to receive the data

/*
The following line is important because it will stop the client
and look for the new connection in the next iteration i.e
EthernetClient client = server.available();
*/
client.stop();



}
