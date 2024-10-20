#pragma once

#include "duckdb.hpp"

namespace duckdb {

using HeaderMap = case_insensitive_map_t<string>;

class OpenPromptExtension : public Extension {
public:
    void Load(DuckDB &db) override;
    std::string Name() override;
    std::string Version() const override;

};

} // namespace duckdb
