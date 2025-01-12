from piece.PieceType import PieceType
from piece.Piece import Piece

class PieceO(Piece):
    def __init__(self):
        super().__init__(PieceType.O)