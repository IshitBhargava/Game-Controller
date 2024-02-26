Make a Game controller with Mouse control and a steering wheel for playing car games!

**Things Needed**
  1x Arduino Uno
  1x IR sensor
  1x Joystick
  1x 10K OHM potentiometer
  1x RGB LED (optional)

  **Hardware Connections**
  JOYSTICK:
  *VCC: 5V*
  *GND: GND*
  *SW: D2*
  *vryX: A0*
  *vrY: A1*

  IR SENSOR:
  *VCC: D10*
  *GND: D9 or GND*
  *OUTPUT: D8*

  POTENTIOMETER:
  *T1: 5V*
  *WIPER: A2*
  *T2: GND*

  RGB LED:
  *RED: D3*
  *GREEN: D5*
  *BLUE: D6*
  *COMMON ANODE: D4*

  **OTHER TASKS:**
  Connect the Arduino board and upload the code.
  After Uploading the code, run the python code, REPLACE THE CON4 WITH THE COM ON WHICH THE ARDUINO IS CONNECTED.
  To install the libraries in the python code, run these commands in anaconda prompt:

  SERIAL: conda install -c anaconda pyserial
  PYAUTOGUI: conda install -c conda-forge pyautogui

  After running the code, it should work. 
  ____________________________________________________________________________________________________________________________________________________________________________
  
