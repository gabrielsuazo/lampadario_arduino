const int NUM_CANDLES = 30;
const int NUM_BYTES_EVENT = 1;
byte receive_data[NUM_BYTES_EVENT];
byte send_data[NUM_BYTES_EVENT];


void encenderVelaGeneric(int candle_id, bool notify) {
  int pin = candle_id + 2;
  if (digitalRead(pin) == LOW) {
    digitalWrite(pin, HIGH);
    if (notify) {
      send_data[0] = 128 + candle_id;
      Serial.write(send_data, NUM_BYTES_EVENT);
    }
  }
}

void apagarVelaGeneric(int candle_id) {
  int pin = candle_id + 2;
  if (digitalRead(pin) == HIGH) {
    digitalWrite(pin, LOW);
  }
}

void encenderNotifyVela1() {
  encenderVelaGeneric(0, true);
}

void apagarVela1() {
  apagarVelaGeneric(0);
}

void encenderNotifyVela2() {
  encenderVelaGeneric(1, true);
}

void apagarVela2() {
  apagarVelaGeneric(1);
}

void encenderNotifyVela3() {
  encenderVelaGeneric(2, true);
}

void apagarVela3() {
  apagarVelaGeneric(2);
}

void encenderNotifyVela4() {
  encenderVelaGeneric(3, true);
}

void apagarVela4() {
  apagarVelaGeneric(3);
}

void encenderNotifyVela5() {
  encenderVelaGeneric(4, true);
}

void apagarVela5() {
  apagarVelaGeneric(4);
}

void encenderNotifyVela6() {
  encenderVelaGeneric(5, true);
}

void apagarVela6() {
  apagarVelaGeneric(5);
}

void encenderNotifyVela7() {
  encenderVelaGeneric(6, true);
}

void apagarVela7() {
  apagarVelaGeneric(6);
}

void encenderNotifyVela8() {
  encenderVelaGeneric(7, true);
}

void apagarVela8() {
  apagarVelaGeneric(7);
}

void encenderNotifyVela9() {
  encenderVelaGeneric(8, true);
}

void apagarVela9() {
  apagarVelaGeneric(8);
}

void encenderNotifyVela10() {
  encenderVelaGeneric(9, true);
}

void apagarVela10() {
  apagarVelaGeneric(9);
}

void encenderNotifyVela11() {
  encenderVelaGeneric(10, true);
}

void apagarVela11() {
  apagarVelaGeneric(10);
}

void encenderNotifyVela12() {
  encenderVelaGeneric(11, true);
}

void apagarVela12() {
  apagarVelaGeneric(11);
}

void encenderNotifyVela13() {
  encenderVelaGeneric(12, true);
}

void apagarVela13() {
  apagarVelaGeneric(12);
}

void encenderNotifyVela14() {
  encenderVelaGeneric(13, true);
}

void apagarVela14() {
  apagarVelaGeneric(13);
}

void encenderNotifyVela15() {
  encenderVelaGeneric(14, true);
}

void apagarVela15() {
  apagarVelaGeneric(14);
}

void encenderNotifyVela16() {
  encenderVelaGeneric(15, true);
}

void apagarVela16() {
  apagarVelaGeneric(15);
}

void encenderNotifyVela17() {
  encenderVelaGeneric(16, true);
}

void apagarVela17() {
  apagarVelaGeneric(16);
}

void encenderNotifyVela18() {
  encenderVelaGeneric(17, true);
}

void apagarVela18() {
  apagarVelaGeneric(17);
}

void encenderNotifyVela19() {
  encenderVelaGeneric(18, true);
}

void apagarVela19() {
  apagarVelaGeneric(18);
}

void encenderNotifyVela20() {
  encenderVelaGeneric(19, true);
}

void apagarVela20() {
  apagarVelaGeneric(19);
}

void encenderNotifyVela21() {
  encenderVelaGeneric(20, true);
}

void apagarVela21() {
  apagarVelaGeneric(20);
}

void encenderNotifyVela22() {
  encenderVelaGeneric(21, true);
}

void apagarVela22() {
  apagarVelaGeneric(21);
}

void encenderNotifyVela23() {
  encenderVelaGeneric(22, true);
}

void apagarVela23() {
  apagarVelaGeneric(22);
}

void encenderNotifyVela24() {
  encenderVelaGeneric(23, true);
}

void apagarVela24() {
  apagarVelaGeneric(23);
}

void encenderNotifyVela25() {
  encenderVelaGeneric(24, true);
}

void apagarVela25() {
  apagarVelaGeneric(24);
}

void encenderNotifyVela26() {
  encenderVelaGeneric(25, true);
}

void apagarVela26() {
  apagarVelaGeneric(25);
}

void encenderNotifyVela27() {
  encenderVelaGeneric(26, true);
}

void apagarVela27() {
  apagarVelaGeneric(26);
}

void encenderNotifyVela28() {
  encenderVelaGeneric(27, true);
}

void apagarVela28() {
  apagarVelaGeneric(27);
}

void encenderNotifyVela29() {
  encenderVelaGeneric(28, true);
}

void apagarVela29() {
  apagarVelaGeneric(28);
}

void encenderNotifyVela30() {
  encenderVelaGeneric(29, true);
}

void apagarVela30() {
  apagarVelaGeneric(29);
}

typedef void (* GenericCommandArray)();
GenericCommandArray encenderVela[30] = {
  encenderNotifyVela1,
  encenderNotifyVela2,
  encenderNotifyVela3,
  encenderNotifyVela4,
  encenderNotifyVela5,
  encenderNotifyVela6,
  encenderNotifyVela7,
  encenderNotifyVela8,
  encenderNotifyVela9,
  encenderNotifyVela10,
  encenderNotifyVela11,
  encenderNotifyVela12,
  encenderNotifyVela13,
  encenderNotifyVela14,
  encenderNotifyVela15,
  encenderNotifyVela16,
  encenderNotifyVela17,
  encenderNotifyVela18,
  encenderNotifyVela19,
  encenderNotifyVela20,
  encenderNotifyVela21,
  encenderNotifyVela22,
  encenderNotifyVela23,
  encenderNotifyVela24,
  encenderNotifyVela25,
  encenderNotifyVela26,
  encenderNotifyVela27,
  encenderNotifyVela28,
  encenderNotifyVela29,
  encenderNotifyVela30
};

GenericCommandArray apagarVela[30] = {
  apagarVela1,
  apagarVela2,
  apagarVela3,
  apagarVela4,
  apagarVela5,
  apagarVela6,
  apagarVela7,
  apagarVela8,
  apagarVela9,
  apagarVela10,
  apagarVela11,
  apagarVela12,
  apagarVela13,
  apagarVela14,
  apagarVela15,
  apagarVela16,
  apagarVela17,
  apagarVela18,
  apagarVela19,
  apagarVela20,
  apagarVela21,
  apagarVela22,
  apagarVela23,
  apagarVela24,
  apagarVela25,
  apagarVela26,
  apagarVela27,
  apagarVela28,
  apagarVela29,
  apagarVela30
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
  if (readEvent(receive_data, NUM_BYTES_EVENT)) {
    executeCommand(receive_data);
  }
}

bool readEvent(byte* data, uint8_t dataLength) {
  if (Serial.available() >= dataLength) {
    Serial.readBytes(data, dataLength);
    return true;
  }
  return false;
}

void executeCommand(byte* data) {
  // El bit mas fuerte da el estado (on or off)
  int int_value = *((int*)data);
  if (bitRead(data[0], 7) == 1) {
    int candle_id = int_value - 128;
    encenderVelaGeneric(candle_id, false);
  }
  else {
    int candle_id = int_value;
    apagarVelaGeneric(candle_id);
  }
}
