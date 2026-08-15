#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/CreateUserCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateUserCallbackInfoInternal)
namespace Epic::OnlineServices::KWS {
struct CreateUserCallbackInfo;
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
namespace Epic::OnlineServices::KWS {
struct CreateUserCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal, "Epic.OnlineServices.KWS", "CreateUserCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.CreateUserCallbackInfoInternal
struct CORDL_TYPE CreateUserCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f6420, size 0x140, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::KWS::CreateUserCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::CreateUserCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__KWS__CreateUserCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateUserCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_KWSUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsMinor", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CreateUserCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_KWSUserId, int32_t  m_IsMinor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8750};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_KWSUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_KWSUserId;

/// @brief Field m_IsMinor, offset: 0x20, size: 0x4, def value: None
 int32_t  m_IsMinor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal, m_KWSUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal, m_IsMinor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
