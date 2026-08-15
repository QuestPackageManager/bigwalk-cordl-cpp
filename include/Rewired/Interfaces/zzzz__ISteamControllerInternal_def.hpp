#pragma once
// IWYU pragma private; include "Rewired/Interfaces/ISteamControllerInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ISteamControllerInternal)
namespace Rewired::ControllerExtensions {
struct SteamControllerActionOrigin;
}
namespace Rewired::ControllerExtensions {
struct SteamControllerPadType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Interfaces {
class ISteamControllerInternal;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::ISteamControllerInternal*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::ISteamControllerInternal*, "Rewired.Interfaces", "ISteamControllerInternal");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.ISteamControllerInternal
class CORDL_TYPE ISteamControllerInternal {
public:
// Declarations
 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_MaxActionSourceCount)) int32_t  MaxActionSourceCount;

/// @brief Method GetActionSetHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint64_t GetActionSetHandle(::by_ref<::StringW>  actionSetName) ;

/// @brief Method GetActionSetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetActionSetName(uint64_t  handle) ;

/// @brief Method GetActiveActionSetHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint64_t GetActiveActionSetHandle() ;

/// @brief Method GetActiveActionSetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetActiveActionSetName() ;

/// @brief Method GetAnalogActionHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint64_t GetAnalogActionHandle(::by_ref<::StringW>  actionName) ;

/// @brief Method GetAnalogActionName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetAnalogActionName(uint64_t  handle) ;

/// @brief Method GetAnalogActionOrigins, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle) ;

/// @brief Method GetAnalogActionOrigins, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(::by_ref<::StringW>  actionSetName, ::by_ref<::StringW>  actionName) ;

/// @brief Method GetAnalogActionValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetAnalogActionValue(uint64_t  actionHandle) ;

/// @brief Method GetAnalogActionValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetAnalogActionValue(::by_ref<::StringW>  actionName) ;

/// @brief Method GetDigitalActionHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint64_t GetDigitalActionHandle(::by_ref<::StringW>  actionName) ;

/// @brief Method GetDigitalActionName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetDigitalActionName(uint64_t  handle) ;

/// @brief Method GetDigitalActionOrigins, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(uint64_t  actionSetHandle, uint64_t  actionHandle) ;

/// @brief Method GetDigitalActionOrigins, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(::by_ref<::StringW>  actionSetName, ::by_ref<::StringW>  actionName) ;

/// @brief Method GetDigitalActionValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetDigitalActionValue(uint64_t  actionHandle) ;

/// @brief Method GetDigitalActionValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetDigitalActionValue(::by_ref<::StringW>  actionName) ;

/// @brief Method SetActiveActionSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool SetActiveActionSet(uint64_t  actionSetHandle) ;

/// @brief Method SetActiveActionSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool SetActiveActionSet(::by_ref<::StringW>  actionSetName) ;

/// @brief Method SetHapticPulse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targetPad, uint16_t  durationMicroSeconds) ;

/// @brief Method SetHapticPulse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetHapticPulse(::Rewired::ControllerExtensions::SteamControllerPadType  targetPad, float_t  durationSeconds) ;

/// @brief Method ShowBindingPanel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ShowBindingPanel() ;

/// @brief Method get_IsConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_MaxActionSourceCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaxActionSourceCount() ;

// Ctor Parameters [CppParam { name: "", ty: "ISteamControllerInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamControllerInternal(ISteamControllerInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
