from piece.Piece import Piece

class Player():
    def __init__(self, name, piece: Piece):
        self.piece = piece
        self.name = name
        
    def get_name(self):
        return self.name
    
    def get_piece(self):
        return self.piece.get_piece_type()