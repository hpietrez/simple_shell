#ifndef HISTORY_H
#define HISTORY_H

/**
 * struct HistList - singly linked list
 * @cmd: command line entered
 * @next: pointer to a next node
 * Description: singly linked list node structure for History
 * for Holberton project
 */

typedef struct HistList
{
	char *cmd;
	struct HistList *next;
} HistList;

#endif
