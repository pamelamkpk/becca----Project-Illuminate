
//project.cpp - Put your project code here!
//String version

#include "lights.h"
#include "project.h"

String convert(String message)
{
  String hex;
  String characters[91] = {" ","!","\"","#","$","%","&","'","(",")","*","+",",","-",".","/",
  "0","1","2","3","4","5","6","7","8","9",":",";","<","=",">","?","@",
  "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","[","\\","]","^","_","’",
  "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
  for(int i = 0; i<message.length(); i++){
	int index = 0;
	for(int a = 0; a<91; a++){
  	if(characters[a].equals("" + message.charAt(i))){
    	index = a;
    	break;
  	}
	}
	hex += intToHex(index+32);
  }
  return hex;
}

String intToHex(int num)
{
  String out = "";
  for(int i = 0; i<2; i++){
	if(num%16==0){
  	out += "0";
	}
	else if(num%16<10){
  	out += "" + (num%16);
	}
	else if(num%16 >= 10){
  	if(num%16 == 10)
    	out += "A";
  	if(num%16 == 11)
    	out += "B";
  	if(num%16 == 12)
    	out += "C";
  	if(num%16 == 13)
    	out += "D";
  	if(num%16 == 14)
    	out += "E";
  	if(num%16 == 15)
    	out += "F";
  	/*switch(num%16){
    	case 10:
      	out += "A";
      	break;
    	case 11:
      	out+="B";
      	break;
    	case 12:
      	out+="C";
      	break;
    	case 13:
      	out+="D";
      	break;

    	case 14:
      	out+="E";
      	break;

    	case 15:
      	out+="F";
      	break;

   	default:
    	break;
  	}*/
	}
	num/=16;
  }
  String hex = out.substring(1,2)+out.substring(0,1);
  return hex;
}

void displaying(String hex)
{
  for(int i = 0; i<= hex.length(); i++){
	for(int a = 0; a<2; a++){
  	String character = hex.substring(2*i+a,2*i+a+1);
  	if(character.equals("0")){
    	zero();
  	}
  	else if(character.equals("1")){
    	one();
  	}
  	else if(character.equals("2")){
    	two();
  	}
  	else if(character.equals("3")){
    	three();
  	}
  	else if(character.equals("4")){
    	four();
  	}
  	else if(character.equals("5")){
    	five();
  	}
  	else if(character.equals("6")){
    	six();
  	}
  	else if(character.equals("7")){
    	seven();
  	}
  	else if(character.equals("8")){
    	eight();
  	}
  	else if(character.equals("9")){
    	nine();
  	}
  	else if(character.equals("A")){
    	letterA();
  	}
  	else if(character.equals("B")){
    	letterB();
  	}
  	else if(character.equals("C")){
    	letterC();
  	}
  	else if(character.equals("D")){
    	letterD();
  	}
  	else if(character.equals("E")){
    	letterE();
  	}
  	else if(character.equals("F")){
    	letterF();
  	}
	}
	nextletter();
  }
  ripple();
}

void becca()
{
  letterB();
  letterE();
  letterC();
  letterC();
  letterA();
}

void ripple()
{
 for (int x = 0; x < 5; x++){
  for (int y = 0; y < 5; y++){
	leds[(x * 5) + y] = CRGB::PeachPuff;
    	FastLED.delay(50);
  }
	FastLED.delay(500);
  for (int y = 5; y >=0; y--){
	leds[x * 5 + y] = CRGB::Black;
    	FastLED.delay(50);
  }
	FastLED.delay(500);
 }
}

void letterA(){
  FastLED.setBrightness(200);
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void letterB(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}
void letterC(){
  FastLED.setBrightness(200);
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}
void letterD(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void letterE(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void letterF(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}
void zero(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void one(){
  FastLED.setBrightness(200);
  leds[7] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[17] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void two(){
  FastLED.setBrightness(200);
  leds[8] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[17] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}


void three(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void four(){
  FastLED.setBrightness(200);
  leds[8] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[14] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void five(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void six(){
  FastLED.setBrightness(200);
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void seven(){
  FastLED.setBrightness(200);
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void eight(){
  FastLED.setBrightness(200);
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
leds[13] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void nine(){
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
 
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);

}

void nextletter(){
  FastLED.setBrightness(200);
  leds[0] = CRGB:: Green;
  leds[4] = CRGB:: Green;
  FastLED.delay(100);
  leds[5] = CRGB:: Green;
  leds[9] = CRGB:: Green;
  FastLED.delay(100);
  leds[10] = CRGB:: Green;
  leds[14] = CRGB:: Green;
  FastLED.delay(100);
  leds[15] = CRGB:: Green;
  leds[19] = CRGB:: Green;
  FastLED.delay(100);
  leds[20] = CRGB:: Green;
  leds[24] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}



//project.cpp - Put your project code here!

sizeof(hex)/sizeof(hex[0]) <<< gives length of array

#include "lights.h"
#include "project.h"

String * convert(String message)
{
  String output[message.length()];
  String characters[91] = {" ","!","\"","#","$","%","&","'","(",")","*","+",",","-",".","/",
  "0","1","2","3","4","5","6","7","8","9",":",";","<","=",">","?","@",
  "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","[","\\","]","^","_","’",
  "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

  String hexadecimal[91] = {"20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "2A", "2B", "2C", "2D", "2E", "2F",
  "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "3A", "3B", "3C", "3D", "3E", "3F", "40", "41", "42", "43",
  "44", "45", "46", "47", "48", "49", "4A", "4B", "4C", "4D", "4E", "4F", "50", "51", "52", "53", "54", "55", "56", "57",
  "58", "59", "5A", "5B", "5C", "5D", "5E", "5F", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "6A", "6B",
  "6C", "6D", "6E", "6F", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "7A"};

  for(int i = 0; i<message.length(); i++){
	int index = 0;
	for(int a = 0; a<91; a++){
  	if(characters[a].equals(message.substring(i,i+1))){
    	index = a;
    	//Serial.print(index);
  	}
	}
	output[i] = hexadecimal[index];
	//output[i] = intToHex(index+32);
	Serial.println(output[i]);
  }
  return output;
}

String intToHex(int num)
{
  String out = "";
  //for(int i = 0; i<2; i++){
	if(num%16==0 || num == 0){
  	out += "0";
	}
	else if(num%16<10){
  	out += "" + (num%16);
	}
	else if(num%16 >= 10){
  	if(num%16 == 10)
    	out += "A";
  	else if(num%16 == 11)
    	out += "B";
  	else if(num%16 == 12)
    	out += "C";
  	else if(num%16 == 13)
    	out += "D";
  	if(num%16 == 14)
    	out += "E";
  	else if(num%16 == 15)
    	out += "F";
  	/*switch(num%16){
    	case 10:
      	out += "A";
      	break;
    	case 11:
      	out+="B";
      	break;
    	case 12:
      	out+="C";
      	break;
    	case 13:
      	out+="D";
      	break;

    	case 14:
      	out+="E";
      	break;

    	case 15:
      	out+="F";
      	break;

   	default:
    	break;
  	}*/
	//}
	num/=16;
	if(num%16==0 || num == 0){
  	out += "0";
	}
	else if(num%16<10){
  	out += "" + (num%16);
	}
	else if(num%16 >= 10){
  	if(num%16 == 10)
    	out += "A";
  	else if(num%16 == 11)
    	out += "B";
  	else if(num%16 == 12)
    	out += "C";
  	else if(num%16 == 13)
    	out += "D";
  	else if(num%16 == 14)
    	out += "E";
  	else if(num%16 == 15)
    	out += "F";
	}
  }
  String hexadec = out.substring(1,2)+out.substring(0,1);
  //Serial.println(hexadec);
  return hexadec;
}

void displaying(String * hex)
{
  Serial.println(sizeof(hex));
  for(int i = 0; i< sizeof(hex); i++){
	for(int a = 0; a<2; a++){
  	String character = hex[i].substring(a,a+1);
  	if(character.equals("0")){
    	zero();
  	}
  	else if(character.equals("1")){
    	one();
  	}
  	else if(character.equals("2")){
    	two();
  	}
  	else if(character.equals("3")){
    	three();
  	}
  	else if(character.equals("4")){
    	four();
  	}
  	else if(character.equals("5")){
    	five();
  	}
  	else if(character.equals("6")){
    	six();
  	}
  	else if(character.equals("7")){
    	seven();
  	}
  	else if(character.equals("8")){
    	eight();
  	}
  	else if(character.equals("9")){
    	nine();
  	}
  	else if(character.equals("A")){
    	letterA();
  	}
  	else if(character.equals("B")){
    	letterB();
  	}
  	else if(character.equals("C")){
    	letterC();
  	}
  	else if(character.equals("D")){
    	letterD();
  	}
  	else if(character.equals("E")){
    	letterE();
  	}
  	else if(character.equals("F")){
    	letterF();
  	}
	}
	nextletter();
  }
  ripple();
}

void becca()
{
  letterB();
  letterE();
  letterC();
  letterC();
  letterA();
}

void ripple()
{
 for (int x = 0; x < 5; x++){
  for (int y = 0; y < 5; y++){
	leds[(x * 5) + y] = CRGB::PeachPuff;
    	FastLED.delay(50);
  }
	FastLED.delay(500);
  for (int y = 5; y >=0; y--){
	leds[x * 5 + y] = CRGB::Black;
    	FastLED.delay(50);
  }
	FastLED.delay(500);
 }
}

void letterA(){
  FastLED.setBrightness(200);
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void letterB(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}
void letterC(){
  FastLED.setBrightness(200);
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}
void letterD(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void letterE(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void letterF(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}
void zero(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void one(){
  FastLED.setBrightness(200);
  leds[7] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[17] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void two(){
  FastLED.setBrightness(200);
  leds[8] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[17] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}


void three(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void four(){
  FastLED.setBrightness(200);
  leds[8] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[14] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void five(){
  FastLED.setBrightness(200);
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void six(){
  FastLED.setBrightness(200);
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void seven(){
  FastLED.setBrightness(200);
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void eight(){
  FastLED.setBrightness(200);
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
leds[13] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void nine(){
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
 
  FastLED.delay(1000);
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);

}

void nextletter(){
  FastLED.setBrightness(200);
  leds[0] = CRGB:: Green;
  leds[4] = CRGB:: Green;
  FastLED.delay(100);
  leds[5] = CRGB:: Green;
  leds[9] = CRGB:: Green;
  FastLED.delay(100);
  leds[10] = CRGB:: Green;
  leds[14] = CRGB:: Green;
  FastLED.delay(100);
  leds[15] = CRGB:: Green;
  leds[19] = CRGB:: Green;
  FastLED.delay(100);
  leds[20] = CRGB:: Green;
  leds[24] = CRGB:: Green;
  FastLED.delay(1000);
 
  for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}


BECCA()
Ask user for input message (Print message on console, Collect user input)
Hardcode first, replace later w/ function
Print Loading message (console “Processing your message…”) 
Convert plaintext string to ascii hex array (of strings) - Jenny 
IF hashmap doesn’t work, use array of the characters instead and calculate hex values from decimal index position
Hex = IntToHex(32+index)
https://stackoverflow.com/questions/5100718/integer-to-hex-string-in-c
template< typename T >
std::string int_to_hex( T i )
{
  std::stringstream stream;
  stream << "0x" 
         << std::setfill ('0') << std::setw(sizeof(T)*2) 
         << std::hex << i;
  return stream.str();
}
Print Loading message (console “Transmitting your message…”)
After every character (each array index), run sides()
After entire message, run ripple()
Switch case to call the right methods
Print Thank you message (console “Thanks for using Becca!”)

{“,“!”,“\"”,“#”,“$”,“%”,“&”,”'”,”(“,”)”,”*”,”+”,”,”,“-”,”.”,”/”,”0”,”1”,”2”,”3”,”4”,”5,”6”,”7”,”8”,”9”,”:”,”;”,”<”,”=”,”>”,”?”,”@”,”A”,”B”,”C”,”D”,”E”,”F”,”G”,”H”,”I”,”J”,”K”,”L”,”M”,”N”,”O”,”P”,”Q”,”R”,”S”,”T”,”U”,”V”,”W”,”X”,”Y”,”Z”,”[”,”\”,”]”,”^”,”_”,”’”,”a”,”b”,”c”,”d”,”e”,”f”,”g”,”h”,”i”,”j”,”k”,”l”,”m”,”n”,”o”,”p”,”q”,”r”,”s”,”t”,”u”,”v”,”w”,”x”,”y”,”z”}

string userInput(){
  string input;
  cout << "Type a secret message /n";
  cin >> input;
  return input;
}

stringArray intoArray(string s){
   stringArray plaintext = new stringArray[s.length()];
   for (int x = 0; x < s.length(); x++){
        plaintext[x] = s.substring(x, x + 1);
   }
return plaintext;
}


cout << “Processing your message…”;

/////////////////

{“,“!”,“\"”,“#”,“$”,“%”,“&”,”'”,”(“,”)”,”*”,”+”,”,”,“-”,”.”,”/”,”0”,”1”,”2”,”3”,”4”,”5,”6”,”7”,”8”,”9”,”:”,”;”,”<”,”=”,”>”,”?”,”@”,”A”,”B”,”C”,”D”,”E”,”F”,”G”,”H”,”I”,”J”,”K”,”L”,”M”,”N”,”O”,”P”,”Q”,”R”,”S”,”T”,”U”,”V”,”W”,”X”,”Y”,”Z”,”[”,”\”,”]”,”^”,”_”,”’”,”a”,”b”,”c”,”d”,”e”,”f”,”g”,”h”,”i”,”j”,”k”,”l”,”m”,”n”,”o”,”p”,”q”,”r”,”s”,”t”,”u”,”v”,”w”,”x”,”y”,”z”}

switch(string a)
    {
        case “0”:
            zero();
            break;

        case “1”:
            one();
            break;

        case “2”:
            two();
            break;

        case “3”:
            three();
	break;

        case “4”:
            four();
            break;

        case “5”:
            five();
            break;

        case “6”:
            six();
            break;

        case “7”:
           seven();
break;

        case “8”:
            eight();
            break;

        case “9”:
            nine();
            break;

        case “a”:
            a();
            break;

        case “b”:
            b();
break;

        case “c”:
            c();
            break;

        case “d”:
            d();
            break;

        case “e”:
            e();
            break;

        case “f”:
            f();
break;

        // operator is doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }


/////////////////////////



void display(stringArray crypto){
   for (int x = 0; x < crypto.size(); x++){
      for (int y = 0; y < crypto[x].length(); y++){
      crypto[x].substring(y, y + 1).switch()
      FASTled.delay(500);
      }
sides();
FASTled.delay(500);
   }
}


void endRipple(){
	int[] all[9];

	int one[1] = {4};
	int two[2] = {3,5};
	int three[3] = {2,6,14};
	int four[4] = {1,7,13,15};
	int five[5] = {0,8,12,16,24};
	int six[4] = {9,11,17,23};
	int seven[3] = {10,18,22};
	int eight[2] = {19,21};
	int nine[1] = {20};

	all[0] = one;
	all[1] = two;
	all[2] = three;
	all[3] = four;
	all[4] = five;
	all[5] = six;
	all[6] = seven;
	all[7] = eight;
	all[8] = nine;

	for(int i = 0; i < all.length; i++){
 	 int[] arr[all[i].length] = all[i];
  		for(int x = 0; x < arr.length; x++){
    			leds[x] = CRGB::Green;`
  	}
  	FastLED.delay(1000);

  	for(int x = 0; x < arr.length; x++){
    	leds[x] = CRGB::Black;
  	}
  	FastLED.delay(1000);
	}
}  


//Sample Code
void zero(){
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;
leds[13] = CRGB:: Green;
leds[6] = CRGB:: Green;
  FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

0
done
1
done
2
done
3
done
4
done
5
done
6
done
7
done
8
done
9
done
A
done
B
done
C
done
D
done
E
done
F
done

void two(){
  leds[8] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[17] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[23] = CRGB:: Green;
    FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void four(){
  leds[8] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[7] = CRGB:: Green;
  leds[17] = CRGB:: Green;
 leds[22] = CRGB:: Green;
    FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void five(){
  leds[1] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[3] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[21] = CRGB:: Green;
 leds[22] = CRGB:: Green;
    FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}


void six(){
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
 leds[23] = CRGB:: Green;
leds[18] = CRGB:: Green;
  leds[21] = CRGB:: Green;
 leds[22] = CRGB:: Green;

    FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void seven(){
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
  leds[13] = CRGB:: Green;
      FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void eight(){
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
leds[13] = CRGB:: Green;
  leds[18] = CRGB:: Green;
  leds[22] = CRGB:: Green;
  leds[21] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  leds[16] = CRGB:: Green;

      FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

void nine(){
  leds[3] = CRGB:: Green;
  leds[2] = CRGB:: Green;
  leds[1] = CRGB:: Green;
  leds[8] = CRGB:: Green;
  leds[6] = CRGB:: Green;
  leds[11] = CRGB:: Green;
  leds[12] = CRGB:: Green;
leds[13] = CRGB:: Green;
  leds[16] = CRGB:: Green;
  leds[23] = CRGB:: Green;
  
      FastLED.delay(1000);
	for(int i = 0; i < 25; i++){
	leds[i] = CRGB:: Black;
  }
  FastLED.delay(1000);
}

{“20“, “21”, “22”, “23”, “24”, “25”, “26”, “27”, “28”, “29”, “2A”, “2B”, “2C”, “2D”, “2E”, “2F”, “30”, “31”, “32”, “33”, “34”, “35”, “36”, “37”, “38”, “39”, “3A”, “3B”, “3C”, “3D”, “3E”, “3F”, “40”, “41”, “42”, “43”, “44”, “45”, “46”, “47”, “48”, “49”, “4A”, “4B”, “4C”, “4D”, “4E”, “4F”, “50”, “51”, “52”, “53”, “54”, “55”, “56”, “57”, “58”, “59”, “5A”, “5B”, “5C”, “5D”, “5E”, “5F”, “60”, “61”, “62”, “63”, “64”, “65”, “66”, “67”, “68”, “69”, “6A”, “6B”, “6C”, “6D”, “6E”, “6F”, “70”, “71”, “72”, “73”, “74”, “75”, “76”, “77”, “78”, “79”, “7A”} 

https://ascii.cl/


http://forum.arduino.cc/index.php?topic=261445.msg1845419#msg1845419
USER INPUT TUTORIAL 

CHAPTER 7 - QUESTION FOR USER

Now we will deal with getting information from the user. I have left this to last because we will be using some of the techniques we have already explored. The timing of a user's response is unpredictable - he or she may provide an answer immediately or not until after they have finished a telephone conversation. And we don't want this part of the code to interfere with the rest of things.

The concept here is very basic - just enough to show the principles involved. The Arduino will print a message on the Arduino Serial Monitor and then listen for a reply. While it is listening it will continue flashing the LEDs and controlling the servo.

When the reply comes it will say "Thank you" and repeat the response. It will then wait 5 seconds before asking the question again.

This chapter just deals with asking the question. We'll deal with the response in the next chapter.


We will store our question and the response in standard C/C++ strings (note the small s). A string is simply a char array with a 0 to mark the end of the text. NB this is the number 0, not the character '0' which has a number of 48.

Code: [Select]
const char question[] = "Please type some text and press ENTER";
const byte buffSize = 31;
char userResponse[buffSize];

The compiler will automatically allocate enough space for the text within double quotes followed by a 0.
The array userResponse has space for 30 characters plus a 0.

We need a constant and a variable to manage the time between a response and a question - similar to the way we managed the flashing LEDs.

Code: [Select]
const unsigned long questionInterval = 5000;
unsigned long prevResponseMillis = 0;
   
The code for askForUserInput() has to check if it is the correct time and then send the question. Importantly, it also has to check whether a response has been received so we need another variable to record that.

Code: [Select]
boolean waitingForResponse = false;

By starting with this "false" the question will be asked first time around.

And, of course, we need to start the Serial communication in setup() with

Code: [Select]
Serial.begin(9600);
   
I am using a baudrate of 9600 but you can use any value you wish as long as the Serial Monitor is set to use the same rate.

I find it useful to print the name of the program in case you have forgotten what program is uploaded onto your Arduino. It also shows that the Arduino is working up to that point in the code.

Code: [Select]
Serial.println("Starting LessonF.ino");

This is the code for askForUserInput()

Code: [Select]
if (waitingForResponse == true) {
 return;
}
if (currentMillis - prevResponseMillis >= questionInterval) {
 Serial.println(question);
 waitingForResponse = true;
}
 
If waitingForResponse is already true the function just returns without doing anything.

If waitingForResponse is false and the time has elapsed the question is printed and waitingForResponse is changed to true so we can wait for the response.

Note that, unlike the code for flashing the LEDs, the value of prevResponseMillis is not updated. That will only happen when the response is received.

Note that we could use an else clause as in 

Code: [Select]
if (waitingForResponse == true) {
 return;
}
else {
 // the rest of the code
}

but it is unnecessary because of the use of return;.

The full code at this stage is in LessonF.ino

Code: (LessonF.ino) [Select]
// LessonF.ino
// Program with servo, potentiometer, led flashes, switch buttons and question


//======for the servo==========
#include <Servo.h>
Servo myServo;
const byte servoPin = 5;
const byte servoMin = 20;
const byte servoMax = 160;
byte servoPosition = servoMin;

//======for the potentiometer===
const byte potPin = A0;
int potValue;

//======for the LEDs============
const unsigned long ledOnMillis = 300;
const unsigned long ledAbaseInterval = 500;
const unsigned long ledBbaseInterval = 1000;
unsigned long ledAInterval = ledAbaseInterval;
unsigned long ledBInterval = ledBbaseInterval;
byte ledAstate = HIGH;
byte ledBstate = HIGH;
unsigned long prevLedAMillis;
unsigned long prevLedBMillis;
unsigned long currentMillis;
const byte ledApin = 13;
const byte ledBpin = 12;
unsigned long ledAoffMillis = ledAbaseInterval;
unsigned long ledBoffMillis = ledBbaseInterval;

//======for the switch buttons===
const byte button0pin = 8;
const byte button1pin = 9;
byte button0state;
byte button1state;

//======for user question========
const char question[] = "Please type some text and press ENTER";
const unsigned long questionInterval = 5000;
unsigned long prevResponseMillis = 0;
boolean waitingForResponse = false;

//=====for user response=========
const byte buffSize = 31;
char userResponse[buffSize];


void setup() {
 myServo.attach(servoPin);
 myServo.write(servoPosition);
 
 pinMode(ledApin, OUTPUT);
 pinMode(ledBpin, OUTPUT);
 digitalWrite(ledApin, HIGH);
 digitalWrite(ledBpin, HIGH);
 
 pinMode(button0pin, INPUT_PULLUP);
 pinMode(button1pin, INPUT_PULLUP);
 
 Serial.begin(9600);
 Serial.println("Starting LessonF.ino");
 
 delay(5000);
}

void loop() {

   currentMillis = millis();

   checkButtons();
   setFlashPeriod();
   flashLedA();
   flashLedB();
   
   askForUserInput();
   getUserResponse();
   
   readPotentiometer();
   setServoPosition();
   moveServo();
}

void flashLedA() {
 if (currentMillis - prevLedAMillis >= ledAInterval) {
   prevLedAMillis += ledAInterval;
   ledAstate = ! ledAstate;
   if (ledAstate == HIGH) {
     ledAInterval = ledOnMillis;
   }
   else {
     ledAInterval = ledAoffMillis;
   }
   digitalWrite(ledApin, ledAstate);
 }
}

void flashLedB() {
 if (currentMillis - prevLedBMillis >= ledBInterval) {
   prevLedBMillis += ledBInterval;
   ledBstate = ! ledBstate;
   if (ledBstate == HIGH) {
     ledBInterval = ledOnMillis;
   }
   else {
     ledBInterval = ledBoffMillis;
   }
   digitalWrite(ledBpin, ledBstate);
 }
}

void checkButtons() {
 button0state = digitalRead(button0pin);
 button1state = digitalRead(button1pin);
}

void setFlashPeriod() {

 if (button0state == LOW && button1state == LOW) {
   return; // if both buttons are pressed do nothing
 }
 
 if (button0state == LOW) {
    ledAoffMillis = ledAbaseInterval;
    ledBoffMillis = ledAbaseInterval;
 }

 if (button1state == LOW) {
    ledAoffMillis = ledAbaseInterval >> 1;
    ledBoffMillis = ledAbaseInterval >> 1;
 }
}

void askForUserInput() {
 if (waitingForResponse == true) {
   return;
 }
 
 if (currentMillis - prevResponseMillis >= questionInterval) {
   Serial.println(question);
   waitingForResponse = true;
 }
}

void getUserResponse() {

}



CHAPTER 8 - RESPONSE FROM USER

This chapter deals with getting the response from the user. In the previous chapter we created the variable where we can save the user's response. 

It's worth taking a little time to think about the process of receiving Serial data. 

Even at 115,200 baud (about 11,000 characters per second) serial data is sent very slowly by Arduino standards so it is not a good idea to have your program hanging around waiting for data if there are other things to do.

Incoming data is stored in the Serial input buffer in the background so we don't need to react as every character arrives. The standard buffer can hold 64 characters. When your code uses Serial.read() it takes a character from the input buffer and makes room for another incoming character. If you don't take data out of the buffer before it fills up all subsequent incoming characters will be lost. This is not likely to be a problem for this project.

For this project we have no control over how many characters the user will send. S/he might send 1 or 20 (or more). How will we know that we have everything? 
   
We could keep checking if there is at least one character in the buffer with

Code: [Select]
if(Serial.available() > 0)
   
but we might accidentally check in the interval between two incoming bytes at an instant when the buffer was empty so we would incorrectly think we had everything.

The simplest reliable way to check that we have all the data is to ensure there is a special character - an end-marker - as the last thing that is sent. Obviously the end-marker must be something that would never occur in the body of the response. The code will keep checking for characters until it detects the end marker. 

At the bottom of the Arduino Serial Monitor window there is a box which probably says "No line ending". If you change it to "Carriage return" the Serial Monitor with add a carriage-return character ('\r' or 13) after the text the user enters and we can use this as our end-marker.

This all means we need variables to record what we are using as the end-marker and to keep track of how many bytes have been received so far.

Code: [Select]
const char endMarker = '\r';
byte bytesRecvd = 0;

I mentioned earlier that we don't want our getUserResponse() function to hang around waiting for the user to send a response. Instead we want it to make a quick check to see if there is a character in the buffer. If there is it should copy that character to our userResponse[] array. And if the character is a carriage-return it should do whatever is necessary when the full response has arrived.

It is probably easier to explain this process if I show the code for getUserResponse() first. It's a bit longer than the earlier pieces

Code: [Select]
if (waitingForResponse == false) {
 return;
}

if(Serial.available() == 0) {
 return;
}

char inChar = Serial.read();

if (inChar != endMarker) {
 userResponse[bytesRecvd] = inChar;
 bytesRecvd ++;
 if (bytesRecvd == buffSize) {
   bytesRecvd = buffSize - 1;
 }
}
else { // inChar is the endMarker
 waitingForResponse = false;
 userResponse[bytesRecvd] = 0;
 prevResponseMillis = currentMillis;
 // do something now that response is received
 
}
 
The first part should be familiar - it just terminates the function if the code is not waiting for a response.

The second part terminates the function if there is no data in the Serial buffer - so the program is not hanging around wasting time.

The rest of the code only applies if there is at least one character in the Serial buffer.

First it reads one character into the temporary variable inChar.
Then it tests to see if this is the end-marker. 

If it is NOT the end-marker the character is added to the userResponse array and the number of bytesRecvd is incremented.

Note the little bit of code to make sure bytesRecvd does not exceed buffSize. If that did happen data would be written all over parts of memory where it has no business being. This is a nice example of something that is unlikely to happen but would make a dreadful mess if it did.


If the received character IS the end-marker, the code changes waitingForResponse to false, adds a 0 in the next character position as the string terminator and updates prevResponseMillis to cause the code to wait before asking the question again.

Note that there is no code here to set the value of bytesRecvd back to 0 ready for the next response from the user. That is just in case other parts of the code might be interested to know how many bytes were actually received.

The best place for the code

Code: [Select]
bytesRecvd = 0;

is at the end of the function askForUserInput() - in other words immediately before the user responds.


Now we need a short digression to deal with something I forgot when setting out the original actions in Chapter 2. I have marked the place in the code with a comment. We need to do something when the response from the user has been received. So let's create a new function for that - and let's call it acknowledgeResponse(). 

But from where are we going to call that function?

One solution is to replace the comment with a call to the function. However that is not consistent with the general approach of calling all our functions from loop(). Putting the function in loop() ensures that we know it exists just by reading through loop(). So let's assume the function is called from loop().  This is the code for it - all very basic.

Code: [Select]
if (ackResponse == false) {
 return;
}
Serial.println();
Serial.println("Thank you");
Serial.print("You entered the following ");
Serial.print(bytesRecvd);
Serial.println(" bytes ");
Serial.print(" --- ");
Serial.println(userResponse);
Serial.println();

ackResponse = true;

There is a new variable here - ackResponse - which is used to ensure that acknowledgeResponse() only gets run once for every completed response. Although we already have the variable waitingForResponse, it is not suitable because it will continue to be false through several iterations of loop() and we only want this new function to be called once. This variable is set to true when the complete response is received by replacing the comment with

Code: [Select]
ackResponse = true;

and it is immediately set back to false when acknowledgeResponse() has printed its message.


This new acknowledgeResponse() function was not part of the original plan and it nicely illustrates how easy it is to add additional actions with little or no impact on the rest of the code.


The full code is in LessonG.ino - it is now too long to be included directly in this post


