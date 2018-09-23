import libc4cpp 

public class AutoPlayer 
    : Player
{

    let colour_: UInt8
    let ply_: UInt8


    init(colour: UInt8, ply: UInt8) {
        self.colour_ = colour
        self.ply_ = ply
        print("autoplayer is being initialized")
    }
    deinit {
        print("autoplayer is being deinitialized")
    }

    func get_move() -> UInt8 
    {
        return 3
    }

}