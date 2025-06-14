template <class T> Array<T>::Array() : _arr(NULL), _size(0)
{
}

template <class T> Array<T>::Array(unsigned int len)
{
    this->_arr = new T[len];
    this->_size = len;
}

template <class T> Array<T>::Array(const Array<T> &obj)
{
    this->_arr = new T[obj.size()];
    this->_size = obj.size();

    for (size_t i = 0; i < obj.size(); i++)
    {
        this->_arr[i] = obj[i];
    }
}

template <class T> const T &Array<T>::operator[](unsigned int index) const
{
    if (index < 0 || index >= this->_size)
        throw std::out_of_range("Index is out of bound");
    return this->_arr[index];
}

template <class T> T &Array<T>::operator[](unsigned int index)
{
    if (index < 0 || index >= this->_size)
        throw std::out_of_range("Index is out of bound");
    return this->_arr[index];
}

template <class T> unsigned int Array<T>::size() const
{
    return this->_size;
}
template <class T> void Array<T>::free_array()
{
    delete[] this->_arr;
}