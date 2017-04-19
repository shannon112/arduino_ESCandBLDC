# arduino_ESCandBLDC
[Declare]  
This code is in the public domain.  
Do whatever you want with it.  
Modify by shannon112 @2017.04.20  
  
[Purpose]  
This code can initialize the ESC by Arduino.  
So you will enable to control BLDC motor by Arduino! 
  
[Device]  
ESC: XXD HW30A 30A (新西達30A 無刷電變 好盈程序)  
Brushless motor: XXD A2212 2450KV (新西達 A2212 2450KV 無刷馬達)  
   
[Wiring]  
See the figure below    
http://imgur.com/a/1vZ9u   
hint: DON'T connect the red wire to your 5v Port,  
because it could destroy your computer's USB Port.  
Just keep it empty !  
  
[Instruction]  
step1.running SN_ESCInitialize.ino   
step2.open the serial port  
step3.turn on the power of ESC & motor  
step4.choose what you want to do in the serial port  
hint: In generally, you need to initialize your ESC first  
  
============================================================  
  
[目的]  
利用Arduino初始化電變(ESC)，  
並利用Arduino進行無刷馬達的控制測試.  
   
[接線]   
見下方連接的圖  
http://imgur.com/a/1vZ9u    
提示: 不要把電變接出來的三條杜邦線中間的紅線接到Arduino的5V，  
這樣做會燒壞你的電腦或是你的Arduino（我燒壞過一片  
就留空，不接即可！  
  
[步驟]  
step1.先執行 SN_ESCInitialize.ino   
step2.上傳完成後，打開序列埠監控視窗   
step3.打開連接無刷、電變的電源  
step4.回到序列埠監控視窗選擇接下來的指令  
提示: 一般來說建議先打"y"進行初始化，成功後，再打"t"進行測試  
