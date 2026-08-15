#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SteamInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInternal)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct SteamInternal;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::SteamInternal);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SteamInternal, "PlayEveryWare.EpicOnlineServices", "SteamInternal");
// Dependencies System.IntPtr
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.SteamInternal
#pragma pack(push, 8)
struct CORDL_TYPE SteamInternal {
public:
// Declarations
 __declspec(property(put=set_OverrideLibraryPath)) ::StringW  OverrideLibraryPath;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180546850, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_OverrideLibraryPath, addr 0x180546870, size 0xd0, virtual false, abstract: false, final false
inline void set_OverrideLibraryPath(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamInternal() ;

// Ctor Parameters [CppParam { name: "ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideLibraryPath", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SteamInternal(int32_t  ApiVersion, ::System::IntPtr  m_OverrideLibraryPath) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  ApiVersion;

/// @brief Field m_OverrideLibraryPath, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideLibraryPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SteamInternal, ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SteamInternal, m_OverrideLibraryPath) == 0x8, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SteamInternal) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
