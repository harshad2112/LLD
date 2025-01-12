from Player import Player
from Game import Game
from piece.PieceX import PieceX
from piece.PieceO import PieceO

pieceX = PieceX()
pieceO = PieceO()

player1 = Player("harshad", pieceX)
player2 = Player("Mohit", pieceO)

game = Game([player1, player2], 3)

is_game_finished = False
while(is_game_finished == False):
    current_player: Player = game.get_current_player()
    print(f"Player: {current_player.get_name()}, enter row and column: ")
    row, column = map(int, (input().split()))
    success = game.serveTurn(row, column)
    if(success == False):
        print(f"Wrong move {row}, {column}, try again.")
    game.print_board()
    is_game_finished = game.check_winner(current_player.get_piece())
    if(is_game_finished):
        print(f"Player: {current_player.get_name()} Won")
        break
    is_game_finished = game.is_board_full()
    if(is_game_finished):
        print("Match Tie") 