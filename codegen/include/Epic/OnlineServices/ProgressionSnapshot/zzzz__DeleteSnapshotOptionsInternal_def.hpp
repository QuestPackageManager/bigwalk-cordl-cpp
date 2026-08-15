#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/DeleteSnapshotOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeleteSnapshotOptionsInternal)
namespace Epic::OnlineServices::ProgressionSnapshot {
struct DeleteSnapshotOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::ProgressionSnapshot {
struct DeleteSnapshotOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal, "Epic.OnlineServices.ProgressionSnapshot", "DeleteSnapshotOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::ProgressionSnapshot {
// Is value type: true
// CS Name: Epic.OnlineServices.ProgressionSnapshot.DeleteSnapshotOptionsInternal
struct CORDL_TYPE DeleteSnapshotOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7b40, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__ProgressionSnapshot__DeleteSnapshotOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeleteSnapshotOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DeleteSnapshotOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::ProgressionSnapshot
