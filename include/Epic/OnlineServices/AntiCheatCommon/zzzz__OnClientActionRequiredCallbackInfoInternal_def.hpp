#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnClientActionRequiredCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientActionReason_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAction_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnClientActionRequiredCallbackInfoInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientActionRequiredCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientActionRequiredCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal, "Epic.OnlineServices.AntiCheatCommon", "OnClientActionRequiredCallbackInfoInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientAction, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientActionReason, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.OnClientActionRequiredCallbackInfoInternal
struct CORDL_TYPE OnClientActionRequiredCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>*() ;

/// @brief Method Get, addr 0x180526ad0, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatCommon__OnClientActionRequiredCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnClientActionRequiredCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientAction", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction", modifiers: "", def_value: None }, CppParam { name: "m_ActionReasonCode", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason", modifiers: "", def_value: None }, CppParam { name: "m_ActionReasonDetailsString", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr OnClientActionRequiredCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_ClientHandle, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  m_ClientAction, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  m_ActionReasonCode, ::System::IntPtr  m_ActionReasonDetailsString) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_ClientHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientHandle;

/// @brief Field m_ClientAction, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  m_ClientAction;

/// @brief Field m_ActionReasonCode, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  m_ActionReasonCode;

/// @brief Field m_ActionReasonDetailsString, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ActionReasonDetailsString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal, m_ClientHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal, m_ClientAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal, m_ActionReasonCode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal, m_ActionReasonDetailsString) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
