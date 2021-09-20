
#define DEQUE(X)

struct Deque_##X{
	//Struct fields
	X* adt;
	int front;
	int back;
	int size;
	int total_elems;
	char type_name[Deque_##X];

	//Struct functions
	size_t(*size)(Deque_##X);
	bool(*empty)(Deque_##X);
	void(*grow)(Deque_##X);
	void(*push_back)(Deque_##X, X);
	void(*push_front)(Deque_##X*, X);
	X&(*front)(Deque_##X*);
	X&(*back)(Deque_##X*);
	void(*pop_back)(Deque_##X*);
	void(*pop_front)(Deque_##X*);
	Deque_##X##_Iterator(*begin)(Deque_##X*);
	Deque_##X##_Iterator(*end)(Deque_##X*);
	X&(*at)(Deque_##X*, size_t cursor);
	void(*clear)(Deque_##X*);
	void(*dtor)(Deque_##X*);
	void(*sort)(Deque_##X*, Deque_##X##_Iterator, Deque)##X##_Iterator);
};

struct Deque_##X##_Iterator {
	X&(*deref)(Deque_##X##_Iterator*);
	void(*inc)(Deque_##X##_Iterator*);
	void(*dec)(Deque_##X##_Iterator*);
};

bool empty
#endif
