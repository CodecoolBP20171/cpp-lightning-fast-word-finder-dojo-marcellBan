//
// Created by László Molnár on 2017-11-15.
//

#ifndef CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
#define CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP

class LightningWordFinder {
public:
    std::string getLongestWord(const std::string& text) {
        size_t maxlen = 0ul;
        size_t maxlen_start = 0ul;
        size_t currlen = 0ul;
        size_t currlen_start = 0ul;
        for (int i = 0; i < text.length(); ++i) {
            char c = text[i];
            if ((c >= 'a' && c <= 'z') ||
                (c >= 'A' && c <= 'Z')) {
                ++currlen;
            } else {
                if (currlen > maxlen) {
                    maxlen = currlen;
                    maxlen_start = currlen_start;
                }
                currlen = 0ul;
                currlen_start = i + 1ul;
            }
        }
        return text.substr(maxlen_start, maxlen);
    }
};

#endif //CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
