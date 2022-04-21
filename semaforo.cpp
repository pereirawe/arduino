// C++ code

int pinLedRed = 10;
int pinLedYellow = 9;
int pinLedGreen = 8;
int timeDelay = 3000;

int timeDelayRed = 3000;
int timeDelayYellow = 1000;
int timeDelayGreen = 5000;

void setup()
{
    pinMode(pinLedRed, OUTPUT);
    pinMode(pinLedYellow, OUTPUT);
    pinMode(pinLedGreen, OUTPUT);
}

void loop()
{
    digitalWrite(pinLedRed, LOW);
    digitalWrite(pinLedYellow, LOW);
    digitalWrite(pinLedGreen, HIGH);
    delay(timeDelayGreen);

    digitalWrite(pinLedRed, LOW);
    digitalWrite(pinLedYellow, HIGH);
    digitalWrite(pinLedGreen, LOW);
    delay(timeDelayYellow);

    digitalWrite(pinLedRed, HIGH);
    digitalWrite(pinLedYellow, LOW);
    digitalWrite(pinLedGreen, LOW);
    delay(timeDelayRed);
}