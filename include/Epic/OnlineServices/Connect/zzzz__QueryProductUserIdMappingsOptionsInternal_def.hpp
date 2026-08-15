#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/QueryProductUserIdMappingsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryProductUserIdMappingsOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct QueryProductUserIdMappingsOptions;
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
struct QueryProductUserIdMappingsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal, "Epic.OnlineServices.Connect", "QueryProductUserIdMappingsOptionsInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.QueryProductUserIdMappingsOptionsInternal
struct CORDL_TYPE QueryProductUserIdMappingsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052b530, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__QueryProductUserIdMappingsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryProductUserIdMappingsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType_DEPRECATED", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserIdCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryProductUserIdMappingsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType_DEPRECATED, ::System::IntPtr  m_ProductUserIds, uint32_t  m_ProductUserIdCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_AccountIdType_DEPRECATED, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType_DEPRECATED;

/// @brief Field m_ProductUserIds, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ProductUserIds;

/// @brief Field m_ProductUserIdCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_ProductUserIdCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal, m_AccountIdType_DEPRECATED) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal, m_ProductUserIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal, m_ProductUserIdCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
