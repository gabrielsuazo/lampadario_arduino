const int NUM_CANDLES = 1;
const int NUM_BYTES_EVENT = 1;
byte event_data[NUM_BYTES_EVENT];

void encenderVela1() {
  digitalWrite(2, HIGH);
}

void apagarVela1() {
  digitalWrite(2, LOW);
}

typedef void (* GenericCommandArray)();
GenericCommandArray encenderVela[30] = {
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1,
  encenderVela1
};

GenericCommandArray apagarVela[30] = {
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1,
  apagarVela1
};

void setup() {
  Serial.begin(9600);
  

  /*LEDS son los primeros pines digitales
     Para 30 candelas son los pines 2 - 31
  */
  for (int i = 2; i < NUM_CANDLES + 2; i++) {
    pinMode(i, OUTPUT);
  }

  /*Botones son los pines digitales restantes
     y los pines analogicos si se necesitan
     En el caso de 30 candelas son los pines de 32 - 54
     y de A0 a A6
  */
  for (int i = NUM_CANDLES + 2; i < 2*NUM_CANDLES + 2; i++) {
    pinMode(i, INPUT);
    attachInterrupt(digitalPinToInterrupt(i), encenderVela[i], FALLING);
  }
  //Nota: el pin A0 tambien se puede llamar pin 54, el A1 55, y asi...

}

void loop() {
  if (readEvent(event_data, NUM_BYTES_EVENT)) {
    executeCommand(event_data);
  }
}

bool readEvent(byte* data, uint8_t dataLength) {
  if (Serial.available() >= dataLength) {
    Serial.readBytes(data, dataLength);
    return true;
  }
  return false;
}

void chequearEstado() {
  String estado = estado;
  for (int i = 2; i < NUM_CANDLES + 2; i++) {
    int estadoLED = digitalRead(i);
    if (estadoLED == HIGH) {
      estado = estado + '1';
    }
    else {
      estado = estado + '0';
    }
  }
  Serial.println(estado);
}

void executeCommand(byte* data) {
  // El bit mas fuerte da el estado (on or off)
  if (bitRead(data[0], 7) == 1) {
    encenderVela1();
  }
  else {
    apagarVela1();
  }
}
