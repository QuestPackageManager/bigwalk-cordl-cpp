#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinResponseReceivedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RequestToJoinResponseReceivedCallbackInfoInternal)
namespace Epic::OnlineServices::CustomInvites {
struct RequestToJoinResponseReceivedCallbackInfo;
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
struct RequestToJoinResponseReceivedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal, "Epic.OnlineServices.CustomInvites", "RequestToJoinResponseReceivedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.CustomInvites.RequestToJoinResponse, System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.RequestToJoinResponseReceivedCallbackInfoInternal
struct CORDL_TYPE RequestToJoinResponseReceivedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>*() ;

/// @brief Method Get, addr 0x18052b940, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__RequestToJoinResponseReceivedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RequestToJoinResponseReceivedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FromUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ToUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Response", ty: "::Epic::OnlineServices::CustomInvites::RequestToJoinResponse", modifiers: "", def_value: None }]
constexpr RequestToJoinResponseReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_FromUserId, ::System::IntPtr  m_ToUserId, ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  m_Response) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_FromUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_FromUserId;

/// @brief Field m_ToUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ToUserId;

/// @brief Field m_Response, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  m_Response;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal, m_FromUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal, m_ToUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal, m_Response) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
