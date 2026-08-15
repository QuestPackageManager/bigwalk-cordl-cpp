#pragma once
// IWYU pragma private; include "GlobalNamespace/CpiynlCsPzNfFBDqFSaQwlezYfVH.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CpiynlCsPzNfFBDqFSaQwlezYfVH)
// Forward declare root types
namespace GlobalNamespace {
struct CpiynlCsPzNfFBDqFSaQwlezYfVH;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH, "", "CpiynlCsPzNfFBDqFSaQwlezYfVH");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CpiynlCsPzNfFBDqFSaQwlezYfVH
struct CORDL_TYPE CpiynlCsPzNfFBDqFSaQwlezYfVH {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CpiynlCsPzNfFBDqFSaQwlezYfVH_Unwrapped
enum struct __CpiynlCsPzNfFBDqFSaQwlezYfVH_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_XINPUT_9_1_0 = static_cast<int32_t>(0x1),
__E_XINPUT_1_1 = static_cast<int32_t>(0x2),
__E_XINPUT_1_2 = static_cast<int32_t>(0x3),
__E_XINPUT_1_3 = static_cast<int32_t>(0x4),
__E_XINPUT_1_4 = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CpiynlCsPzNfFBDqFSaQwlezYfVH_Unwrapped () const noexcept {
return static_cast<__CpiynlCsPzNfFBDqFSaQwlezYfVH_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CpiynlCsPzNfFBDqFSaQwlezYfVH() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CpiynlCsPzNfFBDqFSaQwlezYfVH(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH const None;

/// @brief Field XINPUT_1_1 value: I32(2)
static ::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH const XINPUT_1_1;

/// @brief Field XINPUT_1_2 value: I32(3)
static ::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH const XINPUT_1_2;

/// @brief Field XINPUT_1_3 value: I32(4)
static ::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH const XINPUT_1_3;

/// @brief Field XINPUT_1_4 value: I32(5)
static ::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH const XINPUT_1_4;

/// @brief Field XINPUT_9_1_0 value: I32(1)
static ::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH const XINPUT_9_1_0;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CpiynlCsPzNfFBDqFSaQwlezYfVH) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
