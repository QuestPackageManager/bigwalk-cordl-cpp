#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/GetExternalAccountMappingsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetExternalAccountMappingsOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct GetExternalAccountMappingsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct GetExternalAccountMappingsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal, "Epic.OnlineServices.Connect", "GetExternalAccountMappingsOptionsInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.GetExternalAccountMappingsOptionsInternal
struct CORDL_TYPE GetExternalAccountMappingsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7660, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__GetExternalAccountMappingsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetExternalAccountMappingsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_TargetExternalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr GetExternalAccountMappingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType, ::System::IntPtr  m_TargetExternalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_AccountIdType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType;

/// @brief Field m_TargetExternalUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetExternalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal, m_AccountIdType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal, m_TargetExternalUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
