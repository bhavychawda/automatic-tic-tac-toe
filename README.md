# Automatic-tic-tac-toe
Automatic Tic Tac Toe Game

This program is coded in c, which can be used for both , playing with computer or as 2 player game

Basically it has 6 function namely
printtab();
check();
play();
complist();
winner();
drawcheck();

 1 main array which will initally contain postions -1,2,3,4,5,6,7,8,9
      
      1   |   2   |   3 
      -------------------
      4   |   5   |   6
      -------------------
      7   |   8   |   9
      
      
      when player choose any postion we will replace that with zero or ten according to player 
      player 1=0 player 2/comp=10
      
      then we will check 
      is diagonals or lines are 0 0 0 then player 1 win if 10 10 10
      then player to win.
      
      we will replace 0 and 10 with actual O AND X before printing updated board(with check () function)
      
      
 For generating random computer move
 
      we will create new array(comp[]) in function complist 
      which will contain non zero non ten number (ie. unplayed postion)
      
      we will use rand and srand function to generate random index for array comp[]
      and will pass random move in player 2 num.....
      
