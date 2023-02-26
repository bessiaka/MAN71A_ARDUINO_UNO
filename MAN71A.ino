const int A = 2; // connect to pin 2 of the display
const int B = 3; // connect to pin 3 of the display
const int C = 4; // connect to pin 4 of the display
const int D = 5; // connect to pin 5 of the display
const int E = 6; // connect to pin 6 of the display
const int F = 7; // connect to pin 7 of the display
const int G = 8; // connect to pin 8 of the display
const int DP = 9; // connect to pin 9 of the display


void setup() {
  // set all pins as outputs
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);

}

void loop() {
  // display the number 1234
  displayDigit(0);
  delay(1000);
  displayDigit(1);
  delay(1000);
  displayDigit(2);
  delay(1000);
  displayDigit(3);
  delay(1000);
  displayDigit(4);
  delay(1000);
  displayDigit(5);
  delay(1000);
  displayDigit(6);
  delay(1000);
  displayDigit(7);
  delay(1000);
  displayDigit(8);
  delay(1000);
  displayDigit(9);
  delay(1000);
  displayDigit(10);
  delay(1000);
}

void displayDigit(int value) {

  // display the value
  switch (value) {
    case 0:
      displaySegments(1, 1, 1, 1, 1, 1, 0, 0);
      break;
    case 1:
      displaySegments(0, 1, 1, 0, 0, 0, 0, 0);
      break;
    case 2:
      displaySegments(1, 1, 0, 1, 1, 0, 1, 0);
      break;
    case 3:
      displaySegments(1, 1, 1, 1, 0, 0, 1, 0);
      break;
    case 4:
      displaySegments(0, 1, 1, 0, 0, 1, 1, 0);
      break;
    case 5:
      displaySegments(1, 0, 1, 1, 0, 1, 1, 0);
      break;
    case 6:
      displaySegments(1, 0, 1, 1, 1, 1, 1, 0);
      break;
    case 7:
      displaySegments(1, 1, 1, 0, 0, 0, 0, 0);
      break;
    case 8:
      displaySegments(1, 1, 1, 1, 1, 1, 1, 0);
      break;
    case 9:
      displaySegments(1, 1, 1, 1, 0, 1, 1, 0);
      break;
    case 10:
      displaySegments(0, 0, 0, 0, 0, 0, 0, 1);
      break;
    default:
      // turn off all segments
      displaySegments(0, 0, 0, 0, 0, 0, 0, 0);
  }
}

void displaySegments(int a, int b, int c, int d, int e, int f, int g, int dp) {
  // set the segments
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
  digitalWrite(D, d);
  digitalWrite(E, e);
  digitalWrite(F, f);
  digitalWrite(G, g);
  digitalWrite(DP, dp);
}