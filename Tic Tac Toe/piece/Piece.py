from abc import ABC, abstractmethod
from piece.PieceType import PieceType

class Piece(ABC):
    def __init__(self, pieceType: PieceType):
        self.pieceType = pieceType
    
    def get_piece_type(self):
        return self.pieceType