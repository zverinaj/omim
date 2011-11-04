# Search library.

TARGET = search
TEMPLATE = lib
CONFIG += staticlib

ROOT_DIR = ..
DEPENDENCIES = storage indexer geometry coding base

include($$ROOT_DIR/common.pri)

HEADERS += \
    search_common.hpp \
    search_engine.hpp \
    intermediate_result.hpp \
    keyword_matcher.hpp \
    search_query.hpp \
    result.hpp \
    latlon_match.hpp \
    search_trie_matching.hpp \
    approximate_string_match.hpp \
    feature_offset_match.hpp \
    category_info.hpp \

SOURCES += \
    search_engine.cpp \
    intermediate_result.cpp \
    keyword_matcher.cpp \
    search_query.cpp \
    result.cpp \
    latlon_match.cpp \
    approximate_string_match.cpp \
