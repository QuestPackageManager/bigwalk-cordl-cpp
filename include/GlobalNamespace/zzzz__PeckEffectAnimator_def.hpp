#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectAnimator)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectAnimator_ParamType;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectAnimator_ParamType;
}
namespace GlobalNamespace {
class PeckEffectAnimator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectAnimator_ParamType);
MARK_REF_T(::GlobalNamespace::PeckEffectAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAnimator_ParamType, "", "PeckEffectAnimator/ParamType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAnimator*, "", "PeckEffectAnimator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectAnimator/ParamType
struct CORDL_TYPE PeckEffectAnimator_ParamType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectAnimator_ParamType_Unwrapped
enum struct __PeckEffectAnimator_ParamType_Unwrapped : int32_t {
__E_StateAsInt = static_cast<int32_t>(0x0),
__E_FloatMultiplied = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectAnimator_ParamType_Unwrapped () const noexcept {
return static_cast<__PeckEffectAnimator_ParamType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAnimator_ParamType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectAnimator_ParamType(int32_t  value__) noexcept;

/// @brief Field FloatMultiplied value: I32(1)
static ::GlobalNamespace::PeckEffectAnimator_ParamType const FloatMultiplied;

/// @brief Field StateAsInt value: I32(0)
static ::GlobalNamespace::PeckEffectAnimator_ParamType const StateAsInt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5362};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator_ParamType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAnimator_ParamType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAnimator::ParamType, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAnimator
class CORDL_TYPE PeckEffectAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ParamType = ::GlobalNamespace::PeckEffectAnimator_ParamType;

/// @brief Field animator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field floatValueToMultiply, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_floatValueToMultiply, put=__cordl_internal_set_floatValueToMultiply)) float_t  floatValueToMultiply;

/// @brief Field logVerbose, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onFinishEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFinishEvent, put=__cordl_internal_set_onFinishEvent)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFinishEvent;

/// @brief Field paramType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_paramType, put=__cordl_internal_set_paramType)) ::GlobalNamespace::PeckEffectAnimator_ParamType  paramType;

/// @brief Field parameterName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameterName, put=__cordl_internal_set_parameterName)) ::StringW  parameterName;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180447b20, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectAnimator* New_ctor() ;

/// @brief Method OnFinish, addr 0x1804479f0, size 0x80, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method Peck, addr 0x180447bc0, size 0x180, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_floatValueToMultiply() const;

constexpr float_t& __cordl_internal_get_floatValueToMultiply() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFinishEvent() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFinishEvent() ;

constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType const& __cordl_internal_get_paramType() const;

constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType& __cordl_internal_get_paramType() ;

constexpr ::StringW const& __cordl_internal_get_parameterName() const;

constexpr ::StringW& __cordl_internal_get_parameterName() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_floatValueToMultiply(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onFinishEvent(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_paramType(::GlobalNamespace::PeckEffectAnimator_ParamType  value) ;

constexpr void __cordl_internal_set_parameterName(::StringW  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAnimator(PeckEffectAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAnimator(PeckEffectAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5363};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field onFinishEvent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFinishEvent;

/// @brief Field animator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field parameterName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___parameterName;

/// @brief Field paramType, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::PeckEffectAnimator_ParamType  ___paramType;

/// @brief Field floatValueToMultiply, offset: 0x64, size: 0x4, def value: None
 float_t  ___floatValueToMultiply;

/// @brief Field logVerbose, offset: 0x68, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___onFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___animator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___parameterName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___paramType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___floatValueToMultiply) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimator, ___logVerbose) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAnimator) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
