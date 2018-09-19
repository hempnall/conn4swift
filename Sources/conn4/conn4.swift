import libc4cpp 

typealias my_cb_t = () -> Void
func hello2()->Void {
    print( "the cat sat on the mat") 
}


struct conn4 {
    var text = "Hello, World!"



    func add(x: Int, y: Int) -> UInt8 {
        // let hello : my_cb_t = { ()->Void in
        //     print( "In the callback")
        // }
        libc4cpp.callback( hello2 );
        return 123;
    }
}
