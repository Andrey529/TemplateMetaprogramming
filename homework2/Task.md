## Домашнее задание 1.

1) Напишите метафункцию, которая будет проверять, что класс содержит все алиасы, которые должны быть у контейнера.
   См. требование Container на cppreference.


2) Напишите метафункцию, которая будет проверять, может ли итератор являться Bidirectional.
   См. требование LegacyBidirectionalIterator.


3) Напишите  remove_pointers из прошлого дз без специализаций для cv типов. Нужно использовать SFINAE на std::is_pointer и убирать указатели std::remove_pointer. Смотрите разбор первого дз.
