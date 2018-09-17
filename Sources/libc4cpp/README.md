# connect4cpp

Plays a half decent game of connect 4. Looks 8 moves ahead and follows the Minimax/AlphaBeta algorithm!!

It did lose in this game :-(

```
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
Player 1: please enter your move (0-6)3
move entered = 3
      |
      v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 1 0 0 0 
getting move for 2
move chosen: 3
move entered = 3
      |
      v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
Player 1: please enter your move (0-6)3
move entered = 3
      |
      v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
getting move for 2
move chosen: 3
move entered = 3
      |
      v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
Player 1: please enter your move (0-6)4
move entered = 4
        |
        v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 1 0 0 
getting move for 2
move chosen: 2
move entered = 2
    |
    v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 0 0 0 
0 0 2 1 1 0 0 
Player 1: please enter your move (0-6)5
move entered = 5
          |
          v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 0 0 0 
0 0 2 1 1 1 0 
getting move for 2
move chosen: 6
move entered = 6
            |
            v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 0 0 0 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)4
move entered = 4
        |
        v
0 0 0 0 0 0 0 
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 1 0 0 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 3
move entered = 3
      |
      v
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 0 0 0 
0 0 0 2 1 0 0 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)4
move entered = 4
        |
        v
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 0 0 0 
0 0 0 1 1 0 0 
0 0 0 2 1 0 0 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 4
move entered = 4
        |
        v
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 1 1 0 0 
0 0 0 2 1 0 0 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)5
move entered = 5
          |
          v
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 1 1 0 0 
0 0 0 2 1 1 0 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 5
move entered = 5
          |
          v
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 1 1 2 0 
0 0 0 2 1 1 0 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)6
move entered = 6
            |
            v
0 0 0 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 1 1 2 0 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 3
move entered = 3
      |
      v
0 0 0 2 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 1 1 2 0 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)5
move entered = 5
          |
          v
0 0 0 2 0 0 0 
0 0 0 2 0 0 0 
0 0 0 2 2 1 0 
0 0 0 1 1 2 0 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 4
move entered = 4
        |
        v
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 2 2 1 0 
0 0 0 1 1 2 0 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)6
move entered = 6
            |
            v
0 0 0 2 0 0 0 
0 0 0 2 2 0 0 
0 0 0 2 2 1 0 
0 0 0 1 1 2 1 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 4
move entered = 4
        |
        v
0 0 0 2 2 0 0 
0 0 0 2 2 0 0 
0 0 0 2 2 1 0 
0 0 0 1 1 2 1 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)6
move entered = 6
            |
            v
0 0 0 2 2 0 0 
0 0 0 2 2 0 0 
0 0 0 2 2 1 1 
0 0 0 1 1 2 1 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 6
move entered = 6
            |
            v
0 0 0 2 2 0 0 
0 0 0 2 2 0 2 
0 0 0 2 2 1 1 
0 0 0 1 1 2 1 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)5
move entered = 5
          |
          v
0 0 0 2 2 0 0 
0 0 0 2 2 1 2 
0 0 0 2 2 1 1 
0 0 0 1 1 2 1 
0 0 0 2 1 1 1 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 2
move entered = 2
    |
    v
0 0 0 2 2 0 0 
0 0 0 2 2 1 2 
0 0 0 2 2 1 1 
0 0 0 1 1 2 1 
0 0 2 2 1 1 1 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)2
move entered = 2
    |
    v
0 0 0 2 2 0 0 
0 0 0 2 2 1 2 
0 0 0 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 0 2 1 1 1 2 
getting move for 2
move chosen: 2
move entered = 2
    |
    v
0 0 0 2 2 0 0 
0 0 0 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 0 2 1 1 1 2 
Player 1: please enter your move (0-6)1
move entered = 1
  |
  v
0 0 0 2 2 0 0 
0 0 0 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 1 2 1 1 1 2 
getting move for 2
move chosen: 2
move entered = 2
    |
    v
0 0 0 2 2 0 0 
0 0 2 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 1 2 1 1 1 2 
Player 1: please enter your move (0-6)2
move entered = 2
    |
    v
0 0 1 2 2 0 0 
0 0 2 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 1 2 1 1 1 2 
getting move for 2
move chosen: 5
move entered = 5
          |
          v
0 0 1 2 2 2 0 
0 0 2 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 1 2 1 1 1 2 
Player 1: please enter your move (0-6)6
move entered = 6
            |
            v
0 0 1 2 2 2 1 
0 0 2 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 0 2 2 1 1 1 
0 1 2 1 1 1 2 
getting move for 2
move chosen: 1
move entered = 1
  |
  v
0 0 1 2 2 2 1 
0 0 2 2 2 1 2 
0 0 2 2 2 1 1 
0 0 1 1 1 2 1 
0 2 2 2 1 1 1 
0 1 2 1 1 1 2 
Player 1: please enter your move (0-6)1
move entered = 1
  |
  v
0 0 1 2 2 2 1 
0 0 2 2 2 1 2 
0 0 2 2 2 1 1 
0 1 1 1 1 2 1 
0 2 2 2 1 1 1 
0 1 2 1 1 1 2 
Press <RETURN> to close this window...
```

