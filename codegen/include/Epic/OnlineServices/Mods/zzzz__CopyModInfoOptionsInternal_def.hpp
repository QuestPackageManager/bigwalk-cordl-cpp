#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/CopyModInfoOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyModInfoOptionsInternal)
namespace Epic::OnlineServices::Mods {
struct CopyModInfoOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct CopyModInfoOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal, "Epic.OnlineServices.Mods", "CopyModInfoOptionsInternal");
// Dependencies Epic.OnlineServices.Mods.ModEnumerationType, System.IntPtr
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.CopyModInfoOptionsInternal
struct CORDL_TYPE CopyModInfoOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::CopyModInfoOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::CopyModInfoOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e72b0, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::CopyModInfoOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::CopyModInfoOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Mods__CopyModInfoOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyModInfoOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: None }]
constexpr CopyModInfoOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal, m_Type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
