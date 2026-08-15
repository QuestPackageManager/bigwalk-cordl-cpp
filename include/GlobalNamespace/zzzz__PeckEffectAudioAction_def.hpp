#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAudioAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectAudioAction)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class PeckEffectAudioAction_ActionItem;
}
namespace GlobalNamespace {
struct PeckEffectAudioAction_PeckEffectAudioActionType;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectAudioAction_PeckEffectAudioActionType;
}
namespace GlobalNamespace {
class PeckEffectAudioAction;
}
namespace GlobalNamespace {
class PeckEffectAudioAction_ActionItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType);
MARK_REF_T(::GlobalNamespace::PeckEffectAudioAction*);
MARK_REF_T(::GlobalNamespace::PeckEffectAudioAction_ActionItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType, "", "PeckEffectAudioAction/PeckEffectAudioActionType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudioAction*, "", "PeckEffectAudioAction");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudioAction_ActionItem*, "", "PeckEffectAudioAction/ActionItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectAudioAction/PeckEffectAudioActionType
struct CORDL_TYPE PeckEffectAudioAction_PeckEffectAudioActionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectAudioAction_PeckEffectAudioActionType_Unwrapped
enum struct __PeckEffectAudioAction_PeckEffectAudioActionType_Unwrapped : int32_t {
__E_Play = static_cast<int32_t>(0x0),
__E_Stop = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectAudioAction_PeckEffectAudioActionType_Unwrapped () const noexcept {
return static_cast<__PeckEffectAudioAction_PeckEffectAudioActionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudioAction_PeckEffectAudioActionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectAudioAction_PeckEffectAudioActionType(int32_t  value__) noexcept;

/// @brief Field Play value: I32(0)
static ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType const Play;

/// @brief Field Stop value: I32(1)
static ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAudioAction::PeckEffectAudioActionType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAudioAction/ActionItem
class CORDL_TYPE PeckEffectAudioAction_ActionItem : public ::System::Object {
public:
// Declarations
/// @brief Field ActionType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActionType, put=__cordl_internal_set_ActionType)) ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType  ActionType;

/// @brief Field Asset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field Delay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) float_t  Delay;

/// @brief Field ForceAudioEvent, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ForceAudioEvent, put=__cordl_internal_set_ForceAudioEvent)) bool  ForceAudioEvent;

static inline ::GlobalNamespace::PeckEffectAudioAction_ActionItem* New_ctor() ;

constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType const& __cordl_internal_get_ActionType() const;

constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType& __cordl_internal_get_ActionType() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Asset() ;

constexpr float_t const& __cordl_internal_get_Delay() const;

constexpr float_t& __cordl_internal_get_Delay() ;

constexpr bool const& __cordl_internal_get_ForceAudioEvent() const;

constexpr bool& __cordl_internal_get_ForceAudioEvent() ;

constexpr void __cordl_internal_set_ActionType(::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType  value) ;

constexpr void __cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Delay(float_t  value) ;

constexpr void __cordl_internal_set_ForceAudioEvent(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudioAction_ActionItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudioAction_ActionItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAudioAction_ActionItem(PeckEffectAudioAction_ActionItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudioAction_ActionItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAudioAction_ActionItem(PeckEffectAudioAction_ActionItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4861};

/// @brief Field ActionType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType  ___ActionType;

/// @brief Field Asset, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Asset;

/// @brief Field ForceAudioEvent, offset: 0x20, size: 0x1, def value: None
 bool  ___ForceAudioEvent;

/// @brief Field Delay, offset: 0x24, size: 0x4, def value: None
 float_t  ___Delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudioAction_ActionItem, ___ActionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudioAction_ActionItem, ___Asset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudioAction_ActionItem, ___ForceAudioEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudioAction_ActionItem, ___Delay) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudioAction_ActionItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAudioAction::ActionItem, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAudioAction
class CORDL_TYPE PeckEffectAudioAction : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ActionItem = ::GlobalNamespace::PeckEffectAudioAction_ActionItem;

using PeckEffectAudioActionType = ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType;

/// @brief Field Actions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Actions, put=__cordl_internal_set_Actions)) ::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>  Actions;

static inline ::GlobalNamespace::PeckEffectAudioAction* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*> const& __cordl_internal_get_Actions() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>& __cordl_internal_get_Actions() ;

constexpr void __cordl_internal_set_Actions(::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudioAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudioAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAudioAction(PeckEffectAudioAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudioAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAudioAction(PeckEffectAudioAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4862};

/// @brief Field Actions, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>  ___Actions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudioAction, ___Actions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudioAction) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
