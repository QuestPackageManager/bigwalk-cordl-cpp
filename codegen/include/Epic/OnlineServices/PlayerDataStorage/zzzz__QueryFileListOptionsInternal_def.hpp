#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/QueryFileListOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryFileListOptionsInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileListOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileListOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptionsInternal, "Epic.OnlineServices.PlayerDataStorage", "QueryFileListOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.QueryFileListOptionsInternal
struct CORDL_TYPE QueryFileListOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f2e90, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__PlayerDataStorage__QueryFileListOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryFileListOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryFileListOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
