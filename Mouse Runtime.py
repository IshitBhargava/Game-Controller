import serial
import pyautogui

# Open serial connection to Arduino Uno
ser = serial.Serial('COM5', 9600)  # Replace 'COMX' with your Arduino's port
pyautogui.FAILSAFE = False

# Set the duration for mouse movements (in seconds)
move_duration = 0.1

while True:
    # Read data from serial
    data = ser.readline().decode().strip().split(',')
    if len(data) == 3:
        xAxisValue = int(data[0])
        yAxisValue = int(data[1])
        buttonState = int(data[2])
        
        # Map joystick values to screen coordinates
        screenWidth, screenHeight = pyautogui.size()
        mouseX = int(pyautogui.position()[0] - (xAxisValue - 512) / 100)  # Invert direction
        mouseY = int(pyautogui.position()[1] + (yAxisValue - 524) / 100)
        
        # Move mouse cursor
        pyautogui.moveTo(mouseX, mouseY, duration=move_duration)
        
        # Check button state and perform left click
        if buttonState == 0:  # Button pressed
            pyautogui.click()
            print("button pressed")
