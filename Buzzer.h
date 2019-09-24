#ifndef BUZZER_H
#define BUZZER_H

#define IO_MCU_BUZZER_PIN OUTPUT
unsigned int PROCESS_BUZZER;

class Buzzer{
  public:
  Buzzer(int BUZZ){
  PROCESS_BUZZER = BUZZ; //
  pinMode(BUZZ, IO_MCU_BUZZER_PIN); //
    };

 void begin(){
  tone(PROCESS_BUZZER, 1000); //
  delay(200); //
 }

 void alarmRing(){
  tone(PROCESS_BUZZER, 2000); //
  delay(100); //
  noTone(PROCESS_BUZZER); //
  delay(100); //
  tone(PROCESS_BUZZER, 2000); //
  delay(100); //
  noTone(PROCESS_BUZZER); //
  delay(100); //
  tone(PROCESS_BUZZER, 2000); //
  delay(100); //
  noTone(PROCESS_BUZZER); //
  delay(300); //
 }

 void cellRing(){
  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  tone(PROCESS_BUZZER, 1500); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //

  noTone(PROCESS_BUZZER); //
 }

 void phoneRing(){
  tone(PROCESS_BUZZER, 2000); //
  delay(50); //
  tone(PROCESS_BUZZER, 500); //
  delay(50); //
 }

 void cussRing(long){
  tone(PROCESS_BUZZER, 2000);
 }

 void fireRing(){
  
 }

 void policeRing(){
  tone(PROCESS_BUZZER, 100); //
  delay(10); //
  tone(PROCESS_BUZZER, 100); //
 }

 void ambulanceRing(){
  tone(PROCESS_BUZZER, 2000); //
  delay(500); //
  tone(PROCESS_BUZZER, 1000); //
  delay(500); //
 }

 void gasServiceRing(){
  
 }

 void end(){
  noTone(PROCESS_BUZZER); //
 }

  private:
  protected:
  
};

#endif
