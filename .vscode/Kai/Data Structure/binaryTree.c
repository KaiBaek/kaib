#include <stdio.h>


typedef struct {
	char tree[8]; // 트리용 배열 // 1~7번 (0번은 못씀)
	int cur; // 커서 - a, d
} Tree;

// 초기화
void init(Tree* T) {
	T->cur = 1;
}


void addNode(Tree* T, char data) {
	if (T->cur == 8) { 
		printf("트리가 꽉 참");
	}
	else {
		T->tree[T->cur] = data;
		T->cur++;
	}
}


void deleteNode(Tree* T) {
	if (T->cur == 1) { 
		printf("트리가 비어있음");
	}
	else {
		T->cur--;
	}
}


void show_parents(Tree* T, int position) {
	if (T->cur == 1) {
		printf("트리가 비어있다.");
	}
    else if(position == 1){
        printf("포지션이 루트라 부모가 없어요.");
    }
    
	else if(position>=T->cur){
        printf("포지션이 트리를 벗어났어");}
        
    else   {
		    printf("parents node의 자리 : %d, 값 : %c\n",
			position / 2, T->tree[position / 2]);
	}
}

void show_left_child(Tree* T, int position) {
	int left_child_position = position * 2;

	if (T->cur == 1) {
		printf("트리가 비어있다.");
	} else if (left_child_position < 9)
	printf("left child node의 자리 : %d, 값 : %c\n",
		left_child_position, T->tree[left_child_position]);
}

void show_right_child(Tree* T, int position) {

    int right_child_position = position * 2;

	if (T->cur == 1) {
		printf("트리가 비어있다.");
	} else if (right_child_position < 9)
	printf("right child node의 자리 : %d, 값 : %c\n",
		right_child_position, T->tree[right_child_position]);

}

char display(Tree* T) {

    for(int i = 1; i < T->cur; i++){

        printf("%d번 노드의 값 : %c\n", i, T->tree[i]);
    }
}

int main() {

	Tree T;
	init(&T);
	addNode(&T, 'A');
    addNode(&T, 'B');
    addNode(&T, 'C');
    addNode(&T, 'D');
    addNode(&T, 'E');
    addNode(&T, 'F');
    addNode(&T, 'G');

    deleteNode(&T);
    
    display(&T);

    show_parents(&T, 3);

    show_left_child(&T,2); // 

	return 0;
}