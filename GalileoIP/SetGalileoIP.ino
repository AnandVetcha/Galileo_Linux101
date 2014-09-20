void setup() {
  // Start Telnet server
  system("telnetd -l /bin/sh");
  // Set IP to 169.253.1.1
  system("ifconfig eth0 169.253.1.1 netmask 255.255.0.0 up");
}

void loop() {

  
}
