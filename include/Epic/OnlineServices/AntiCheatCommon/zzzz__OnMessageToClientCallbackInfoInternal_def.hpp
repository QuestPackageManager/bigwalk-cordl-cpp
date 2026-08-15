#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnMessageToClientCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnMessageToClientCallbackInfoInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnMessageToClientCallbackInfo;
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
struct OnMessageToClientCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal, "Epic.OnlineServices.AntiCheatCommon", "OnMessageToClientCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.OnMessageToClientCallbackInfoInternal
struct CORDL_TYPE OnMessageToClientCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>*() ;

/// @brief Method Get, addr 0x180528cc0, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatCommon__OnMessageToClientCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnMessageToClientCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_MessageData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_MessageDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr OnMessageToClientCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_ClientHandle, ::System::IntPtr  m_MessageData, uint32_t  m_MessageDataSizeBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_ClientHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientHandle;

/// @brief Field m_MessageData, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_MessageData;

/// @brief Field m_MessageDataSizeBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_MessageDataSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal, m_ClientHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal, m_MessageData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal, m_MessageDataSizeBytes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
