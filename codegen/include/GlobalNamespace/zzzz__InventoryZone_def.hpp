#pragma once
// IWYU pragma private; include "GlobalNamespace/InventoryZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InventoryZone)
namespace GlobalNamespace {
class PropZone;
}
namespace GlobalNamespace {
class Prop;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class InventoryZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InventoryZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InventoryZone*, "", "InventoryZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InventoryZone
class CORDL_TYPE InventoryZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _props, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__props, put=__cordl_internal_set__props)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  _props;

/// @brief Field logVerbose, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field propZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propZone, put=__cordl_internal_set_propZone)) ::UnityW<::GlobalNamespace::PropZone>  propZone;

 __declspec(property(get=get_props)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  props;

/// @brief Method IsRelevant, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool IsRelevant(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::InventoryZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18037e2e0, size 0x1e0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18037e4c0, size 0x280, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPropEnterZone, addr 0x18037e740, size 0x100, virtual false, abstract: false, final false
inline void OnPropEnterZone(::GlobalNamespace::Prop*  prop) ;

/// @brief Method OnPropExitZone, addr 0x18037e840, size 0xc0, virtual false, abstract: false, final false
inline void OnPropExitZone(::GlobalNamespace::Prop*  prop) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get__props() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get__props() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PropZone> const& __cordl_internal_get_propZone() const;

constexpr ::UnityW<::GlobalNamespace::PropZone>& __cordl_internal_get_propZone() ;

constexpr void __cordl_internal_set__props(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_propZone(::UnityW<::GlobalNamespace::PropZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_props, addr 0x18037e900, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* get_props() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InventoryZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InventoryZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InventoryZone(InventoryZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InventoryZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InventoryZone(InventoryZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5590};

/// @brief Field propZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropZone>  ___propZone;

/// @brief Field logVerbose, offset: 0x28, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _props, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  ____props;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InventoryZone, ___propZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InventoryZone, ___logVerbose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InventoryZone, ____props) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InventoryZone) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
