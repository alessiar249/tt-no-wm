// queue.cpp — part of tt-no-wm.

#include "ttnowm/queue.h"

#include <cstdio>

namespace ttnowm {

Queue::Queue(const std::string& config_path)
    : config_path_(config_path) {}

void Queue::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Queue::run() {
    if (verbose_) std::fprintf(stderr, "[tt-no-wm] queue: run\n");
    // core logic lives here
    return true;
}

}  // namespace ttnowm
