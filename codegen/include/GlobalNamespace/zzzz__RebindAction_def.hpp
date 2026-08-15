#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RebindAction)
namespace GlobalNamespace {
class RebindAction___c;
}
namespace GlobalNamespace {
class RebindMenu;
}
namespace GlobalNamespace {
class RebindRow;
}
namespace GlobalNamespace {
struct Rebinder_RebindType;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RebindAction;
}
namespace GlobalNamespace {
class RebindAction___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RebindAction*);
MARK_REF_T(::GlobalNamespace::RebindAction___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindAction*, "", "RebindAction");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindAction___c*, "", "RebindAction/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RebindAction/<>c
class CORDL_TYPE RebindAction___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RebindAction___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Comparison_1<::Rewired::ActionElementMap*>*  __9__14_0;

static inline ::GlobalNamespace::RebindAction___c* New_ctor() ;

/// @brief Method <GetActionMaps>b__14_0, addr 0x1804444e0, size 0x40, virtual false, abstract: false, final false
inline int32_t _GetActionMaps_b__14_0(::Rewired::ActionElementMap*  a, ::Rewired::ActionElementMap*  b) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RebindAction___c* getStaticF___9() ;

static inline ::System::Comparison_1<::Rewired::ActionElementMap*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::GlobalNamespace::RebindAction___c*  value) ;

static inline void setStaticF___9__14_0(::System::Comparison_1<::Rewired::ActionElementMap*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindAction___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindAction___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindAction___c(RebindAction___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindAction___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindAction___c(RebindAction___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RebindAction___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Rewired.AxisRange, Rewired.Pole, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RebindAction
class CORDL_TYPE RebindAction : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::RebindAction___c;

/// @brief Field NOTAPPLICABLE_STRING, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NOTAPPLICABLE_STRING, put=setStaticF_NOTAPPLICABLE_STRING)) ::StringW  NOTAPPLICABLE_STRING;

/// @brief Field PROMPT_STRING, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PROMPT_STRING, put=setStaticF_PROMPT_STRING)) ::StringW  PROMPT_STRING;

/// @brief Field UNMAPPED_STRING, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UNMAPPED_STRING, put=setStaticF_UNMAPPED_STRING)) ::StringW  UNMAPPED_STRING;

/// @brief Field actionId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_actionId, put=__cordl_internal_set_actionId)) int32_t  actionId;

/// @brief Field axisPole, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisPole, put=__cordl_internal_set_axisPole)) ::Rewired::Pole  axisPole;

/// @brief Field axisRange, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisRange, put=__cordl_internal_set_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

/// @brief Field rebindMenu, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindMenu, put=__cordl_internal_set_rebindMenu)) ::UnityW<::GlobalNamespace::RebindMenu>  rebindMenu;

/// @brief Field rebindRow, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindRow, put=__cordl_internal_set_rebindRow)) ::UnityW<::GlobalNamespace::RebindRow>  rebindRow;

 __declspec(property(get=get_rebindType)) ::GlobalNamespace::Rebinder_RebindType  rebindType;

/// @brief Method AfterRebindFinished, addr 0x180439700, size 0x70, virtual false, abstract: false, final false
inline void AfterRebindFinished(bool  success) ;

/// @brief Method AfterRebindSucess, addr 0x180439770, size 0x50, virtual false, abstract: false, final false
inline void AfterRebindSucess() ;

/// @brief Method AfterRebindTimeout, addr 0x1804397c0, size 0x30, virtual false, abstract: false, final false
inline void AfterRebindTimeout() ;

/// @brief Method CheckSharedElement, addr 0x1804397f0, size 0x160, virtual false, abstract: false, final false
static inline bool CheckSharedElement(::Rewired::ActionElementMap*  aem1, ::Rewired::ActionElementMap*  aem2) ;

/// @brief Method Clear, addr 0x180439950, size 0x50, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetActionMaps, addr 0x1804399a0, size 0x590, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>* GetActionMaps() ;

/// @brief Method GetBestController, addr 0x180439f30, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Controller* GetBestController() ;

/// @brief Method GetWrappedGlyph, addr 0x180439fb0, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetWrappedGlyph(::Rewired::ActionElementMap*  actionElementMap) ;

/// @brief Method HasMaps, addr 0x18043a010, size 0x30, virtual false, abstract: false, final false
inline bool HasMaps() ;

/// @brief Method IsDisabledForController, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool IsDisabledForController() ;

static inline ::GlobalNamespace::RebindAction* New_ctor(::GlobalNamespace::RebindMenu*  rebindMenu, int32_t  actionId, ::Rewired::AxisRange  axisRange) ;

/// @brief Method Refresh, addr 0x18043a040, size 0x120, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method ReplaceOldMaps, addr 0x18043a160, size 0x3f0, virtual false, abstract: false, final false
inline void ReplaceOldMaps(::Rewired::ActionElementMap*  incoming) ;

/// @brief Method StartRebind, addr 0x18043a550, size 0x1b0, virtual false, abstract: false, final false
inline void StartRebind() ;

constexpr int32_t const& __cordl_internal_get_actionId() const;

constexpr int32_t& __cordl_internal_get_actionId() ;

constexpr ::Rewired::Pole const& __cordl_internal_get_axisPole() const;

constexpr ::Rewired::Pole& __cordl_internal_get_axisPole() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get_axisRange() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get_axisRange() ;

constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& __cordl_internal_get_rebindMenu() const;

constexpr ::UnityW<::GlobalNamespace::RebindMenu>& __cordl_internal_get_rebindMenu() ;

constexpr ::UnityW<::GlobalNamespace::RebindRow> const& __cordl_internal_get_rebindRow() const;

constexpr ::UnityW<::GlobalNamespace::RebindRow>& __cordl_internal_get_rebindRow() ;

constexpr void __cordl_internal_set_actionId(int32_t  value) ;

constexpr void __cordl_internal_set_axisPole(::Rewired::Pole  value) ;

constexpr void __cordl_internal_set_axisRange(::Rewired::AxisRange  value) ;

constexpr void __cordl_internal_set_rebindMenu(::UnityW<::GlobalNamespace::RebindMenu>  value) ;

constexpr void __cordl_internal_set_rebindRow(::UnityW<::GlobalNamespace::RebindRow>  value) ;

/// @brief Method .ctor, addr 0x18043a7b0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::RebindMenu*  rebindMenu, int32_t  actionId, ::Rewired::AxisRange  axisRange) ;

static inline ::StringW getStaticF_NOTAPPLICABLE_STRING() ;

static inline ::StringW getStaticF_PROMPT_STRING() ;

static inline ::StringW getStaticF_UNMAPPED_STRING() ;

/// @brief Method get_player, addr 0x18043a890, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

/// @brief Method get_rebindType, addr 0x18043a8d0, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::Rebinder_RebindType get_rebindType() ;

static inline void setStaticF_NOTAPPLICABLE_STRING(::StringW  value) ;

static inline void setStaticF_PROMPT_STRING(::StringW  value) ;

static inline void setStaticF_UNMAPPED_STRING(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindAction(RebindAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindAction(RebindAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5315};

/// @brief Field actionId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___actionId;

/// @brief Field rebindRow, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RebindRow>  ___rebindRow;

/// @brief Field axisRange, offset: 0x20, size: 0x4, def value: None
 ::Rewired::AxisRange  ___axisRange;

/// @brief Field axisPole, offset: 0x24, size: 0x4, def value: None
 ::Rewired::Pole  ___axisPole;

/// @brief Field rebindMenu, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RebindMenu>  ___rebindMenu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RebindAction, ___actionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindAction, ___rebindRow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindAction, ___axisRange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindAction, ___axisPole) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindAction, ___rebindMenu) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RebindAction) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
