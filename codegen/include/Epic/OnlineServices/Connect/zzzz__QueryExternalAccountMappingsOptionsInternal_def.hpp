#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/QueryExternalAccountMappingsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryExternalAccountMappingsOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct QueryExternalAccountMappingsOptions;
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
struct QueryExternalAccountMappingsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal, "Epic.OnlineServices.Connect", "QueryExternalAccountMappingsOptionsInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.QueryExternalAccountMappingsOptionsInternal
struct CORDL_TYPE QueryExternalAccountMappingsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052b3f0, size 0x140, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__QueryExternalAccountMappingsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryExternalAccountMappingsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_ExternalAccountIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExternalAccountIdCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryExternalAccountMappingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType, ::System::IntPtr  m_ExternalAccountIds, uint32_t  m_ExternalAccountIdCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_AccountIdType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType;

/// @brief Field m_ExternalAccountIds, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ExternalAccountIds;

/// @brief Field m_ExternalAccountIdCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_ExternalAccountIdCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal, m_AccountIdType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal, m_ExternalAccountIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal, m_ExternalAccountIdCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
