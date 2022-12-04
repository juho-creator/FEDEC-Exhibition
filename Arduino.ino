//블루투스 모듈
#include <SoftwareSerial.h>
SoftwareSerial HC05(3,2);

  
//물 펌프1 정의
int WP1_a = 11;
int WP1_b = 10;


//물 펌프2 정의
int WP2_a=7;
int WP2_b=6;


//물 펌프3 정의
int WP3_a=9;
int WP3_b=8;


//For parsing
#define MAX_VALS 4
char*token;
uint8_t idx;
char *pszValues[MAX_VALS];


//Declaring variable 
int humidity,temperature,cnt,a;


//입출력 정의
void setup( )
{
 
  Serial.begin(9600);
  HC05.begin(9600);
  pinMode(WP1_a, OUTPUT);
  pinMode(WP1_b, OUTPUT);
  pinMode(WP2_a, OUTPUT);
  pinMode(WP2_b, OUTPUT);
  Serial.println("Setup Mode");
 
}



void loop( )
{
 //Receiving String text with delimiter
  String WholeData="";
  while(HC05.available()){
    char input1=(char)HC05.read();
    WholeData+=input1;   
  }
  
//Converting String into char_array
int WholeData_len = WholeData.length() + 1; //Storing length of WholeData

char WholeData_array[WholeData_len];  //Declaring+designating a char array

WholeData.toCharArray(WholeData_array, WholeData_len); //Converting String and storing into designated char array


//Parsing the data
    idx = 0;
    token = strtok( WholeData_array, ";" );
    while( token != NULL ) 
    {
        //Serial.println( token );
        if( idx < MAX_VALS )
            pszValues[idx++] = token;
                         
        token = strtok( NULL, ";" );
        
    }
    //Storing the data into two seperate variables
    float temperature = atof( pszValues[0] );
    float humidity = atof( pszValues[1] );

 
 

    // 온도,습도,거리,적외선 출력 (테스트용)
    Serial.println("");
    Serial.print("\ttemperature : ");
    Serial.print(temperature,1);
    Serial.print("\thumidity : ");
    Serial.print(humidity,1);
    Serial.print("%");
    Serial.print("\tcnt : ");
    Serial.print(cnt,1);

   
    //만약 손이 센서의 10cm 범위 이내일 경우, 습도가 50%미만일때 화장품을 분사하라

      //습도가 높을때
      if (temperature>10 && humidity>70){
    
        if(cnt==2){
          //.5초 동안 화장품1 분사
          Serial.print("\tSpray toner");
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, HIGH);
          delay(3000);
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, LOW);
          cnt=0;          
        }

        else if(cnt==1){
          Serial.println("\tSpray moisturizer");
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, HIGH);
          delay(1000);
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, LOW);
          cnt+=1;
        }
        
         else if(cnt==0){
          Serial.println("\tSpray sunscreen");
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, HIGH);
          delay(2000);
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, LOW);
          cnt+=1;
        }      
       }
       
       
      //습도가 낮을때
        else if (temperature>10 && humidity<=70){
    
        if(cnt==2){
          //.5초 동안 화장품1 분사
          Serial.print("\tSpray toner");
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, HIGH);
          delay(3000);
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, LOW);
          cnt=0;          
        }

        else if(cnt==1){
          Serial.println("\tSpray moisturizer");
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, HIGH);
          delay(1000);
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, LOW);
          cnt+=1;
        }
        
         else if(cnt==0){
          Serial.println("\tSpray sunscreen");
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, HIGH);
          delay(2000);
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, LOW);
          cnt+=1;
        }      
       }

      //온도가 높을때
      else if (temperature>25){
              if(cnt==2){
          //.5초 동안 화장품1 분사
          Serial.print("\tSpray toner");
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, HIGH);
          delay(3000);
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, LOW);
          cnt=0;          
        }

        else if(cnt==1){
          Serial.println("\tSpray moisturizer");
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, HIGH);
          delay(1000);
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, LOW);
          cnt+=1;
        }
        
         else if(cnt==0){
          Serial.println("\tSpray sunscreen");
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, HIGH);
          delay(2000);
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, LOW);
          cnt+=1;
        }  
       
     }


     //온도가 낮을때
     else if (temperature<=9 && humidity<70){
          if(cnt==2){
          //.5초 동안 화장품1 분사
          Serial.print("\tSpray toner");
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, HIGH);
          delay(3000);
          digitalWrite(WP1_a, LOW);
          digitalWrite(WP1_b, LOW);
          cnt=0;          
        }

        else if(cnt==1){
          Serial.println("\tSpray moisturizer");
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, HIGH);
          delay(1000);
          digitalWrite(WP2_a, LOW);
          digitalWrite(WP2_b, LOW);
          cnt+=1;
        }
        
         else if(cnt==0){
          Serial.println("\tSpray sunscreen");
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, HIGH);
          delay(2000);
          digitalWrite(WP3_a, LOW);
          digitalWrite(WP3_b, LOW);
          cnt+=1;
        }  
      }
}
   
     


