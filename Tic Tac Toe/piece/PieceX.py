from piece.PieceType import PieceType
from piece.Piece import Piece

class PieceX(Piece):
    def __init__(self):
        super().__init__(PieceType.X)
        