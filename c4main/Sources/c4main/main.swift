import libc4cpp
import conn4


let p1 = ManualPlayer(colour: 1)
let p2 = ManualPlayer(colour: 2)
let g = Connect4Game( p1: p1  ,p2:  p2 )
print( "---")
g.start_game()