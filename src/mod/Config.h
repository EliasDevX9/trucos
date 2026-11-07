#pragma once

#include <string>
#include <string_view>

#include <pl/Config.hpp>

namespace trucos {

struct ModConfig {
    int version = 1;
};

nlohmann::json makeDefaultConfigJson();
nlohmann::json makeConfigSchemaJson();

} // namespace trucos

template <> struct pl::config::Schema<trucos::ModConfig> {
    static constexpr std::string_view title = "Trucos Config";
    static constexpr std::string_view description = {};

    static constexpr FieldSchema field(std::string_view name) {
        if (name == "version")
            return {.title = "Version", .readOnly = true};
        return {};
    }
};
