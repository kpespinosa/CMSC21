#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct 
{
	int row;
	int col;
} Coord;

int main() {

  FILE *f = fopen("trace-path-input", "r");
  Coord res;

  int _map_rows = 0;
  int _map_cols = 0;
  fscanf(f,"%d", &_map_rows);
  fscanf(f,"%d", &_map_cols);

  int** _map = (int**)malloc(_map_rows*sizeof(int*));
  int _map_init_i=0;
  for(_map_init_i=0 ; _map_init_i<_map_rows ; ++_map_init_i)
  {
    _map[_map_init_i] = (int*)malloc(_map_cols*(sizeof(int)));
  }

  int _map_i, _map_j;
  for(_map_i = 0; _map_i < _map_rows; _map_i++) {
    for(_map_j = 0; _map_j < _map_cols; _map_j++) {
      int _map_item;
      fscanf(f,"%d", &_map_item);

      _map[_map_i][_map_j] = _map_item;
    }
  }
 
  printf("%d %d\n", _map_rows, _map_cols);

  res = findEnd(_map_rows, _map_cols, _map);
  printf("%d %d\n", res.row, res.col);

  fclose(f);
  return 0;
}


/*
 * Complete the function below.
 */
Coord findEnd(int map_size_rows, int map_size_cols, int** map) {
	
}
