#pragma once
// IWYU pragma private; include "GlobalNamespace/PropZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PropZone)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class Prop;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PropZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropZone*, "", "PropZone");
// Dependencies PropGroup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropZone
class CORDL_TYPE PropZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field contacts, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_contacts, put=__cordl_internal_set_contacts)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  contacts;

/// @brief Field isRadioDeadZone, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRadioDeadZone, put=__cordl_internal_set_isRadioDeadZone)) bool  isRadioDeadZone;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onEnter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnter, put=__cordl_internal_set_onEnter)) ::UnityW<::GlobalNamespace::PeckSwitch>  onEnter;

/// @brief Field onEnterSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterSound, put=__cordl_internal_set_onEnterSound)) ::UnityW<::GlobalNamespace::AudioAsset>  onEnterSound;

/// @brief Field onPropEnterZone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPropEnterZone, put=__cordl_internal_set_onPropEnterZone)) ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  onPropEnterZone;

/// @brief Field onPropExitZone, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPropExitZone, put=__cordl_internal_set_onPropExitZone)) ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  onPropExitZone;

/// @brief Field specificGroups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_specificGroups, put=__cordl_internal_set_specificGroups)) ::ArrayW<::GlobalNamespace::PropGroup>  specificGroups;

/// @brief Method GetRelevantProp, addr 0x180396090, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Prop> GetRelevantProp(::UnityEngine::Collider*  collider) ;

/// @brief Method IsRelevant, addr 0x180396120, size 0x40, virtual false, abstract: false, final false
inline bool IsRelevant(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::PropZone* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x180396160, size 0x350, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x1803964b0, size 0x1e0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get_contacts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get_contacts() ;

constexpr bool const& __cordl_internal_get_isRadioDeadZone() const;

constexpr bool& __cordl_internal_get_isRadioDeadZone() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onEnter() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onEnter() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_onEnterSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_onEnterSound() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get_onPropEnterZone() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get_onPropEnterZone() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get_onPropExitZone() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get_onPropExitZone() ;

constexpr ::ArrayW<::GlobalNamespace::PropGroup> const& __cordl_internal_get_specificGroups() const;

constexpr ::ArrayW<::GlobalNamespace::PropGroup>& __cordl_internal_get_specificGroups() ;

constexpr void __cordl_internal_set_contacts(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_isRadioDeadZone(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onEnter(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onEnterSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_onPropEnterZone(::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_onPropExitZone(::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_specificGroups(::ArrayW<::GlobalNamespace::PropGroup>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropZone(PropZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropZone(PropZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5626};

/// @brief Field specificGroups, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropGroup>  ___specificGroups;

/// @brief Field isRadioDeadZone, offset: 0x28, size: 0x1, def value: None
 bool  ___isRadioDeadZone;

/// @brief Field onEnter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onEnter;

/// @brief Field onEnterSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___onEnterSound;

/// @brief Field onPropEnterZone, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  ___onPropEnterZone;

/// @brief Field onPropExitZone, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  ___onPropExitZone;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field contacts, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  ___contacts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropZone, ___specificGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___isRadioDeadZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___onEnter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___onEnterSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___onPropEnterZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___onPropExitZone) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropZone, ___contacts) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropZone) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
