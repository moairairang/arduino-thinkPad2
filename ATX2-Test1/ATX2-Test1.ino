#include <ATX2.h>	// ATX2 Board
void setup() {
  XIO();	// ATX2 initialize
  OK();

}

void loop() {
  FD(50); delay(1000);
  BK(50); delay(1000);


}
