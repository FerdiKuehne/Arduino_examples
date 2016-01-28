void setup () { /* Einstellung des Pin 13 as Output */
 pinmode(13, OUTPUT); 
}

void delay_n_times (int n, int t_ms) { /* value n is for how many times it blinkes */
  if (n==0) {
    return;
  }
  digitalWrite(13,HIGH);  
  delay(t_ms); /* delay Function for 500ms */ 
  digitalWrite(13, LOW);
  delay_fast(n-1, t_ms);
}

void loop () {
  delay_n_times(5, 500);  
  delay_n_times(5, 2000);
}
