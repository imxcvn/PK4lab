export module Lista;
import <memory>;
import <string>;

export namespace Lista {
	template <class T> class List;

	template <class T>
	class Node {
	private:
		Node<T>* m_next = nullptr;
		T m_value;
		friend class List<T>;
	public:
		Node(const T& v) : m_value{ v } {}
		Node* getNext() const {
			return m_next;
		}

		T& getValue() {
			return m_value;
		}

		void setValue(const T& v) {
			m_value = v;
		}
	};

	template <class T>
	class List {
	private:
		Node<T>* m_first;
		Node<T>* m_last;
		int m_size;
	public:
		List() {
			m_first = nullptr;
			m_last = nullptr;
			m_size = 0;
		}

		~List() {
			Node<T>* current = m_first;
			while (current != nullptr) {
				Node<T>* next = current->m_next;
				delete current;
				current = next;
			}
		}

		void addElement(const T& value) {
			Node<T>* newNode = new Node<T>{ value };
			if (m_first == nullptr) {
				m_first = newNode;

			}
			else
				m_last->m_next = newNode;
			m_last = newNode;
			m_size++;
		}

		int getSize() const {
			return m_size;
		}

		Node<T>* begin() const {
			return m_first;
		}

		Node<T>* end() const {
			return m_last;
		}

		T& getElementAt(int index) {
			if (index < 0 || index >= m_size) {
				throw std::exception("Indeks poza zakresem.");
			}

			Node<T>* currentNode = m_first;
			for (int i = 0; i < index; ++i) {
				currentNode = currentNode->getNext();
			}

			return currentNode->getValue();
		}
	};
}

