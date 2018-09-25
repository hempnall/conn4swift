import libc4cpp 

public class ManualPlayer 
    : Player
{

    let player_handle_ : UnsafeMutableRawPointer 
    
    public init(colour: UInt8) {
        print("manualplayer is being initialized")
        self.player_handle_ = new_manual_player(colour)
    }
    
    deinit {
        print("manualplayer is being deinitialized")
        delete_player( self.player_handle_ )
    }

    public func get_move( b : Board ) -> UInt8 
    {
        print("[SWIFT] please enter your move (0-6):")
        guard let move_chosen = readLine(strippingNewline: true) else {
            // If we got to here, readLine(strippingNewLine:) returned nil
            fatalError("Received EOF before any input was given")
        }

        // If we got to here, then userInput is not nil
        if let n  = UInt8(move_chosen)  {
            return n
        }
        else {
            return 10
        }
    }

    public func handle() -> UnsafeMutableRawPointer
    {
        return self.player_handle_
    }

}