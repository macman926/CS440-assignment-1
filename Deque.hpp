#ifndef DEQUE
#define DEQUE(X)	\
			\
struct Deque_##X{	\
	X* adt;		\
	int front;	\
	int back;	\
	int size;	\
	int total_elems;\
	\
	size_t(*size)(Deque_##X);	\
	bool(*empty)(Deque_##X);	\
	void(*grow)(Deque_##X);		\
	void(*clear)(Deque_##X);	\
	void(*push_back)(Deque_##X, X);	\
	void(*push_front)(Deque_##X*, X);	\
	void(*pop_back)(Deque_##X*);	\
	void(*pop_front)(Deque_##X*);	\
	void(*clear)(Deque_##X*);	\
	void(*dtor)(Deque_##X*);	\
	void(*sort)(Deque_##X*, Deque_##X##_Iterator, Deque)##X##_Iterator);\
	X&(*front)(Deque_##X*);\
	X&(*back)(Deque_##X*);\
	X&(*at)(Deque_##X*, size_t cursor);\
	Deque_##X##_Iterator(*begin)(Deque_##X*);\
	Deque_##X##_Iterator(*end)(Deque_##X*);\
};	\
void Deque_##X##_ctor(X##_Deque* deq, unsigned int (*fp)(unsigned int)){	\
	deq->size = 10;	\
	deq->total_elems = 0; \
	deq->front = 0;\
	deq->back = 0;\
	deq->adt = (X*)(malloc)(sizeof(X)*10));\
	deq->size = &X##_getSize;\
	deq->empty = &X##_ifEmpty;\
	deq->at = &X##_scoop;\
	deq->push_front = &X##_pushf;\
	deq->push_back = &X##_pushb;\
	deq->pop_back = &X##_popb;\
	deq->pop_front = &X##_popf;\
	deq->clear = &X##_clearDeq;\
	deq->front = &X##_getFront;\
	deq->back = &X##_getBack;\
}	\
struct Deque_##X##_Iterator {	\
	X&(*deref)(Deque_##X##_Iterator*);	\
	void(*inc)(Deque_##X##_Iterator*);	\
	void(*dec)(Deque_##X##_Iterator*);	\
};
#endif
