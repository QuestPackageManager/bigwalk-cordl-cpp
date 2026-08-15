#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/UnlinkAccountCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnlinkAccountCallbackInfoInternal)
namespace Epic::OnlineServices::Connect {
struct UnlinkAccountCallbackInfo;
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
namespace Epic::OnlineServices::Connect {
struct UnlinkAccountCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal, "Epic.OnlineServices.Connect", "UnlinkAccountCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.UnlinkAccountCallbackInfoInternal
struct CORDL_TYPE UnlinkAccountCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804edb70, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__UnlinkAccountCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnlinkAccountCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UnlinkAccountCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
