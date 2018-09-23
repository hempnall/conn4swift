import libc4cpp 

public class ManualPlayer 
    : Player
{

    let player_handle_ : UnsafeMutableRawPointer 
    
    init(colour: UInt8) {
        print("manualplayer is being initialized")
        self.player_handle_ = new_manual_player(colour)
    }
    
    deinit {
        print("manualplayer is being deinitialized")
        delete_player( self.player_handle_ )
       // self.player_handle_ = nil
    }

    func get_move() -> UInt8 
    {
        return 3
    }

}