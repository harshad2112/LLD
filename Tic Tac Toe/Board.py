from piece.Piece import Piece

class Board():
    def __init__(self, size):
        self.size = size
        self.board = []
        for i in range(size):
            self.board.append([])
            for j in range(size):
                self.board[i].append("")
        
    def get_size(self):
        return self.size
    
    def get_board(self):
        return self.board
    
    def add_piece(self, piece: Piece, row, column):
        if(row < self.size and column < self.size and row >= 0 and column >= 0 and self.board[row][column]==""):
            self.board[row][column] = piece
            return True
        else:
            return False