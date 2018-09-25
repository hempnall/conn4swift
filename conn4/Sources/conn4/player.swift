public protocol Player 
    : HandleObject
{
    func get_move( b : Board) -> UInt8
}