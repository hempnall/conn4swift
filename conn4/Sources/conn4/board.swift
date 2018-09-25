import libc4cpp 

public class Board 
    : HandleObject
{

    let board_handle_ : UnsafeMutableRawPointer 
    
    public init() {
        print("board is being initialized")
        self.board_handle_ = new_board()
    }
    
    deinit {
        print("board is being deinitialized")
        delete_board( self.board_handle_ )
    }

    public func handle() -> UnsafeMutableRawPointer
    {
        return self.board_handle_
    }

    func show() 
    {
        board_show( self.board_handle_ )
    }

    func push_counter( move : UInt8 , switchplayer : Bool )  -> Bool
    {
        return board_push_counter( self.board_handle_, move , switchplayer ? 1 : 0 ) != 0
    }

    func win() -> Bool
    {
        return  board_win( self.board_handle_ ) != 0 
    }

    func switch_player()
    {
        return board_switch_player( self.board_handle_ )
    }

    func get_player() -> UInt8 
    {
        return board_get_player( self.board_handle_)
    }


}