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

    public func get_move() -> UInt8 
    {
        return 3
    }

    public func handle() -> UnsafeMutableRawPointer
    {
        return self.handle_
    }

}