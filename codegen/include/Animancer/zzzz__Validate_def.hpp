#pragma once
// IWYU pragma private; include "Animancer/Validate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Validate)
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct OptionalWarning;
}
namespace Animancer {
struct Validate_Value;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer {
struct Validate_Value;
}
namespace Animancer {
class Validate;
}
// Write type traits
MARK_VAL_T(::Animancer::Validate_Value);
MARK_REF_T(::Animancer::Validate*);
DEFINE_IL2CPP_CLASS(::Animancer::Validate_Value, "Animancer", "Validate/Value");
DEFINE_IL2CPP_CLASS(::Animancer::Validate*, "Animancer", "Validate");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.Validate/Value
struct CORDL_TYPE Validate_Value {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Validate_Value_Unwrapped
enum struct __Validate_Value_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_ZeroToOne = static_cast<int32_t>(0x1),
__E_IsNotNegative = static_cast<int32_t>(0x2),
__E_IsFinite = static_cast<int32_t>(0x3),
__E_IsFiniteOrNaN = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Validate_Value_Unwrapped () const noexcept {
return static_cast<__Validate_Value_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Validate_Value() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Validate_Value(int32_t  value__) noexcept;

/// @brief Field Any value: I32(0)
static ::Animancer::Validate_Value const Any;

/// @brief Field IsFinite value: I32(3)
static ::Animancer::Validate_Value const IsFinite;

/// @brief Field IsFiniteOrNaN value: I32(4)
static ::Animancer::Validate_Value const IsFiniteOrNaN;

/// @brief Field IsNotNegative value: I32(2)
static ::Animancer::Validate_Value const IsNotNegative;

/// @brief Field ZeroToOne value: I32(1)
static ::Animancer::Validate_Value const ZeroToOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Validate_Value, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::Validate_Value) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Validate
class CORDL_TYPE Validate : public ::System::Object {
public:
// Declarations
using Value = ::Animancer::Validate_Value;

/// @brief Method AssertCanRemoveChild, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void AssertCanRemoveChild(::Animancer::AnimancerState*  state, ::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*  childStates, int32_t  childCount) ;

/// @brief Method AssertNotLegacy, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void AssertNotLegacy(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method AssertPlayable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void AssertPlayable(::Animancer::AnimancerNode*  node) ;

/// @brief Method AssertRoot, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void AssertRoot(::Animancer::AnimancerNode*  node, ::Animancer::AnimancerPlayable*  root) ;

/// @brief Method Disable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Disable(::Animancer::OptionalWarning  type) ;

/// @brief Method Enable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Enable(::Animancer::OptionalWarning  type) ;

/// @brief Method Log, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Log(::Animancer::OptionalWarning  type, ::StringW  message, ::System::Object*  context) ;

/// @brief Method SetEnabled, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetEnabled(::Animancer::OptionalWarning  type, bool  enable) ;

/// @brief Method ValueRule, addr 0x1803160c0, size 0x90, virtual false, abstract: false, final false
static inline void ValueRule(::by_ref<float_t>  value, ::Animancer::Validate_Value  rule) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Validate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Validate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Validate(Validate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Validate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Validate(Validate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Validate) == 0x10, "Size mismatch!");

} // namespace end def Animancer
