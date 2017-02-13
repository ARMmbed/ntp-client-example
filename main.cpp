#include "mbed.h"
#include "EthernetInterface.h"
#include "ntp-client/NTPClient.h"

int main() {
    printf("NTP Client example (using Ethernet)\r\n");
    EthernetInterface eth;
    eth.connect();
    printf("Client IP Address is %s\r\n", eth.get_ip_address());

    NTPClient ntp(&eth);
    
    while(1) {
        time_t timestamp = ntp.get_timestamp();
        
        if (timestamp < 0) {
            printf("An error occurred when getting the time. Code: %ld\r\n", timestamp);
        } else {
            printf("Current time is %s\r\n", ctime(&timestamp));
        }
        
        printf("Waiting 10 seconds before trying again...\r\n");
        wait(10.0);        
    }
}