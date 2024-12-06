* Union in C is similar to structure except that all of its members start at the same location in memory and its variable can represent the value of only one member element at a time

* size consumed by union is equal to size of its biggest member element

* Use union when access to its member element is mutually exclusive

* Applicabitily of unions in embedded system:
    1. Bit extraction
    2. Storing mutually exclusive data thus saving memory

* The value will be overwritten in union, hence they have same memory location
