#pragma once
// IWYU pragma private; include "Mirror/NetworkIdentitySerialization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkIdentitySerialization)
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace Mirror {
struct NetworkIdentitySerialization;
}
// Write type traits
MARK_VAL_T(::Mirror::NetworkIdentitySerialization);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkIdentitySerialization, "Mirror", "NetworkIdentitySerialization");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkIdentitySerialization
struct CORDL_TYPE NetworkIdentitySerialization {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkIdentitySerialization() ;

// Ctor Parameters [CppParam { name: "tick", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ownerWriter", ty: "::Mirror::NetworkWriter*", modifiers: "", def_value: None }, CppParam { name: "observersWriter", ty: "::Mirror::NetworkWriter*", modifiers: "", def_value: None }]
constexpr NetworkIdentitySerialization(int32_t  tick, ::Mirror::NetworkWriter*  ownerWriter, ::Mirror::NetworkWriter*  observersWriter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field tick, offset: 0x0, size: 0x4, def value: None
 int32_t  tick;

/// @brief Field ownerWriter, offset: 0x8, size: 0x8, def value: None
 ::Mirror::NetworkWriter*  ownerWriter;

/// @brief Field observersWriter, offset: 0x10, size: 0x8, def value: None
 ::Mirror::NetworkWriter*  observersWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkIdentitySerialization, tick) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentitySerialization, ownerWriter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentitySerialization, observersWriter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkIdentitySerialization) == 0x18, "Size mismatch!");

} // namespace end def Mirror
