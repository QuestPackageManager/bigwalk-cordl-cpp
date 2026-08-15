#pragma once
// IWYU pragma private; include "GlobalNamespace/qlXHmBQMDJiDrhCnZqAwLruxCGJo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(qlXHmBQMDJiDrhCnZqAwLruxCGJo)
// Forward declare root types
namespace GlobalNamespace {
struct qlXHmBQMDJiDrhCnZqAwLruxCGJo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::qlXHmBQMDJiDrhCnZqAwLruxCGJo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::qlXHmBQMDJiDrhCnZqAwLruxCGJo, "", "qlXHmBQMDJiDrhCnZqAwLruxCGJo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: qlXHmBQMDJiDrhCnZqAwLruxCGJo
struct CORDL_TYPE qlXHmBQMDJiDrhCnZqAwLruxCGJo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __qlXHmBQMDJiDrhCnZqAwLruxCGJo_Unwrapped
enum struct __qlXHmBQMDJiDrhCnZqAwLruxCGJo_Unwrapped : int16_t {
__E_VoiceSupported = static_cast<int16_t>(0x4),
__E_None = static_cast<int16_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __qlXHmBQMDJiDrhCnZqAwLruxCGJo_Unwrapped () const noexcept {
return static_cast<__qlXHmBQMDJiDrhCnZqAwLruxCGJo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr qlXHmBQMDJiDrhCnZqAwLruxCGJo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr qlXHmBQMDJiDrhCnZqAwLruxCGJo(int16_t  value__) noexcept;

/// @brief Field None value: I16(0)
static ::GlobalNamespace::qlXHmBQMDJiDrhCnZqAwLruxCGJo const None;

/// @brief Field VoiceSupported value: I16(4)
static ::GlobalNamespace::qlXHmBQMDJiDrhCnZqAwLruxCGJo const VoiceSupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6123};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::qlXHmBQMDJiDrhCnZqAwLruxCGJo, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::qlXHmBQMDJiDrhCnZqAwLruxCGJo) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
