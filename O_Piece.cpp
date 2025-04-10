#include "O_Piece.h"

//SQUARE PIECE
Color O_Piece::GetColor() const 
{
    return O_COLOR;
}

void O_Piece::GetPiece(bool (&triangles)[PIECE_SIZE/2][PIECE_SIZE], int pos) const 
{
    ClearPiece(triangles);

    triangles[0][4] = true;
    triangles[0][5] = true;
}
