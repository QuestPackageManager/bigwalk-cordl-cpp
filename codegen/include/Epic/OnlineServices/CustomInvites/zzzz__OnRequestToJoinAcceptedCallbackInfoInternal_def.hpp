#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinAcceptedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnRequestToJoinAcceptedCallbackInfoInternal)
namespace Epic::OnlineServices::CustomInvites {
struct OnRequestToJoinAcceptedCallbackInfo;
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
namespace Epic::OnlineServices::CustomInvites {
struct OnRequestToJoinAcceptedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfoInternal, "Epic.OnlineServices.CustomInvites", "OnRequestToJoinAcceptedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.OnRequestToJoinAcceptedCallbackInfoInternal
struct CORDL_TYPE OnRequestToJoinAcceptedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfo>*() ;

/// @brief Method Get, addr 0x180529690, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__OnRequestToJoinAcceptedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnRequestToJoinAcceptedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr OnRequestToJoinAcceptedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_TargetUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfoInternal, m_TargetUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
