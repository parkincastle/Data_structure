#include <stdio.h>


// ���� �켱 Ž��
// �� �ڱ��� �Է� ���ڸ� ����
// �׷����� �������(�迭), visit�迭, ������ ����, ������
void DFS(int *matrix, int * v, int n , int start) {
    v[start] = 1;   // �湮 ������ üũ
    // �ٸ� ������ ���̿켱���� Ž���ؾ� ��.
    // 1. start�� �������־�� ��
    // 2. ���� �ݹ��� ���� ����� �Ѵ�.
    for (int i = 0; i < n; i++){
        if (v[i] == 0 && *(matrix(start * n) + i) == 1) {    //DFS�� ������ ����
            printf("%d -> %d�� �̵�\n", start, i);
            DFS(matrix, v, n, i);
        }

    }

}



int main() {

    int map1[5][5] = { {0, 0, 1, 0, 1},
                   {0, 0, 1, 0, 0},
                   {1, 1, 0, 0, 1},
                   {0, 0, 0, 0, 1},
                   {1, 0, 1, 1, 0} }; // �������
    int visit1[5] = { 0 };    // �湮���θ� üũ, ������ ������ ��ġ�ؾ� ��

    int map2[7][7] = { {0, 1, 0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1, 0, 1},
                      {0, 1, 0, 0, 0, 0, 1},
                      {1, 1, 0, 0, 0, 1, 0},
                      {0, 1, 0, 0, 0, 1, 1},
                      {1, 0, 0, 1, 1, 0, 0},
                      {0, 1, 1, 0, 1, 0, 0} };
    int visit2[7] = { 0 };

    int map3[7][7] = { {0, 1, 0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1, 0, 1},
                      {0, 1, 0, 0, 0, 0, 1},
                      {1, 1, 0, 0, 0, 1, 0},
                      {0, 1, 0, 0, 0, 1, 1},
                      {1, 0, 0, 1, 1, 0, 0},
                      {0, 1, 1, 0, 1, 0, 0} };
    int visit3[7] = { 0 };

    DFS(&map3, visit3, 7, 0);

}

