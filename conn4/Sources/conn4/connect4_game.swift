import libc4cpp 

public class Connect4Game 
    : HandleObject
{

   // let game_handle_ : UnsafeMutableRawPointer 
    let board_ : Board
    let game_handle_ : UnsafeMutableRawPointer
    let p1_ : Player
    let p2_ : Player
    
    public init(p1: Player, p2: Player) {
        print("game is being initialized")
        self.game_handle_ = new_game( p1.handle() , p2.handle() )
        self.board_ = Board()
        self.p1_ = p1
        self.p2_ = p2
    }

    deinit {
        print("game is being deinitialized")
        delete_game( self.game_handle_ )
   
    }

    public func start_cpp_game()
    {
        libc4cpp.start_game( self.game_handle_ )
    }

    func show_move( m : UInt8 )
    {
        print("show move \(m)")
        game_show_move(  self.game_handle_ , m )
    }

    public func getCurrentPlayer() -> Player
    {
        let player_id = board_.get_player(  )
        if player_id == 1 {
            return self.p1_
        } else {
            return self.p2_
        }

    }

    public func start_game() 
    {
        board_.show()
        
        var bWin : Bool  =  board_.win() 
        while !bWin {
            var move : UInt8 = 0 
            var valid_move : Bool
            repeat  {
                move = getCurrentPlayer().get_move( b: board_ )
                valid_move = board_.push_counter(move: move,switchplayer: false) 
                if !valid_move {
                    print("[SWIFT] invalid move")
                }
            } while !valid_move
            show_move( m: move )
            board_.show()
            bWin  = board_.win(  ) 
            board_.switch_player()    
        }
        print("[SWIFT] game over")
    }

    public func handle() -> UnsafeMutableRawPointer
    {
        return self.game_handle_
    }

}