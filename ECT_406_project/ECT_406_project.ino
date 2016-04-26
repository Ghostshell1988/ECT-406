#include <SPI.h>
#include <Ethernet.h>


/******************** ETHERNET SETTINGS ********************/

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192, 168, 0, 2);            // default gateway
EthernetServer server(80);                       //server port
int mTimer1 = 10;
int mTimer2 = 10;

int inUse1 = 8;
int notInuse1 = 9;
int buttonPin1 = 2;
int val1 = 0;

int inUse2 = 6;
int notInuse2 = 7;
int buttonPin2 = 5;
int val2 = 0;

int inUse3 = 6;
int notInuse3 = 7;
int buttonPin3 = 5;
int val3 = 0;

int inUse4 = 6;
int notInuse4 = 7;
int buttonPin4 = 5;
int val4 = 0;

int inUse5 = 6;
int notInuse5 = 7;
int buttonPin5 = 5;
int val5 = 0;

int inUse6 = 6;
int notInuse6 = 7;
int buttonPin6 = 5;
int val6 = 0;

int inUse7 = 6;
int notInuse7 = 7;
int buttonPin7 = 5;
int val7 = 0;

int inUse8 = 6;
int notInuse8 = 7;
int buttonPin8 = 5;
int val8 = 0;
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

pinMode(speakerPin, OUTPUT);
Serial.begin(9600);

digitalWrite(notInuse1,HIGH);
digitalWrite(inUse1, LOW);
digitalWrite(notInuse2,HIGH);
digitalWrite(inUse2, LOW);
}

void loop()
{
    val1 = digitalRead(buttonPin1);
  val2 = digitalRead(buttonPin2);
       if(val1 == HIGH){
        digitalWrite(notInuse1, LOW);
        digitalWrite(inUse1, HIGH);
        Serial.print("Machine 1 in Use.\n");
       }
     else{
         digitalWrite(notInuse1, HIGH);
         digitalWrite(inUse1, LOW);
         Serial.print("Machine 1: Ready for Use\n");
         }
     if(val2 == HIGH){
        digitalWrite(notInuse2, LOW);
        digitalWrite(inUse2, HIGH);
        Serial.print("Machine 1 in Use.\n");
       }
     else{
         digitalWrite(notInuse2, HIGH);
         digitalWrite(inUse2, LOW);
         Serial.print("Machine 1: Ready for Use\n");
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
client.println("body {background-color:teal;");
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
if (digitalRead(buttonPin1))
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (digitalRead(buttonPin2))
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
if (digitalRead(buttonPin3))
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (digitalRead(buttonPin4))
{
client.println("     *   Not Available     *");
}
else
{
client.println("     *  Machine Available  *");
}
client.print("***********************");
client.println("     ***********************");
client.print("***********************");
client.println("     ***********************");
client.print("*  Machine 5 Status:  *");
client.print("     *  Machine 6 Status:  *<br>");
if (digitalRead(buttonPin5))
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (digitalRead(buttonPin6))
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
if (digitalRead(buttonPin7))
{
client.print("*   Not Available     *");
}
else
{
client.print("*  Machine Available  *");
}
if (digitalRead(buttonPin8))
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
