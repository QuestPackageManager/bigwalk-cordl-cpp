#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/SteamControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamControllerExtension)
namespace Rewired::ControllerExtensions {
struct SteamControllerActionOrigin;
}
namespace Rewired::ControllerExtensions {
class SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo;
}
namespace Rewired::ControllerExtensions {
struct SteamControllerPadType;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Interfaces {
class ISteamControllerInternal;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class SteamControllerExtension;
}
namespace Rewired::ControllerExtensions {
class SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::SteamControllerExtension*);
MARK_REF_T(::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::SteamControllerExtension*, "Rewired.ControllerExtensions", "SteamControllerExtension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*, "Rewired.ControllerExtensions", "SteamControllerExtension/WfBibsCmRftlgoBmdJzNnWKZjeYo");
// Dependencies System.Object
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.SteamControllerExtension/WfBibsCmRftlgoBmdJzNnWKZjeYo
class CORDL_TYPE SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo : public ::System::Object {
public:
// Declarations
/// @brief Field GZHRjgeRCrmbGZiqyJrTgWkPCbbW, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GZHRjgeRCrmbGZiqyJrTgWkPCbbW, put=__cordl_internal_set_GZHRjgeRCrmbGZiqyJrTgWkPCbbW)) ::Rewired::Interfaces::ISteamControllerInternal*  GZHRjgeRCrmbGZiqyJrTgWkPCbbW;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo* New_ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Interfaces::ISteamControllerInternal* const& __cordl_internal_get_GZHRjgeRCrmbGZiqyJrTgWkPCbbW() const;

constexpr ::Rewired::Interfaces::ISteamControllerInternal*& __cordl_internal_get_GZHRjgeRCrmbGZiqyJrTgWkPCbbW() ;

constexpr void __cordl_internal_set_GZHRjgeRCrmbGZiqyJrTgWkPCbbW(::Rewired::Interfaces::ISteamControllerInternal*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo(SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo(SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2715};

/// @brief Field GZHRjgeRCrmbGZiqyJrTgWkPCbbW, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Interfaces::ISteamControllerInternal*  ___GZHRjgeRCrmbGZiqyJrTgWkPCbbW;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo, ___GZHRjgeRCrmbGZiqyJrTgWkPCbbW) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo) == 0x18, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.Controller::Extension
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.SteamControllerExtension
class CORDL_TYPE SteamControllerExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using WfBibsCmRftlgoBmdJzNnWKZjeYo = ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo;

 __declspec(property(get=get_internalController)) ::Rewired::Interfaces::ISteamControllerInternal*  internalController;

 __declspec(property(get=uPljBxBFBsrMqNrlThEcljZrEfvjA)) ::Rewired::Joystick*  joystick;

/// @brief Field miOCSaPNFkUvzPfgwcoLlVgEudlA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_miOCSaPNFkUvzPfgwcoLlVgEudlA, put=__cordl_internal_set_miOCSaPNFkUvzPfgwcoLlVgEudlA)) ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*  miOCSaPNFkUvzPfgwcoLlVgEudlA;

/// @brief Method Clone, addr 0x1818deef0, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method GetActionSetHandle, addr 0x1818def30, size 0x100, virtual false, abstract: false, final false
inline uint64_t GetActionSetHandle(::StringW  actionSetName) ;

/// @brief Method GetActionSetName, addr 0x1818df030, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GetActionSetName(uint64_t  actionSetHandle) ;

/// @brief Method GetActiveActionSetHandle, addr 0x1818df0d0, size 0x100, virtual false, abstract: false, final false
inline uint64_t GetActiveActionSetHandle() ;

/// @brief Method GetActiveActionSetName, addr 0x1818df1d0, size 0x90, virtual false, abstract: false, final false
inline ::StringW GetActiveActionSetName() ;

/// @brief Method GetAnalogActionHandle, addr 0x1818df260, size 0x100, virtual false, abstract: false, final false
inline uint64_t GetAnalogActionHandle(::StringW  actionName) ;

/// @brief Method GetAnalogActionName, addr 0x1818df360, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GetAnalogActionName(uint64_t  actionHandle) ;

/// @brief Method GetAnalogActionOrigins, addr 0x1818df510, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle) ;

/// @brief Method GetAnalogActionOrigins, addr 0x1818df400, size 0x110, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(::StringW  actionSetName, ::StringW  actionName) ;

/// @brief Method GetAnalogActionValue, addr 0x1818df6c0, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAnalogActionValue(uint64_t  actionHandle) ;

/// @brief Method GetAnalogActionValue, addr 0x1818df5c0, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAnalogActionValue(::StringW  actionName) ;

/// @brief Method GetDigitalActionHandle, addr 0x1818df7d0, size 0x100, virtual false, abstract: false, final false
inline uint64_t GetDigitalActionHandle(::StringW  actionName) ;

/// @brief Method GetDigitalActionName, addr 0x1818df8d0, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GetDigitalActionName(uint64_t  actionHandle) ;

/// @brief Method GetDigitalActionOrigins, addr 0x1818dfa80, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle) ;

/// @brief Method GetDigitalActionOrigins, addr 0x1818df970, size 0x110, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(::StringW  actionSetName, ::StringW  actionName) ;

/// @brief Method GetDigitalActionValue, addr 0x1818dfb30, size 0x90, virtual false, abstract: false, final false
inline bool GetDigitalActionValue(uint64_t  actionHandle) ;

/// @brief Method GetDigitalActionValue, addr 0x1818dfbc0, size 0x100, virtual false, abstract: false, final false
inline bool GetDigitalActionValue(::StringW  actionName) ;

/// @brief Method NbSCVHGrbacKxzLMHnlVqypRTXVJ, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void NbSCVHGrbacKxzLMHnlVqypRTXVJ() ;

static inline ::Rewired::ControllerExtensions::SteamControllerExtension* New_ctor(::Rewired::ControllerExtensions::SteamControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::SteamControllerExtension* New_ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SetActiveActionSet, addr 0x1818dfdc0, size 0x90, virtual false, abstract: false, final false
inline bool SetActiveActionSet(uint64_t  actionSetHandle) ;

/// @brief Method SetActiveActionSet, addr 0x1818dfcc0, size 0x100, virtual false, abstract: false, final false
inline bool SetActiveActionSet(::StringW  actionSetName) ;

/// @brief Method SetHapticPulse, addr 0x1818dff70, size 0x120, virtual false, abstract: false, final false
inline void SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targePad, uint16_t  durationMicroSeconds) ;

/// @brief Method SetHapticPulse, addr 0x1818dfe50, size 0x120, virtual false, abstract: false, final false
inline void SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targePad, float_t  durationSeconds) ;

/// @brief Method ShowBindingPanel, addr 0x1818e0090, size 0x80, virtual false, abstract: false, final false
inline void ShowBindingPanel() ;

/// @brief Method SourceUpdated, addr 0x1818e0110, size 0xc0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo* const& __cordl_internal_get_miOCSaPNFkUvzPfgwcoLlVgEudlA() const;

constexpr ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*& __cordl_internal_get_miOCSaPNFkUvzPfgwcoLlVgEudlA() ;

constexpr void __cordl_internal_set_miOCSaPNFkUvzPfgwcoLlVgEudlA(::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*  value) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::SteamControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818e01d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Interfaces::ISteamControllerInternal*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_internalController, addr 0x1818e0230, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::ISteamControllerInternal* get_internalController() ;

/// @brief Method uPljBxBFBsrMqNrlThEcljZrEfvjA, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* uPljBxBFBsrMqNrlThEcljZrEfvjA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamControllerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamControllerExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamControllerExtension(SteamControllerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamControllerExtension(SteamControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2716};

/// @brief Field miOCSaPNFkUvzPfgwcoLlVgEudlA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerExtensions::SteamControllerExtension_WfBibsCmRftlgoBmdJzNnWKZjeYo*  ___miOCSaPNFkUvzPfgwcoLlVgEudlA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::SteamControllerExtension, ___miOCSaPNFkUvzPfgwcoLlVgEudlA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::SteamControllerExtension) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
