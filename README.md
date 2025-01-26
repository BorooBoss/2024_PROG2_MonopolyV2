# Console Game Monopoly with Graphical User Interface
Monopoly is a popular board game where players buy, trade, and develop properties to bankrupt their opponents and become the richest player. More details about have the game works can be found in `task.pdf`. I used source code and game logic from the **MonopolyV1** uploaded before. Important change in this version is that we use GUI instead of formatted prints of game board. The whole thing now looks more like game and we can better orient ourselves in the game plot. 
## General
**This is how the main screen looks like** 
![First](https://i.imgur.com/XI6RPzm.png)

To get in this stage, we continue similarly as we did with other C projects before.
We get into the folder with **z6.c** and we type in to the console:                       
`gcc -o z6 z6.c -lncurses`                
From the gcc we can tell I used library **lncurses** to make the visuals possible. We used already made template with some added changes tied to our board and our logic of the game.  
Now we can start the game with:       
`./z6` 

## Modes
Before we choose modes it is a good idea to unzoom screen little bit because the game board might not be responsible to your screen. If you forget to you will probably have to restart the game so you can enjoy it fully.
1. **Till Bankrupt** - The game ends when one player wins and every other player has no money
2. **Turns Number** - We play only **n** dice throws and the player with the most amount of cash or cash in bought spaces wins. This mode can end with no winner if it is not clear which player would win because of no cash differences
![First](https://i.imgur.com/z1kdsTn.png)
## Players 
We can choose if we want to play against :
1. **Player** - We have to type dice throw number manually as input so it seems more interactive
2. **Computer** - Enemies dice throw will be done automatically with no input from person
![Third](https://i.imgur.com/YI1lLzt.png)

## Preview
**Example of active game board**
![Fourth](https://i.imgur.com/cvIFJZH.png)

**End screen with Player 1 won the game**
![Fifth](https://i.imgur.com/KQjhjHg.png)
