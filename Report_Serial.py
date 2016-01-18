import serial
import RPi.GPIO as GPIO
import Tkinter as Tk
import time
GPIO.setmode(GPIO.BOARD)

ser = serial.Serial('/dev/ttyACM0',9600)


while True:
    time.sleep(5)
    ser.write('1')
   
    time.sleep(5)
    ser.write('2')

    time.sleep(5)
    ser.write('3')
    
ser.close()
