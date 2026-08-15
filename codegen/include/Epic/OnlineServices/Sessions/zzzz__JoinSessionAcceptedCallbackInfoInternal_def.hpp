#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/JoinSessionAcceptedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinSessionAcceptedCallbackInfoInternal)
namespace Epic::OnlineServices::Sessions {
struct JoinSessionAcceptedCallbackInfo;
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
namespace Epic::OnlineServices::Sessions {
struct JoinSessionAcceptedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal, "Epic.OnlineServices.Sessions", "JoinSessionAcceptedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.JoinSessionAcceptedCallbackInfoInternal
struct CORDL_TYPE JoinSessionAcceptedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804dc160, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__JoinSessionAcceptedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinSessionAcceptedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr JoinSessionAcceptedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, uint64_t  m_UiEventId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_UiEventId, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_UiEventId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal, m_UiEventId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
