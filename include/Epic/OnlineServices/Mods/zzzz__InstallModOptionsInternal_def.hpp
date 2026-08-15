#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/InstallModOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstallModOptionsInternal)
namespace Epic::OnlineServices::Mods {
struct InstallModOptions;
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
struct InstallModOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::InstallModOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::InstallModOptionsInternal, "Epic.OnlineServices.Mods", "InstallModOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.InstallModOptionsInternal
struct CORDL_TYPE InstallModOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805052f0, size 0x180, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Mods__InstallModOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstallModOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Mod", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RemoveAfterExit", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstallModOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Mod, int32_t  m_RemoveAfterExit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Mod, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Mod;

/// @brief Field m_RemoveAfterExit, offset: 0x18, size: 0x4, def value: None
 int32_t  m_RemoveAfterExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptionsInternal, m_Mod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptionsInternal, m_RemoveAfterExit) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::InstallModOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
