# TicTacToe-Board-Game
A commonly known paper and pencil game among students is Xs and Os which is also called as ***Tic-tac-toe*** or ***noughts and crosses*** for which I have written a program in C.
## How does it work?
- Each player is given a symbol(either 'X' or 'O').
- As the players select a particular location, the character at that specific location is replaced with the respective symbol.
- In order to replace with the symbol, each time the screen is updated instead of printing another board.
## The three conditions based on which it is decided whether the game continues or not :
#### i) We have a Winner !!! :
- Everytime, when a player plays his turn all the possible conditions to win the game is checked.
- If any of those conditions is satisfied then we have a Winner to celebrate.
#### ii) Oops! It is a draw :
When all the 9 locations have been modified atleast once, then it is a draw.
#### iii) Lets Continue :
If none of the above two conditions are satisfied then, the players are allowed to continue the game.
