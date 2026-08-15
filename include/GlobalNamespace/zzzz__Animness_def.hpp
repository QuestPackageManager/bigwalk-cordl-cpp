#pragma once
// IWYU pragma private; include "GlobalNamespace/Animness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Animness)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class Animness;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Animness*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Animness*, "", "Animness");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Animness
class CORDL_TYPE Animness : public ::System::Object {
public:
// Declarations
/// @brief Field animator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field dampedValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampedValue, put=__cordl_internal_set_dampedValue)) float_t  dampedValue;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field parameterName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameterName, put=__cordl_internal_set_parameterName)) ::StringW  parameterName;

/// @brief Field smoothTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothTime, put=__cordl_internal_set_smoothTime)) float_t  smoothTime;

/// @brief Field trueValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_trueValue, put=__cordl_internal_set_trueValue)) float_t  trueValue;

/// @brief Field velocity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

static inline ::GlobalNamespace::Animness* New_ctor() ;

/// @brief Method Update, addr 0x1803e3270, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_dampedValue() const;

constexpr float_t& __cordl_internal_get_dampedValue() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::StringW const& __cordl_internal_get_parameterName() const;

constexpr ::StringW& __cordl_internal_get_parameterName() ;

constexpr float_t const& __cordl_internal_get_smoothTime() const;

constexpr float_t& __cordl_internal_get_smoothTime() ;

constexpr float_t const& __cordl_internal_get_trueValue() const;

constexpr float_t& __cordl_internal_get_trueValue() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_dampedValue(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_parameterName(::StringW  value) ;

constexpr void __cordl_internal_set_smoothTime(float_t  value) ;

constexpr void __cordl_internal_set_trueValue(float_t  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animness", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animness(Animness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animness", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animness(Animness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4936};

/// @brief Field animator, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field parameterName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___parameterName;

/// @brief Field smoothTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___smoothTime;

/// @brief Field trueValue, offset: 0x24, size: 0x4, def value: None
 float_t  ___trueValue;

/// @brief Field dampedValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___dampedValue;

/// @brief Field velocity, offset: 0x2c, size: 0x4, def value: None
 float_t  ___velocity;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Animness, ___animator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Animness, ___parameterName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Animness, ___smoothTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Animness, ___trueValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Animness, ___dampedValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Animness, ___velocity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Animness, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Animness) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
