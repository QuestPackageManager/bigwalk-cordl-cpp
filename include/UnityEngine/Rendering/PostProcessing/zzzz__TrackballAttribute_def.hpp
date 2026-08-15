#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TrackballAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackballAttribute)
namespace UnityEngine::Rendering::PostProcessing {
struct TrackballAttribute_Mode;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct TrackballAttribute_Mode;
}
namespace UnityEngine::Rendering::PostProcessing {
class TrackballAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TrackballAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode, "UnityEngine.Rendering.PostProcessing", "TrackballAttribute/Mode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TrackballAttribute*, "UnityEngine.Rendering.PostProcessing", "TrackballAttribute");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode
struct CORDL_TYPE TrackballAttribute_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackballAttribute_Mode_Unwrapped
enum struct __TrackballAttribute_Mode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Lift = static_cast<int32_t>(0x1),
__E_Gamma = static_cast<int32_t>(0x2),
__E_Gain = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackballAttribute_Mode_Unwrapped () const noexcept {
return static_cast<__TrackballAttribute_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TrackballAttribute_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TrackballAttribute_Mode(int32_t  value__) noexcept;

/// @brief Field Gain value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode const Gain;

/// @brief Field Gamma value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode const Gamma;

/// @brief Field Lift value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode const Lift;

/// @brief Field None value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Attribute, UnityEngine.Rendering.PostProcessing.TrackballAttribute::Mode
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TrackballAttribute
class CORDL_TYPE TrackballAttribute : public ::System::Attribute {
public:
// Declarations
using Mode = ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  mode;

static inline ::UnityEngine::Rendering::PostProcessing::TrackballAttribute* New_ctor(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  mode) ;

constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode const& __cordl_internal_get_mode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  mode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackballAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackballAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackballAttribute(TrackballAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackballAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackballAttribute(TrackballAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18537};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::TrackballAttribute_Mode  ___mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TrackballAttribute, ___mode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TrackballAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
