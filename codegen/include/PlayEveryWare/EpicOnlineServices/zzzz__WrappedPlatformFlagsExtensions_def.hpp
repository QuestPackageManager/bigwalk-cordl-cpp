#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WrappedPlatformFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WrappedPlatformFlagsExtensions)
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
namespace PlayEveryWare::EpicOnlineServices {
struct WrappedPlatformFlags;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class WrappedPlatformFlagsExtensions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions*, "PlayEveryWare.EpicOnlineServices", "WrappedPlatformFlagsExtensions");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.WrappedPlatformFlagsExtensions
class CORDL_TYPE WrappedPlatformFlagsExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method IsSupported, addr 0x18054abe0, size 0x190, virtual false, abstract: false, final false
static inline bool IsSupported(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  platformFlags, ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WrappedPlatformFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WrappedPlatformFlagsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WrappedPlatformFlagsExtensions(WrappedPlatformFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WrappedPlatformFlagsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WrappedPlatformFlagsExtensions(WrappedPlatformFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
