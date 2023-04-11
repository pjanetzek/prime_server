#pragma once

#include <string>
#include <cstdio>

std::pair<unsigned int, unsigned int> parse_quiesce_config(const std::string& config,
                                                           unsigned int drain_seconds = 28,
                                                           unsigned int shutdown_seconds = 1) {
  sscanf(config.c_str(), "%u,%u", &drain_seconds, &shutdown_seconds);

  return { drain_seconds, shutdown_seconds };
}
