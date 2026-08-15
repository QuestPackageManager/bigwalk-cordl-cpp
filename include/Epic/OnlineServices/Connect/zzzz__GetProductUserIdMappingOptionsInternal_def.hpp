#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/GetProductUserIdMappingOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetProductUserIdMappingOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct GetProductUserIdMappingOptions;
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
struct GetProductUserIdMappingOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal, "Epic.OnlineServices.Connect", "GetProductUserIdMappingOptionsInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.GetProductUserIdMappingOptionsInternal
struct CORDL_TYPE GetProductUserIdMappingOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524740, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__GetProductUserIdMappingOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetProductUserIdMappingOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_TargetProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr GetProductUserIdMappingOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType, ::System::IntPtr  m_TargetProductUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_AccountIdType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType;

/// @brief Field m_TargetProductUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetProductUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal, m_AccountIdType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal, m_TargetProductUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
