#pragma once
// IWYU pragma private; include "MA/Flora/InstanceTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceTag)
// Forward declare root types
namespace MA::Flora {
struct InstanceTag;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceTag);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceTag, "MA.Flora", "InstanceTag");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceTag
struct CORDL_TYPE InstanceTag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __InstanceTag_Unwrapped
enum struct __InstanceTag_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_Enabled = static_cast<uint32_t>(0x1u),
__E_RandomID = static_cast<uint32_t>(0x400u),
__E_VariationColor = static_cast<uint32_t>(0x800u),
__E_Renderer = static_cast<uint32_t>(0x100000u),
__E_LODGroup = static_cast<uint32_t>(0x200000u),
__E_Billboard = static_cast<uint32_t>(0x400000u),
__E_TerrainTree = static_cast<uint32_t>(0x800000u),
__E_TerrainDetail = static_cast<uint32_t>(0x1000000u),
__E_ContainerOwned = static_cast<uint32_t>(0x2000000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InstanceTag_Unwrapped () const noexcept {
return static_cast<__InstanceTag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InstanceTag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InstanceTag(uint32_t  value__) noexcept;

/// @brief Field Billboard value: U32(4194304)
static ::MA::Flora::InstanceTag const Billboard;

/// @brief Field ContainerOwned value: U32(33554432)
static ::MA::Flora::InstanceTag const ContainerOwned;

/// @brief Field Enabled value: U32(1)
static ::MA::Flora::InstanceTag const Enabled;

/// @brief Field LODGroup value: U32(2097152)
static ::MA::Flora::InstanceTag const LODGroup;

/// @brief Field None value: U32(0)
static ::MA::Flora::InstanceTag const None;

/// @brief Field RandomID value: U32(1024)
static ::MA::Flora::InstanceTag const RandomID;

/// @brief Field Renderer value: U32(1048576)
static ::MA::Flora::InstanceTag const Renderer;

/// @brief Field TerrainDetail value: U32(16777216)
static ::MA::Flora::InstanceTag const TerrainDetail;

/// @brief Field TerrainTree value: U32(8388608)
static ::MA::Flora::InstanceTag const TerrainTree;

/// @brief Field VariationColor value: U32(2048)
static ::MA::Flora::InstanceTag const VariationColor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13026};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceTag, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceTag) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
