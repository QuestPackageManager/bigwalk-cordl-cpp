#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/QueryAgeGateCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryAgeGateCallbackInfoInternal)
namespace Epic::OnlineServices::KWS {
struct QueryAgeGateCallbackInfo;
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
struct QueryAgeGateCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal, "Epic.OnlineServices.KWS", "QueryAgeGateCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.QueryAgeGateCallbackInfoInternal
struct CORDL_TYPE QueryAgeGateCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>*() ;

/// @brief Method Get, addr 0x18051d0f0, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__KWS__QueryAgeGateCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryAgeGateCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CountryCode", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AgeOfConsent", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryAgeGateCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_CountryCode, uint32_t  m_AgeOfConsent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_CountryCode, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_CountryCode;

/// @brief Field m_AgeOfConsent, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_AgeOfConsent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal, m_CountryCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal, m_AgeOfConsent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
