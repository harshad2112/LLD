from collections import deque

from Board import Board
from Player import Player
from piece.Piece import Piece
from piece.PieceType import PieceType


class Game():
    def __init__(self, players, board_size):
        self.board = Board(board_size)
        self.playerQueue = deque(players)
        
    def serveTurn(self, row, column):
        player: Player = self.playerQueue.pop()
        piece = player.get_piece()
        success = self.board.add_piece(piece, row-1, column-1)
        if(success == False):
            self.playerQueue.append(player)
            return False
        self.playerQueue.appendleft(player)
        return True
    
    def get_current_player(self):
        return self.playerQueue[-1]
        
        
    def check_winner(self, piece: Piece):
        board = self.board.get_board()
        return self.check_diagonals(board, piece) or self.check_row(board, piece) or self.check_column(board, piece)
    
    def check_diagonals(self, board, piece: Piece):
        first_diagonal = second_diagonal = True
        size = self.board.get_size()
        for i in range(size):
            if(board[i][i] != piece):
                first_diagonal = False
        
        for i in range(size):
            if(board[i][size-i-1]!=piece):
                second_diagonal = False
                
        return first_diagonal or second_diagonal
    
    def check_row(self, board, piece: Piece):
        win = False
        size = self.board.get_size()
        for i in range(size):
            current_row = True
            for j in range(size):
                if(board[i][j] != piece):
                    current_row = False
            win |= current_row
            
        return win
    
    def check_column(self, board, piece: Piece):
        win = False
        size = self.board.get_size()
        for i in range(size):
            current_row = True
            for j in range(size):
                if(board[j][i] != piece):
                    current_row = False
            win |= current_row
            
        return win
    
    def is_board_full(self):
        size = self.board.get_size()
        board = self.board.get_board()
        for i in range(size):
            for j in range(size):
                if (board[i][j] == ""):
                    return False
                
        return True
    
    def print_board(self):
        size = self.board.get_size()
        board = self.board.get_board()
        for i in range(size):
            for j in range(size):
                if(board[i][j]==""):
                    print("   ", end="")
                if(board[i][j] == PieceType.X):
                    print(" X ", end="")
                if(board[i][j] == PieceType.O):
                    print(" O ", end="")
                if(j!=size-1):
                    print("|", end="")
            print()
            if (i!=size-1):
                print("---"*(size+1))