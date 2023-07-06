/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombres: Angello Gabriel Mansilla Dieguez, Christian Emmanuel Solorzano Ralda, Pablo David Hernandez Ajiataz.
 * Carnet: 2022380, 2022323, 2022472.
 * Proyecto: Mapa De Guatemala.
*/

#include <Wire.h>
#include <PCF8574.h>



#define ALTAVERAPAZ 0 
#define BAJAVERAPAZ 1
#define CHIMALTENANGO 2
#define CHIQUIMULA 3
#define GUATEMALA 4
#define ELPROGRESO 5
#define ESCUINTLA 6


#define HUHUETENANGO 0
#define IZABAL 1
#define JALAPA 2
#define JUTIAPA 3
#define PETEN 4
#define QUETZALTENANGO 5
#define QUICHE 6

#define RETALHULEU 0
#define SACATEPEQUEZ 1
#define SANMARCOS 2
#define SANTAROSA 3
#define SOLOLA 4
#define SUCHITEPEQUEZ 5
#define TOTONICAPAN 6

#define ZACAPA 2
#define BUZZER 3

long Departgen;


PCF8574 I2C1;
PCF8574 I2C2;
PCF8574 I2C3;

void setup() {
  I2C1.begin(0x20);
  I2C2.begin(0x22);
  I2C3.begin(0x24);
  
  pinMode(ZACAPA,OUTPUT);
  pinMode(BUZZER,OUTPUT);
  Serial.begin(9600);



  
}

void loop() {
  
  Departgen = random(1,22);




  switch(Departgen)
  {
    case(1):
    I2C1.write(ALTAVERAPAZ, HIGH);
    Serial.println("1");
    Departgen = 0;
    break;

    case(2):
    I2C1.write(BAJAVERAPAZ, HIGH);
    Serial.println("2");
    Departgen = 0;
    break;

    case(3):
    I2C1.write(CHIMALTENANGO, HIGH);
     Serial.println("3");
     Departgen = 0;
    break;

    case(4):
    I2C1.write(CHIQUIMULA, HIGH);
     Serial.println("4");
     Departgen = 0;
    break;

    case(5):
    I2C1.write(GUATEMALA, HIGH);
     Serial.println("5");
     Departgen = 0;
    break;

    case(6):
    I2C1.write(ELPROGRESO, HIGH);
     Serial.println("6");
     Departgen = 0;
    break;

    case(7):
    I2C1.write(ESCUINTLA, HIGH);
     Serial.println("7");
     Departgen = 0;
    break;

    case(8):
    I2C2.write(HUHUETENANGO, HIGH);
    Serial.print("8");
    Departgen = 0;
    if (Serial.available())
    {
      long data = Serial.read();
          if(data == '8')
      {
        return Departgen;
        }
    
    }
    
    break;

    case(9):
    I2C2.write(IZABAL, HIGH);
     Serial.println("9");
     Departgen = 0;
    break;

    case(10):
    I2C2.write(JALAPA, HIGH);
    Serial.println("10");
    Departgen = 0;
    break;

    case(11):
    I2C2.write(JUTIAPA, HIGH);
    Serial.println("11");
    Departgen = 0;
    break;

    case(12):
    I2C2.write(PETEN, HIGH);
    Serial.println("12");
    Departgen = 0;
    break;

    case(13):
    I2C2.write(QUETZALTENANGO, HIGH);
    Serial.println("13");
    Departgen = 0;
    break;

    case(14):
    I2C2.write(QUICHE, HIGH);
    Serial.println("14");
    Departgen = 0;
    break;

    case(15):
    I2C3.write(RETALHULEU, HIGH);
    Serial.println("15");
    Departgen = 0;
    break;

    case(16):
    I2C3.write(SACATEPEQUEZ, HIGH);
    Serial.println("16");
    Departgen = 0;
    break;

    case(17):
    I2C3.write(SANMARCOS, HIGH);
    Serial.println("17");
    Departgen = 0;
    break;

    case(18):
    I2C3.write(SANTAROSA, HIGH);
    Serial.println("18");
    Departgen = 0;
    break;

    case(19):
    I2C3.write(SOLOLA, HIGH);
    Serial.println("19");
    Departgen = 0;
    break;

    case(20):
    I2C3.write(SUCHITEPEQUEZ, HIGH);
    Serial.println("20");
    Departgen = 0;
    break;

    case(21):
    I2C3.write(TOTONICAPAN, HIGH);
    Serial.println("21");
    Departgen = 0;
    break;
    
    case(22):
    digitalWrite(ZACAPA, HIGH);

   Serial.println("22"); 
       Departgen = 0;
   break;
   default:
   break;
    
  }

































    
  }
