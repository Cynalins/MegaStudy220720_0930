#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// *���
#define PI 3.141592f
// *�޼��� ���
#define Output(str) printf("%s\n", str)
#define ERR_MSG(FileName) printf("%d���ο��� ERR�� �߻��Ͽ����ϴ�.\n%s ���� File�� ã�� �� �����ϴ�.\n",__LINE__, FileName)
// *����
#define SUM(a, b) (a + b)
#define MUL(a, b) (a * b)

extern int Count;