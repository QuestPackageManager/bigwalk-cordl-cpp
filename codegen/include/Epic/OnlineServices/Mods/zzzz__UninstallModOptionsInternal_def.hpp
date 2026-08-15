#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/UninstallModOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UninstallModOptionsInternal)
namespace Epic::OnlineServices::Mods {
struct UninstallModOptions;
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
struct UninstallModOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::UninstallModOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::UninstallModOptionsInternal, "Epic.OnlineServices.Mods", "UninstallModOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.UninstallModOptionsInternal
struct CORDL_TYPE UninstallModOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::UninstallModOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::UninstallModOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180511370, size 0x1b0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Mods::UninstallModOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::UninstallModOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::UninstallModOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Mods__UninstallModOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UninstallModOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Mod", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UninstallModOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Mod) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8401};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Mod, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::UninstallModOptionsInternal, m_Mod) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::UninstallModOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
