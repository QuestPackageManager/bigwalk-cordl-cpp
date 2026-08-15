#pragma once
// IWYU pragma private; include "GlobalNamespace/mRvcmFbCWngHDKUOjLFLRvYEZheM.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(mRvcmFbCWngHDKUOjLFLRvYEZheM)
// Forward declare root types
namespace GlobalNamespace {
struct mRvcmFbCWngHDKUOjLFLRvYEZheM;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM, "", "mRvcmFbCWngHDKUOjLFLRvYEZheM");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: mRvcmFbCWngHDKUOjLFLRvYEZheM
struct CORDL_TYPE mRvcmFbCWngHDKUOjLFLRvYEZheM {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __mRvcmFbCWngHDKUOjLFLRvYEZheM_Unwrapped
enum struct __mRvcmFbCWngHDKUOjLFLRvYEZheM_Unwrapped : int32_t {
__E_ConstantBuffer = static_cast<int32_t>(0x0),
__E_TextureBuffer = static_cast<int32_t>(0x1),
__E_InterfacePointers = static_cast<int32_t>(0x2),
__E_ResourceBindInformation = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __mRvcmFbCWngHDKUOjLFLRvYEZheM_Unwrapped () const noexcept {
return static_cast<__mRvcmFbCWngHDKUOjLFLRvYEZheM_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr mRvcmFbCWngHDKUOjLFLRvYEZheM() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr mRvcmFbCWngHDKUOjLFLRvYEZheM(int32_t  value__) noexcept;

/// @brief Field ConstantBuffer value: I32(0)
static ::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM const ConstantBuffer;

/// @brief Field InterfacePointers value: I32(2)
static ::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM const InterfacePointers;

/// @brief Field ResourceBindInformation value: I32(3)
static ::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM const ResourceBindInformation;

/// @brief Field TextureBuffer value: I32(1)
static ::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM const TextureBuffer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::mRvcmFbCWngHDKUOjLFLRvYEZheM) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
