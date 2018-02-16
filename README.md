# Control BLDCmotor/ESC by Arduino
### Declare  
This code is in the public domain.  
Do whatever you want with it.  
Modify by shannon112 @2017.04.20  
  
### Purpose  
This code can initialize the ESC by Arduino.  
So you will enable to control BLDC motor by Arduino! 
  
### Device  
ESC: XXD HW30A 30A (新西達30A 無刷電變 好盈程序)  
Brushless motor: XXD A2212 2450KV (新西達 A2212 2450KV 無刷馬達)  
   
### Wiring  
See the figure below    
hint: DON'T connect the red wire to your 5v Port,  
Just keep it empty !  
  
### Instruction  
steo0.turn off the power of ESC & motor  
step1.running SN_ESCInitialize.ino   
step2.open the serial port  
step3.turn on the power of ESC & motor  
step4.choose what you want to do in the serial port  
step5.choose functions whatever you want by typing in   
```y```for initailize  
```t```for test every enable speed from 21 to 165  
```s```and intput```21```~```165```for test selected constant speed  
```o```stop the motor   

<img src="https://raw.githubusercontent.com/shannon112/arduino_ESCandBLDC/master/image.jpg" width="500">
  
<img src="https://raw.githubusercontent.com/shannon112/arduino_ESCandBLDC/master/image2.png" width="500">

### Instruction Blog
https://shannon112.blogspot.tw/2017/04/arduinoarduino.html
