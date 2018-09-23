import libc4cpp 

public class Connect4Game 
    : HandleObject
{

    let game_handle_ : UnsafeMutableRawPointer 
    
    public init(p1: Player, p2: Player) {
        print("game is being initialized")
        game_handle_ = new_game( p1.handle() , p2.handle() )
    }
    deinit {
        print("game is being deinitialized")
        delete_game( self.game_handle_ )
    }

    public func start_game()
    {
        libc4cpp.start_game( self.game_handle_ )
    }

    public func handle() -> UnsafeMutableRawPointer
    {
        return self.game_handle_
    }

}