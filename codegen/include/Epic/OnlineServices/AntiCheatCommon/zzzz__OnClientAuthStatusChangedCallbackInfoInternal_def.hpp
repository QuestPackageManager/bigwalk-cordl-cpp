#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnClientAuthStatusChangedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAuthStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnClientAuthStatusChangedCallbackInfoInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientAuthStatusChangedCallbackInfo;
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
struct OnClientAuthStatusChangedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal, "Epic.OnlineServices.AntiCheatCommon", "OnClientAuthStatusChangedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientAuthStatus, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.OnClientAuthStatusChangedCallbackInfoInternal
struct CORDL_TYPE OnClientAuthStatusChangedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>*() ;

/// @brief Method Get, addr 0x180526de0, size 0x170, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatCommon__OnClientAuthStatusChangedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnClientAuthStatusChangedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientAuthStatus", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus", modifiers: "", def_value: None }]
constexpr OnClientAuthStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_ClientHandle, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  m_ClientAuthStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_ClientHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientHandle;

/// @brief Field m_ClientAuthStatus, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  m_ClientAuthStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal, m_ClientHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal, m_ClientAuthStatus) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
