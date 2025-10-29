from pushbullet import Pushbullet
import serial, time

PB_API_KEY = "o.jbQiczGmwUGoji8etu7uYeZkQkouEP2G"  # Pushbullet token
PORT = "COM5"      
BAUD = 9600

# --- SETUP ---
pb = Pushbullet(PB_API_KEY)
ser = serial.Serial(PORT, BAUD, timeout=1)
time.sleep(2)  # Wait for Arduino to reset

print("Listening for alerts from Arduino...")

# --- MAIN LOOP ---
while True:
    try:
        line = ser.readline().decode(errors='ignore').strip()
        if line:
            print(line)  # Show all Arduino output in the console
            if "ALERT" in line:
                push = pb.push_note("Flash Flood Alert", line)
                print("📲 Notification sent!")
        time.sleep(0.2)
    except KeyboardInterrupt:
        print("\nExiting.")
        break
