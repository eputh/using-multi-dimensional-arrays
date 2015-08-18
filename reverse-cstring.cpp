//
// Name: Emily Puth
// ID: 28239807
//

#include "problem-three.hpp"

char *reverseCString(char s[]) {
	char *head = s;
	char *tail = s + strlen(s) -1;
	for (; tail > head; --tail, head++) {
		char temp = *head;
		*head = *tail;
		*tail = temp;
	}
	return s;
}
