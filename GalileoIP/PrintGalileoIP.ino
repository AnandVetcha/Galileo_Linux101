void setup() {
  system("telnetd -l /bin/sh");
}

void loop() {
  // Print IP information on Serial Monitor
  system("ifconfig eth0 > /dev/ttyGS0");
  sleep(15);
}
