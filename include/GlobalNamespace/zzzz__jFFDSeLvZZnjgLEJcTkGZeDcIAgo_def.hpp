#pragma once
// IWYU pragma private; include "GlobalNamespace/jFFDSeLvZZnjgLEJcTkGZeDcIAgo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(jFFDSeLvZZnjgLEJcTkGZeDcIAgo)
// Forward declare root types
namespace GlobalNamespace {
struct jFFDSeLvZZnjgLEJcTkGZeDcIAgo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo, "", "jFFDSeLvZZnjgLEJcTkGZeDcIAgo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: jFFDSeLvZZnjgLEJcTkGZeDcIAgo
struct CORDL_TYPE jFFDSeLvZZnjgLEJcTkGZeDcIAgo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __jFFDSeLvZZnjgLEJcTkGZeDcIAgo_Unwrapped
enum struct __jFFDSeLvZZnjgLEJcTkGZeDcIAgo_Unwrapped : int32_t {
__E_ObjectIds = static_cast<int32_t>(0x1),
__E_ObjectOffsets = static_cast<int32_t>(0x2),
__E_Cartesian = static_cast<int32_t>(0x10),
__E_Polar = static_cast<int32_t>(0x20),
__E_Spherical = static_cast<int32_t>(0x40),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __jFFDSeLvZZnjgLEJcTkGZeDcIAgo_Unwrapped () const noexcept {
return static_cast<__jFFDSeLvZZnjgLEJcTkGZeDcIAgo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr jFFDSeLvZZnjgLEJcTkGZeDcIAgo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr jFFDSeLvZZnjgLEJcTkGZeDcIAgo(int32_t  value__) noexcept;

/// @brief Field Cartesian value: I32(16)
static ::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo const Cartesian;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo const None;

/// @brief Field ObjectIds value: I32(1)
static ::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo const ObjectIds;

/// @brief Field ObjectOffsets value: I32(2)
static ::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo const ObjectOffsets;

/// @brief Field Polar value: I32(32)
static ::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo const Polar;

/// @brief Field Spherical value: I32(64)
static ::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo const Spherical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::jFFDSeLvZZnjgLEJcTkGZeDcIAgo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
