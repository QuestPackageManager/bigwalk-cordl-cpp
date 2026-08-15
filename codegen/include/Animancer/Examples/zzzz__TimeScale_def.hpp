#pragma once
// IWYU pragma private; include "Animancer/Examples/TimeScale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeScale)
// Forward declare root types
namespace Animancer::Examples {
class TimeScale;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::TimeScale*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::TimeScale*, "Animancer.Examples", "TimeScale");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples {
// Is value type: false
// CS Name: Animancer.Examples.TimeScale
class CORDL_TYPE TimeScale : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field _Value, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Value, put=__cordl_internal_set__Value)) float_t  _Value;

/// @brief Method Awake, addr 0x1803024e0, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::TimeScale* New_ctor() ;

/// @brief Method OnValidate, addr 0x1803024e0, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get__Value() const;

constexpr float_t& __cordl_internal_get__Value() ;

constexpr void __cordl_internal_set__Value(float_t  value) ;

/// @brief Method .ctor, addr 0x1803024f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Value() ;

/// @brief Method set_Value, addr 0x180302500, size 0x10, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeScale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeScale", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeScale(TimeScale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeScale", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeScale(TimeScale const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19954};

/// @brief Field _Value, offset: 0x20, size: 0x4, def value: None
 float_t  ____Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::TimeScale, ____Value) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::TimeScale) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples
