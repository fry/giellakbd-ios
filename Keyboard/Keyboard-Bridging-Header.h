//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#include <stdlib.h>
#include <stdint.h>

// Speller handle
typedef void speller_t;

typedef struct str_vec_s {
    size_t len;
    size_t capacity;
    const char** ptr;
} str_vec_t;

extern void speller_vec_free(str_vec_t* vec);
extern speller_t* speller_new();
extern void speller_free(speller_t* handle);
extern str_vec_t* speller_suggest(speller_t* handle, const char* word);
extern bool it_works();
