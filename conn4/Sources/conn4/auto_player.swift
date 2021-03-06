import libc4cpp 

public class AutoPlayer 
    : Player
{

    let colour_: UInt8
    let ply_: UInt8
    let handle_ : UnsafeMutableRawPointer 

    public init(colour: UInt8, ply: UInt8) {
        self.colour_ = colour
        self.ply_ = ply
        print("autoplayer is being initialized")
        self.handle_ = new_auto_player(self.colour_, self.ply_)
    }
    deinit {
        print("autoplayer is being deinitialized")
    }

    public func get_move( b : Board) -> UInt8 
    {
        let mov = auto_player_get_move( self.handle_ , b.handle()  )
        print("[SWIFT] computer choses \(mov)")
        return mov
    }

    public func handle() -> UnsafeMutableRawPointer
    {
        return self.handle_
    }

}