#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BindHeightFilterRangeToTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindHeightFilterRangeToTransform)
namespace JBooth::MicroVerseCore {
struct BindHeightFilterRangeToTransform_BindTarget;
}
namespace JBooth::MicroVerseCore {
struct BindHeightFilterRangeToTransform_ValueMode;
}
namespace JBooth::MicroVerseCore {
class Stamp;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct BindHeightFilterRangeToTransform_BindTarget;
}
namespace JBooth::MicroVerseCore {
struct BindHeightFilterRangeToTransform_ValueMode;
}
namespace JBooth::MicroVerseCore {
class BindHeightFilterRangeToTransform;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget);
MARK_VAL_T(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode);
MARK_REF_T(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget, "JBooth.MicroVerseCore", "BindHeightFilterRangeToTransform/BindTarget");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode, "JBooth.MicroVerseCore", "BindHeightFilterRangeToTransform/ValueMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform*, "JBooth.MicroVerseCore", "BindHeightFilterRangeToTransform");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BindHeightFilterRangeToTransform/BindTarget
struct CORDL_TYPE BindHeightFilterRangeToTransform_BindTarget {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindHeightFilterRangeToTransform_BindTarget_Unwrapped
enum struct __BindHeightFilterRangeToTransform_BindTarget_Unwrapped : int32_t {
__E_Minimum = static_cast<int32_t>(0x0),
__E_Maximum = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindHeightFilterRangeToTransform_BindTarget_Unwrapped () const noexcept {
return static_cast<__BindHeightFilterRangeToTransform_BindTarget_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BindHeightFilterRangeToTransform_BindTarget() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BindHeightFilterRangeToTransform_BindTarget(int32_t  value__) noexcept;

/// @brief Field Maximum value: I32(1)
static ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget const Maximum;

/// @brief Field Minimum value: I32(0)
static ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget const Minimum;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17990};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BindHeightFilterRangeToTransform/ValueMode
struct CORDL_TYPE BindHeightFilterRangeToTransform_ValueMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindHeightFilterRangeToTransform_ValueMode_Unwrapped
enum struct __BindHeightFilterRangeToTransform_ValueMode_Unwrapped : int32_t {
__E_Absolute = static_cast<int32_t>(0x0),
__E_Relative = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindHeightFilterRangeToTransform_ValueMode_Unwrapped () const noexcept {
return static_cast<__BindHeightFilterRangeToTransform_ValueMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BindHeightFilterRangeToTransform_ValueMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BindHeightFilterRangeToTransform_ValueMode(int32_t  value__) noexcept;

/// @brief Field Absolute value: I32(0)
static ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode const Absolute;

/// @brief Field Relative value: I32(1)
static ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode const Relative;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.BindHeightFilterRangeToTransform::BindTarget, JBooth.MicroVerseCore.BindHeightFilterRangeToTransform::ValueMode, UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BindHeightFilterRangeToTransform
class CORDL_TYPE BindHeightFilterRangeToTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BindTarget = ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget;

using ValueMode = ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode;

/// @brief Field bindTarget, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bindTarget, put=__cordl_internal_set_bindTarget)) ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget  bindTarget;

/// @brief Field offset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) float_t  offset;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::JBooth::MicroVerseCore::Stamp>  target;

/// @brief Field valueMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueMode, put=__cordl_internal_set_valueMode)) ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode  valueMode;

static inline ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget const& __cordl_internal_get_bindTarget() const;

constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget& __cordl_internal_get_bindTarget() ;

constexpr float_t const& __cordl_internal_get_offset() const;

constexpr float_t& __cordl_internal_get_offset() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::Stamp> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::Stamp>& __cordl_internal_get_target() ;

constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode const& __cordl_internal_get_valueMode() const;

constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode& __cordl_internal_get_valueMode() ;

constexpr void __cordl_internal_set_bindTarget(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget  value) ;

constexpr void __cordl_internal_set_offset(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::JBooth::MicroVerseCore::Stamp>  value) ;

constexpr void __cordl_internal_set_valueMode(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindHeightFilterRangeToTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindHeightFilterRangeToTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BindHeightFilterRangeToTransform(BindHeightFilterRangeToTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindHeightFilterRangeToTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindHeightFilterRangeToTransform(BindHeightFilterRangeToTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17992};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::Stamp>  ___target;

/// @brief Field offset, offset: 0x28, size: 0x4, def value: None
 float_t  ___offset;

/// @brief Field bindTarget, offset: 0x2c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget  ___bindTarget;

/// @brief Field valueMode, offset: 0x30, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode  ___valueMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform, ___bindTarget) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform, ___valueMode) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
