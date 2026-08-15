#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnClientIntegrityViolatedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnClientIntegrityViolatedCallbackInfoInternal)
namespace Epic::OnlineServices::AntiCheatClient {
struct OnClientIntegrityViolatedCallbackInfo;
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
namespace Epic::OnlineServices::AntiCheatClient {
struct OnClientIntegrityViolatedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal, "Epic.OnlineServices.AntiCheatClient", "OnClientIntegrityViolatedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.AntiCheatClient.AntiCheatClientViolationType, System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.OnClientIntegrityViolatedCallbackInfoInternal
struct CORDL_TYPE OnClientIntegrityViolatedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>*() ;

/// @brief Method Get, addr 0x18052f1b0, size 0xc0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatClient__OnClientIntegrityViolatedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnClientIntegrityViolatedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ViolationType", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType", modifiers: "", def_value: None }, CppParam { name: "m_ViolationMessage", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr OnClientIntegrityViolatedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  m_ViolationType, ::System::IntPtr  m_ViolationMessage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_ViolationType, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  m_ViolationType;

/// @brief Field m_ViolationMessage, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ViolationMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal, m_ViolationType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal, m_ViolationMessage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
