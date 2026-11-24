// fetcher.cpp — part of tt-no-wm.

#include "ttnowm/fetcher.h"

#include <cstdio>

namespace ttnowm {

Fetcher::Fetcher(const std::string& config_path)
    : config_path_(config_path) {}

void Fetcher::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fetcher::run() {
    if (verbose_) std::fprintf(stderr, "[tt-no-wm] fetcher: run\n");
    // core logic lives here
    return true;
}

}  // namespace ttnowm
