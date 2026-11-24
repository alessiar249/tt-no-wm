// cleaner.cpp — part of tt-no-wm.

#include "ttnowm/cleaner.h"

#include <cstdio>

namespace ttnowm {

Cleaner::Cleaner(const std::string& config_path)
    : config_path_(config_path) {}

void Cleaner::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cleaner::run() {
    if (verbose_) std::fprintf(stderr, "[tt-no-wm] cleaner: run\n");
    // core logic lives here
    return true;
}

}  // namespace ttnowm
