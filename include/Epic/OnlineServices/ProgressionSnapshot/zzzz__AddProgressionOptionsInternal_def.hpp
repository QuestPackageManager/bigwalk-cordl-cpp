#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/AddProgressionOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddProgressionOptionsInternal)
namespace Epic::OnlineServices::ProgressionSnapshot {
struct AddProgressionOptions;
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
struct AddProgressionOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal, "Epic.OnlineServices.ProgressionSnapshot", "AddProgressionOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::ProgressionSnapshot {
// Is value type: true
// CS Name: Epic.OnlineServices.ProgressionSnapshot.AddProgressionOptionsInternal
struct CORDL_TYPE AddProgressionOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f6990, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__ProgressionSnapshot__AddProgressionOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddProgressionOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SnapshotId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AddProgressionOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_SnapshotId, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SnapshotId, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_SnapshotId;

/// @brief Field m_Key, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Key;

/// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal, m_SnapshotId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal, m_Value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::ProgressionSnapshot
