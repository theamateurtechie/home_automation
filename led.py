import machine 
import time
led=Pin(2,Pin.OUT)
while True:
    led.value(1)
    sleep(2)
    led.value(0)
    sleep(2)