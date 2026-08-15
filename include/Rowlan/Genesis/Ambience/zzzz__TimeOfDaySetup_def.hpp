#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/TimeOfDaySetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TimeOfDaySetup)
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace Rowlan::Genesis::Ambience {
class TimeOfDaySetup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Ambience::TimeOfDaySetup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Ambience::TimeOfDaySetup*, "Rowlan.Genesis.Ambience", "TimeOfDaySetup");
// Dependencies UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Ambience {
// Is value type: false
// CS Name: Rowlan.Genesis.Ambience.TimeOfDaySetup
class CORDL_TYPE TimeOfDaySetup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field directionalLight, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_directionalLight, put=__cordl_internal_set_directionalLight)) ::UnityW<::UnityEngine::Light>  directionalLight;

static inline ::Rowlan::Genesis::Ambience::TimeOfDaySetup* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_directionalLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_directionalLight() ;

constexpr void __cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeOfDaySetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDaySetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeOfDaySetup(TimeOfDaySetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDaySetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeOfDaySetup(TimeOfDaySetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20436};

/// @brief Field directionalLight, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___directionalLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Ambience::TimeOfDaySetup, ___directionalLight) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Ambience::TimeOfDaySetup) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Ambience
