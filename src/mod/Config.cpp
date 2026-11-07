#include "mod/Config.h"

namespace trucos {

nlohmann::json makeDefaultConfigJson() { return pl::config::defaultJson(ModConfig{}); }

nlohmann::json makeConfigSchemaJson() { return pl::config::schema(ModConfig{}); }

} // namespace trucos
