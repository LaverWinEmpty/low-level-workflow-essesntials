// Env
// - Version:  C++17
// - Arch:     x64
// - CPU:      Ryzen R7-3700x
// - RAM:      DDR4-3200 / 8GB x 2
// - OS:       Windows 11
// - Compiler: MSVC 2022 v143
// - Option:   Release (/O2)

// Output
// - Hash function: FNV1a
// - Load factor:   2.0
/*
    LWE SET LOAD FACTOR: 2

    HASH INSERT / ITERATE / CLEAR TEST
    ================================================================================
    ELEMENT SIZE: 8
    ELEMENT COUNT: 10000000

    ================================================================================
    STD INSERT (INITIAL) COUNT: 10000000
    --------------------------------------------------------------------------------
    1: 16.383 SEC
    2: 16.330 SEC
    3: 16.518 SEC
    --------------------------------------------------------------------------------
    AVG: 16.410 SEC
    ================================================================================
    LWE INSERT (INITIAL) COUNT: 10000000
    --------------------------------------------------------------------------------
    1: 7.185 SEC
    2: 7.063 SEC
    3: 7.180 SEC
    --------------------------------------------------------------------------------
    AVG: 7.143 SEC
    ================================================================================
    RESULT: 56.47% FASTER
    ================================================================================

    ================================================================================
    STD INSERT (RESERVED) COUNT: 10000000
    --------------------------------------------------------------------------------
    1: 8.992 SEC
    2: 9.062 SEC
    3: 8.995 SEC
    --------------------------------------------------------------------------------
    AVG: 9.016 SEC
    ================================================================================
    LWE INSERT (RESERVED) COUNT: 10000000
    --------------------------------------------------------------------------------
    1: 2.104 SEC
    2: 2.047 SEC
    3: 1.973 SEC
    --------------------------------------------------------------------------------
    AVG: 2.041 SEC
    ================================================================================
    RESULT: 77.36% FASTER
    ================================================================================

    ================================================================================
    STD FIND LOOP: 100000
    --------------------------------------------------------------------------------
    1: 0.044 SEC
    2: 0.043 SEC
    3: 0.042 SEC
    --------------------------------------------------------------------------------
    AVG: 0.043 SEC
    ================================================================================
    LWE FIND LOOP: 100000
    --------------------------------------------------------------------------------
    1: 0.000 SEC
    2: 0.000 SEC
    3: 0.000 SEC
    --------------------------------------------------------------------------------
    AVG: 0.000 SEC
    ================================================================================
    RESULT: LATENCY INCREASED FROM ZERO
    ================================================================================

    ================================================================================
    STD READ 0 ~ 10000000
    --------------------------------------------------------------------------------
    1: 0.846 SEC
    2: 0.860 SEC
    3: 0.883 SEC
    --------------------------------------------------------------------------------
    AVG: 0.863 SEC
    ================================================================================
    LWE READ 0 ~ 10000000
    --------------------------------------------------------------------------------
    1: 0.431 SEC
    2: 0.433 SEC
    3: 0.430 SEC
    --------------------------------------------------------------------------------
    AVG: 0.431 SEC
    ================================================================================
    RESULT: 50.02% FASTER
    ================================================================================

    ================================================================================
    STD CLEAR
    --------------------------------------------------------------------------------
    1: 4.966 SEC
    2: 4.824 SEC
    3: 4.776 SEC
    --------------------------------------------------------------------------------
    AVG: 4.855 SEC
    ================================================================================
    LWE CLEAR
    --------------------------------------------------------------------------------
    1: 2.110 SEC
    2: 2.110 SEC
    3: 2.122 SEC
    --------------------------------------------------------------------------------
    AVG: 2.114 SEC
    ================================================================================
    RESULT: 56.46% FASTER
    ================================================================================


    ELEMENT SIZE: 512
    ELEMENT COUNT: 1000000

    ================================================================================
    STD INSERT (INITIAL) COUNT: 1000000
    --------------------------------------------------------------------------------
    1: 6.071 SEC
    2: 6.043 SEC
    3: 6.046 SEC
    --------------------------------------------------------------------------------
    AVG: 6.053 SEC
    ================================================================================
    LWE INSERT (INITIAL) COUNT: 1000000
    --------------------------------------------------------------------------------
    1: 3.242 SEC
    2: 3.323 SEC
    3: 3.395 SEC
    --------------------------------------------------------------------------------
    AVG: 3.320 SEC
    ================================================================================
    RESULT: 45.15% FASTER
    ================================================================================

    ================================================================================
    STD INSERT (RESERVED) COUNT: 1000000
    --------------------------------------------------------------------------------
    1: 3.169 SEC
    2: 3.188 SEC
    3: 3.183 SEC
    --------------------------------------------------------------------------------
    AVG: 3.180 SEC
    ================================================================================
    LWE INSERT (RESERVED) COUNT: 1000000
    --------------------------------------------------------------------------------
    1: 2.503 SEC
    2: 2.526 SEC
    3: 2.499 SEC
    --------------------------------------------------------------------------------
    AVG: 2.509 SEC
    ================================================================================
    RESULT: 21.09% FASTER
    ================================================================================

    ================================================================================
    STD FIND LOOP: 100000
    --------------------------------------------------------------------------------
    1: 0.264 SEC
    2: 0.264 SEC
    3: 0.265 SEC
    --------------------------------------------------------------------------------
    AVG: 0.264 SEC
    ================================================================================
    LWE FIND LOOP: 100000
    --------------------------------------------------------------------------------
    1: 0.000 SEC
    2: 0.000 SEC
    3: 0.000 SEC
    --------------------------------------------------------------------------------
    AVG: 0.000 SEC
    ================================================================================
    RESULT: LATENCY INCREASED FROM ZERO
    ================================================================================

    ================================================================================
    STD READ 0 ~ 10000000
    --------------------------------------------------------------------------------
    1: 1.105 SEC
    2: 1.115 SEC
    3: 1.205 SEC
    --------------------------------------------------------------------------------
    AVG: 1.142 SEC
    ================================================================================
    LWE READ 0 ~ 10000000
    --------------------------------------------------------------------------------
    1: 0.709 SEC
    2: 0.714 SEC
    3: 0.694 SEC
    --------------------------------------------------------------------------------
    AVG: 0.706 SEC
    ================================================================================
    RESULT: 38.19% FASTER
    ================================================================================

    ================================================================================
    STD CLEAR
    --------------------------------------------------------------------------------
    1: 2.743 SEC
    2: 2.734 SEC
    3: 2.770 SEC
    --------------------------------------------------------------------------------
    AVG: 2.749 SEC
    ================================================================================
    LWE CLEAR
    --------------------------------------------------------------------------------
    1: 1.828 SEC
    2: 1.831 SEC
    3: 1.867 SEC
    --------------------------------------------------------------------------------
    AVG: 1.842 SEC
    ================================================================================
    RESULT: 32.99% FASTER
    ================================================================================


    ELEMENT SIZE: 4096
    ELEMENT COUNT: 100000

    ================================================================================
    STD INSERT (INITIAL) COUNT: 100000
    --------------------------------------------------------------------------------
    1: 4.271 SEC
    2: 4.263 SEC
    3: 4.260 SEC
    --------------------------------------------------------------------------------
    AVG: 4.265 SEC
    ================================================================================
    LWE INSERT (INITIAL) COUNT: 100000
    --------------------------------------------------------------------------------
    1: 2.147 SEC
    2: 2.117 SEC
    3: 2.139 SEC
    --------------------------------------------------------------------------------
    AVG: 2.134 SEC
    ================================================================================
    RESULT: 49.95% FASTER
    ================================================================================

    ================================================================================
    STD INSERT (RESERVED) COUNT: 100000
    --------------------------------------------------------------------------------
    1: 1.872 SEC
    2: 1.867 SEC
    3: 1.867 SEC
    --------------------------------------------------------------------------------
    AVG: 1.869 SEC
    ================================================================================
    LWE INSERT (RESERVED) COUNT: 100000
    --------------------------------------------------------------------------------
    1: 1.810 SEC
    2: 1.805 SEC
    3: 1.803 SEC
    --------------------------------------------------------------------------------
    AVG: 1.806 SEC
    ================================================================================
    RESULT: 3.35% FASTER
    ================================================================================

    ================================================================================
    STD FIND LOOP: 100000
    --------------------------------------------------------------------------------
    1: 1.833 SEC
    2: 1.836 SEC
    3: 1.830 SEC
    --------------------------------------------------------------------------------
    AVG: 1.833 SEC
    ================================================================================
    LWE FIND LOOP: 100000
    --------------------------------------------------------------------------------
    1: 0.000 SEC
    2: 0.000 SEC
    3: 0.000 SEC
    --------------------------------------------------------------------------------
    AVG: 0.000 SEC
    ================================================================================
    RESULT: LATENCY INCREASED FROM ZERO
    ================================================================================

    ================================================================================
    STD READ 0 ~ 10000000
    --------------------------------------------------------------------------------
    1: 1.026 SEC
    2: 1.006 SEC
    3: 1.050 SEC
    --------------------------------------------------------------------------------
    AVG: 1.027 SEC
    ================================================================================
    LWE READ 0 ~ 10000000
    --------------------------------------------------------------------------------
    1: 0.546 SEC
    2: 0.578 SEC
    3: 0.473 SEC
    --------------------------------------------------------------------------------
    AVG: 0.532 SEC
    ================================================================================
    RESULT: 48.18% FASTER
    ================================================================================

    ================================================================================
    STD CLEAR
    --------------------------------------------------------------------------------
    1: 1.831 SEC
    2: 1.830 SEC
    3: 1.830 SEC
    --------------------------------------------------------------------------------
    AVG: 1.830 SEC
    ================================================================================
    LWE CLEAR
    --------------------------------------------------------------------------------
    1: 1.229 SEC
    2: 1.214 SEC
    3: 1.214 SEC
    --------------------------------------------------------------------------------
    AVG: 1.219 SEC
    ================================================================================
    RESULT: 33.40% FASTER
    ================================================================================



    HASH COLLISION TEST
    ================================================================================
    ELEMENT SIZE: 8
    SAME DATA INSERT LOOP: 10000000

    ================================================================================
    STD INSERT SAME VALUE LOOP: 10000000
    --------------------------------------------------------------------------------
    1: 3.460 SEC
    2: 3.414 SEC
    3: 3.508 SEC
    --------------------------------------------------------------------------------
    AVG: 3.461 SEC
    ================================================================================
    LWE INSERT SAME VALUE LOOP: 10000000
    --------------------------------------------------------------------------------
    1: 0.478 SEC
    2: 0.476 SEC
    3: 0.473 SEC
    --------------------------------------------------------------------------------
    AVG: 0.476 SEC
    ================================================================================
    RESULT: 86.26% FASTER
    ================================================================================


    ELEMENT SIZE: 512
    SAME DATA INSERT LOOP: 10000000

    ================================================================================
    STD INSERT SAME VALUE LOOP: 10000000
    --------------------------------------------------------------------------------
    1: 3.717 SEC
    2: 3.714 SEC
    3: 3.734 SEC
    --------------------------------------------------------------------------------
    AVG: 3.722 SEC
    ================================================================================
    LWE INSERT SAME VALUE LOOP: 10000000
    --------------------------------------------------------------------------------
    1: 0.798 SEC
    2: 0.799 SEC
    3: 0.799 SEC
    --------------------------------------------------------------------------------
    AVG: 0.799 SEC
    ================================================================================
    RESULT: 78.54% FASTER
    ================================================================================


    ELEMENT SIZE: 4096
    SAME DATA INSERT LOOP: 10000000

    ================================================================================
    STD INSERT SAME VALUE LOOP: 10000000
    --------------------------------------------------------------------------------
    1: 5.487 SEC
    2: 5.472 SEC
    3: 5.481 SEC
    --------------------------------------------------------------------------------
    AVG: 5.480 SEC
    ================================================================================
    LWE INSERT SAME VALUE LOOP: 10000000
    --------------------------------------------------------------------------------
    1: 2.442 SEC
    2: 2.441 SEC
    3: 2.449 SEC
    --------------------------------------------------------------------------------
    AVG: 2.444 SEC
    ================================================================================
    RESULT: 55.40% FASTER
    ================================================================================
*/

/**************************************************************************************************
 * SETTING
 **************************************************************************************************/
#include "internal/bench.hpp"

static constexpr float LOAD_FACTOR = 2.f; // extream case

char table[255]; // dummy, for fill buffer

template<size_t N> struct Data {
    static const size_t BUFFER_SIZE = N - sizeof(int);

    Data(int n = 0): n(n) { memset(buffer, table[uint8_t(n & 0xFF)], BUFFER_SIZE); } // dummy set
    operator int() { return n; }
    bool operator==(const Data& in) const { return n == in.n && !memcmp(buffer, in.buffer, BUFFER_SIZE); }
    bool operator!=(const Data& in) const { return !(*this == in); }

    int  n;
    char buffer[BUFFER_SIZE] = { 0 };
};

template<size_t N> struct InvalidData: Data<N> {
    using Data<N>::Data;
};

// my hash forward  declaration
LWE_BEGIN
namespace util {
template<typename T> hash_t hashof(const T&);
}
LWE_END

// hash override -> FNV1a
template<size_t N> struct std::hash<Data<N>> {
    size_t operator()(const Data<N>& in) const { return LWE::util::hashof(in); }
};

// invalid hash override
LWE_BEGIN
namespace util {
template<size_t N> hash_t hashof(const InvalidData<N>&) {
    return 100;
}
} // namespace util
LWE_END

// use same hash function
template<size_t N> struct std::hash<InvalidData<N>> {
    size_t operator()(const InvalidData<N>& in) const { return LWE::util::hashof(in); }
};

/**************************************************************************************************
 * include
 **************************************************************************************************/
#include "../../util/hash.hpp"
#include "../../stl/set.hpp"
#include "../../util/timer.hpp"
#include "../../util/random.hpp"

using namespace lwe::mem;
using namespace lwe::stl;

/**************************************************************************************************
 * main
 **************************************************************************************************/
template<size_t, int> void test_insert();
template<size_t, int> void test_collision();

int main() {
    Bench b;

    // init
    for(int i = 0; i < 255; ++i) {
        table[i] = i;
    }
    std::cout << "LWE SET LOAD FACTOR: " << LOAD_FACTOR << "\n";
    std::cout << std::endl;

    std::cout << "HASH INSERT / ITERATE / CLEAR TEST\n";
    b.line();

    test_insert<8, 10'000'000>();  // small size data
    test_insert<512, 1'000'000>(); // medium size data
    test_insert<4'096, 100'000>(); // large size data

    std::cout << std::endl;

    std::cout << "HASH COLLISION TEST\n";
    b.line();

    test_collision<8, 10'000'000>();     // small size data collision test
    test_collision<512, 10'000'000>();   // small size data collision test
    test_collision<4'096, 10'000'000>(); // small size data collision test
}

/**************************************************************************************************
 * insert test code
 **************************************************************************************************/
template<size_t SIZE, int COUNT> void test_insert() {
    static constexpr int ITERATE = 10'000'000; // circulation
    static constexpr int FIND    = 100'000;    // low: std is slow...

    float        sec = 0;
    float        stlsec;
    volatile int var = 0;

    using Type = Data<SIZE>;

    std::cout << "ELEMENT SIZE: " << sizeof(Type) << "\n";
    std::cout << "ELEMENT COUNT: " << COUNT << "\n";
    std::cout << std::endl;

    std::unordered_set<Type> stdset;
    LWE::stl::Set<Type>      lweset(LOAD_FACTOR);

    Bench bench, std_in, std_free, lwe_in, lwe_free;

    ///////////////////////////////////////////////////////////////////////////////
    // INSERT (INITIAL)
    ///////////////////////////////////////////////////////////////////////////////

    bench.loop([&]() {
        std::unordered_set<Type> temp;
        for(int i = 0; i < COUNT; ++i) temp.insert(i);
        volatile size_t size = temp.size(); // unoptimized
    });
    bench.output("STD INSERT (INITIAL) COUNT: ", COUNT);
    stlsec = bench.average();

    bench.loop([&]() {
        LWE::stl::Set<Type> temp(LOAD_FACTOR);
        for(int i = 0; i < COUNT; ++i) temp.push(i);
        volatile size_t size = temp.size(); // unoptimized
    });
    bench.output("LWE INSERT (INITIAL) COUNT: ", COUNT);
    bench.from(stlsec);

    ///////////////////////////////////////////////////////////////////////////////
    // WARM UP
    ///////////////////////////////////////////////////////////////////////////////

    for(int i = 0; i < COUNT; ++i) stdset.insert(i); // allocate
    for(int i = 0; i < COUNT; ++i) lweset.push(i);   // allocate
    stdset.clear();                                  // clear
    lweset.clear();                                  // clear

    // insert / clear loop 2 for average
    for(int i = 0; i < 2; ++i) {
        // std insert
        std_in.once([&]() {
            for(int i = 0; i < COUNT; ++i) stdset.insert(i);
        });
        // std remove
        std_free.once([&]() {
            for(int i = 0; i < COUNT; ++i) stdset.erase(i);
        });
        // lwe insert
        lwe_in.once([&]() {
            for(int i = 0; i < COUNT; ++i) lweset.push(i);
        });
        // lwe remove
        lwe_free.once([&]() {
            for(int i = 0; i < COUNT; ++i) lweset.pop(i);
        });
    }

    ///////////////////////////////////////////////////////////////////////////////
    // INSERT ONCE
    ///////////////////////////////////////////////////////////////////////////////

    std_in.once([&]() {
        for(int i = 0; i < COUNT; ++i) stdset.insert(i);
    });
    std_in.output("STD INSERT (RESERVED) COUNT: ", COUNT);
    stlsec = std_in.average();

    lwe_in.once([&]() {
        for(int i = 0; i < COUNT; ++i) lweset.push(i);
    });
    lwe_in.output("LWE INSERT (RESERVED) COUNT: ", COUNT);
    lwe_in.from(stlsec);

    ///////////////////////////////////////////////////////////////////////////////
    // find
    ///////////////////////////////////////////////////////////////////////////////

    var = 0;
    bench.loop([&]() {
        for(int i = 0; i < FIND; ++i) {
            int value  = lwe::util::Random::generate(0, COUNT - 1); // ignore caching
            var       += stdset.find(value)->n;
        }
    });
    bench.output("STD FIND LOOP: ", FIND);
    stlsec = bench.average();

    var = 0;
    bench.loop([&]() {
        int value  = lwe::util::Random::generate(0, COUNT - 1); // ignore caching
        var       += lweset.find(value)->n;
    });
    bench.output("LWE FIND LOOP: ", FIND);
    bench.from(stlsec);

    ///////////////////////////////////////////////////////////////////////////////
    // ITERATE
    ///////////////////////////////////////////////////////////////////////////////

    var = 0;
    bench.loop([&]() {
        auto       itr = stdset.begin();
        const auto end = stdset.end();
        for(int i = 0; i < ITERATE; ++i) {
            var += itr->n;
            if((++itr) == end) itr = stdset.begin();
        }
    });
    bench.output("STD READ 0 ~ ", ITERATE);
    stlsec = bench.average();

    var = 0;
    bench.loop([&]() {
        auto       itr = lweset.begin();
        const auto end = lweset.end();
        for(int i = 0; i < ITERATE; ++i) {
            var += itr->n;
            if((++itr) == end) itr = lweset.begin();
        }
    });
    bench.output("LWE READ 0 ~ ", ITERATE);
    bench.from(stlsec);

    ///////////////////////////////////////////////////////////////////////////
    // clear once
    ///////////////////////////////////////////////////////////////////////////

    std_free.once([&]() {
        for(int i = 0; i < COUNT; ++i) stdset.erase(i);
    });
    std_free.output("STD CLEAR");
    stlsec = std_free.average();

    lwe_free.once([&]() {
        for(int i = 0; i < COUNT; ++i) lweset.pop(i);
    });
    lwe_free.output("LWE CLEAR");
    lwe_free.from(stlsec);

    std::cout << std::endl;
}

/**************************************************************************************************
 * hash collision test code
 **************************************************************************************************/
template<size_t SIZE, int COUNT> void test_collision() {
    float        sec = 0;
    volatile int var = 0;

    using Type = InvalidData<SIZE>;

    std::cout << "ELEMENT SIZE: " << sizeof(Type) << "\n";
    std::cout << "SAME DATA INSERT LOOP: " << COUNT << "\n";
    std::cout << std::endl;

    std::unordered_set<Type> stdset;
    LWE::stl::Set<Type>      lweset(LOAD_FACTOR);

    Bench bench;

    float stlsec;

    bench.loop([&]() {
        for(int i = 0; i < COUNT; ++i) {
            stdset.insert(100); // same value
        }
    });
    bench.output("STD INSERT SAME VALUE LOOP: ", COUNT);
    stlsec = bench.average();

    bench.loop([&]() {
        for(int i = 0; i < COUNT; ++i) {
            lweset.push(100); // same value
        }
    });
    bench.output("LWE INSERT SAME VALUE LOOP: ", COUNT);
    bench.from(stlsec);

    std::cout << std::endl;
}
