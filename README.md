Strategy Pattern
----------------
The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

The clients are the classes derived from class Duck, e.g. Mallard
The algorithms are the classes derived from class QuackBehaviour, e.g. Squeak
The abstract class Duck has a pointer attribute to class QuackBehviour.

