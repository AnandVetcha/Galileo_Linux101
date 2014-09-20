void setup() {
  // Start Telnet server
  system("telnetd -l /bin/sh");
  // Set IP to 169.254.1.10
  system("ifconfig eth0 169.254.1.10 netmask 255.255.0.0 up");
}

void loop() {

  
}
