import libc4cpp 

struct conn4 {
    var text = "Hello, World!"


    func add(x: Int, y: Int) -> UInt8 {
        var i : UInt8 = 3;
        var p = UnsafeMutablePointer<UInt8>(&i)
        return libc4cpp.get_move_from_board( p,0,0  )
    }
}
