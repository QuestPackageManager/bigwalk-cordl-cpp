#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinReceivedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RequestToJoinReceivedCallbackInfoInternal)
namespace Epic::OnlineServices::CustomInvites {
struct RequestToJoinReceivedCallbackInfo;
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
struct RequestToJoinReceivedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal, "Epic.OnlineServices.CustomInvites", "RequestToJoinReceivedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.RequestToJoinReceivedCallbackInfoInternal
struct CORDL_TYPE RequestToJoinReceivedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>*() ;

/// @brief Method Get, addr 0x180529690, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__RequestToJoinReceivedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RequestToJoinReceivedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FromUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ToUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr RequestToJoinReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_FromUserId, ::System::IntPtr  m_ToUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_FromUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_FromUserId;

/// @brief Field m_ToUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ToUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal, m_FromUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal, m_ToUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::RequestToJoinReceivedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
