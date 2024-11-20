# pip install pyserial (not serial!)
import serial
import sys
comPort = '/dev/tty.usbmodem1401' # Change to your com port (look up in Arduino IDE)
logFile = 'log.txt'
ser   = serial.Serial(comPort,115200, timeout=0)
ser.flushInput()

f = open(logFile,'w')

print("Reading from: "+comPort)
print("Writing to  : "+logFile)
print("------------------------")

while True:
    try:
        byteIn = ser.read()
        if len(byteIn) != 0:
            f.write(byteIn.decode())
            sys.stdout.write(byteIn.decode())
            sys.stdout.flush()
    except:
        print('------------------------')
        print('Stopped')
        f.close()
        break
