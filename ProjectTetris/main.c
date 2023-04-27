typedef enum {
	RED = 41,
	GREEN,
	YELLOW,
	BLUE,
	PURPLE,
	CYAN,
	WHILE,
	BLACK = 0,
}Color ;

typedef enum {
	EMPTY = -1,
	I,
	J,
	L,
	O,
	S,
	T,
	Z
}ShapeId;

typedef struct {
	ShapeId shape;
	Color color;
	int size;
	char rotates[4][4][4];
}Shape;

Shape shape[7] = {
	{
		.shape = I,
		.color = CYAN,
		.size = 4,
		.rotates = {
			{
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
				{0,0,0,0},
			},
			{
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
			},
			{
				{0,0,0,0},
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
			},
			{
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
			},
		}
	},
	
};

int main() {
	Color cur;
	for (int i = 0; i < 7; i++) {
		for (int r = 0; r < 4; r++) {
			for (int s = 0; s < shape[i].size; s++) {
				for (int t = 0; t < shape[i].size; t++) {
					if (shape[i].rotates[r][s][t]) {
						cur = shape[i].color;
					}
					else {
						cur = BLACK;
					}
					printf("\033[%dm ", cur);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
}
typedef struct {
	Color color;
	ShapeId shape;
}Block;