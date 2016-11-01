# TeseNative
A native (C++) port of text serializer library

## How to use?
```cpp
Address* adr = new Address("Main Road", 21, 42,
            new City("Berlin", State::UT, 12345));
    
Tese* tese = (new TeseBuilder())->skipNull(true)->create();

ofstream* writer = new ofstream("test.txt");
tese->serialize(adr, writer);
writer->flush();
writer->close();

ifstream* reader = new ifstream("test.txt");
adr = tese->deserialize<Address*>(reader);
reader->close();
```
