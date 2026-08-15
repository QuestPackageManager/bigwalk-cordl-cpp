#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/CopyStatByNameOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyStatByNameOptionsInternal)
namespace Epic::OnlineServices::Stats {
struct CopyStatByNameOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct CopyStatByNameOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal, "Epic.OnlineServices.Stats", "CopyStatByNameOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.CopyStatByNameOptionsInternal
struct CORDL_TYPE CopyStatByNameOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7440, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7930, size 0x160, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::CopyStatByNameOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__CopyStatByNameOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyStatByNameOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyStatByNameOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_Name) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7643};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_TargetUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal, m_TargetUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal, m_Name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
