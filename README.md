# TeseNative
A native (C++) port of text serializer library

## How to use?
```cpp
Address* adr = new Address("Main Road", 21, 42,
            new City("Berlin", State::UT, 12345));
    
Tese* tese = new Tese();
```
