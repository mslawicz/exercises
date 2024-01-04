#pragma once

template<typename K, typename V>
class Item
{
    public:
    Item(K key, V value);
    K getKey() const { return key; }
    V getValue() const { return value; }

    private:
    K key;
    V value;
};

//implementation must be placed in the same module
template<typename K, typename V>
Item<K, V>::Item(K key, V value) :
    key(key),
    value(value)
{
    
}