// 3.6统计一天客户在银行都留的平均时间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>

typedef struct 
{
	int OccurTime;
	int NType;
}Event, ElemType;

typedef struct QNode
{

	QElemType Data;
	QNode *next;
}*QLink;

typedef struct 
{
	QLink front;
	QLink rear;
}QLinkList;

typedef struct LNode
{
	int Data;
	LNode *next;
}*LinkList;

typedef LinkList EventList;

typedef struct 
{
	int ArriveTime;
	int Duration;
}QElemType;

int TotalTime, CustomerNum;

EventList ev;
Event en;
QLinkList q[5];
QElemType custormer;

int main()
{
    return 0;
}

void Bank_Simulation(int CloseTime) {
	OpenForDay();
	while (MoreEvent)
	{
		EventDrived(OccurTime, EventType);
		switch (EventTpye)
		{
		case 'A':CustomerArrived(); break;
		case 'D': CustomerDeparture(); break;
		default:Invalid();
		}
		CloseForDay;
	}
}

void OpenForDay() {
	TotalTime = 0;
	CustomerNum = 0;
	InitList(ev);
	en.OccurTime= 0;
	en.NType = 0;
	OrderInsert(ev, en, cmp);
	for (int i = 1; i <= 4; i++)
	{
		InitQueue(q[i]);
	}
}

//基本操作算法
int InitQueue(QLinkList Q) {
	Q.front = Q.rear = (QLink)malloc(sizeof(QNode));
	if (!Q.front)
	{
		return -1;
	}
	Q.front->next = NULL;
	return 1;
}

int InitList(EventList Q) {
	Q = (LinkList)malloc(sizeof(LNode));
	if (!Q)
	{
		return -1;
	}
	return 1; 

 }