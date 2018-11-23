//conversion refrance
void setup(){
    Serial.begin(115200); // Begin serial protocol.
}

void loop(){
    //wait until data is available.
    if(Serial.available() > 0){
        String message = Serial.readString();  // read the user inputed string.
        
        Serial.println(message);  

        char characterThatWeWant = message.charAt(1);  //  read the specific char from obtained string.

        Serial.println(characterThatWeWant);
        
        int numThatWeWant =  convertFronChToInt(characterThatWeWant); // convert from char type to int type.

        Serial.println(numThatWeWant);
    }
}

int convertFronChToInt(char characterThatWeWant){  // function for conversion of the data type.
    
    int y = int(characterThatWeWant); // convert from char to ASCCI.
    int x = y - 48;     // conver from ASCCI to  int.
    return x;       // return the value.
}