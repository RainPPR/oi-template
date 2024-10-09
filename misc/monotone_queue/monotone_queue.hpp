template<
	class T,
	class Compare = std::less<T>,
	class Base = std::deque<std::pair<size_t, T>>
>

class monotone_queue : private Base {

private:

	size_t tot, head;

	void __pop(size_t id) {
		while (!empty() && front().first <= id)
			Base::pop_front();
		return;
	}

	void __push(const T& value, size_t id) {
		while (!empty() && Compare{}(value, back().second))
			Base::pop_back();
		Base::push_back(std::make_pair(id, value));
	}

public:

	monotone_queue(): tot(0), head(0) {}

	auto push(const T& value) { return __push(value, ++tot); }
	auto pop() { return __pop(++head); }
	auto top() { return Base::front().second; }

	auto size() { return Base::size(); }
	auto empty() { return Base::empty(); }
	auto clear() { tot = head = 0; return Base::clear(); }
	auto shrink_to_fit() { return Base::shrink_to_fit(); }

	auto back() { return Base::back(); }
	auto front() { return Base::front(); }

	auto begin() { return Base::begin(); }
	auto cbegin() { return Base::cbegin(); }
	auto end() { return Base::end(); }
	auto cend() { return Base::cend(); }
	auto rbegin() { return Base::rbegin(); }
	auto crbegin() { return Base::crbegin(); }
	auto rend() { return Base::rend(); }
	auto crend() { return Base::crend(); }

};