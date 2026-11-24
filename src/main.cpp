// main.cpp — entry point. Wires config and subsystems together.

#include "ttnowm/settings.h"
#include "ttnowm/fetcher.h"
#include "ttnowm/cleaner.h"
#include "ttnowm/queue.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    ttnowm::Settings settings = ttnowm::Settings::load_default();
    ttnowm::Fetcher fetcher(settings.store_path);
    ttnowm::Cleaner cleaner(settings.store_path);
    ttnowm::Queue queue(settings.store_path);
    std::fprintf(stderr, "[tt-no-wm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
