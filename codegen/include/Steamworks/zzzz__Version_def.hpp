#pragma once
// IWYU pragma private; include "Steamworks/Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Version)
// Forward declare root types
namespace Steamworks {
class Version;
}
// Write type traits
MARK_REF_T(::Steamworks::Version*);
DEFINE_IL2CPP_CLASS(::Steamworks::Version*, "Steamworks", "Version");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.Version
class CORDL_TYPE Version : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Version() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Version(Version && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Version(Version const& ) = delete;

/// @brief Field SteamAPI64DLLSize offset 0xffffffff size 0x4
static constexpr int32_t  SteamAPI64DLLSize{static_cast<int32_t>(0x481a8)};

/// @brief Field SteamAPIDLLSize offset 0xffffffff size 0x4
static constexpr int32_t  SteamAPIDLLSize{static_cast<int32_t>(0x403a8)};

/// @brief Field SteamAPIDLLVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  SteamAPIDLLVersion{u"06.91.21.57"};

/// @brief Field SteamworksNETVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  SteamworksNETVersion{u"20.1.0"};

/// @brief Field SteamworksSDKVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  SteamworksSDKVersion{u"1.53a"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::Version) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
