#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModsInterface)
namespace Epic::OnlineServices::Mods {
struct CopyModInfoOptions;
}
namespace Epic::OnlineServices::Mods {
struct EnumerateModsOptions;
}
namespace Epic::OnlineServices::Mods {
struct InstallModOptions;
}
namespace Epic::OnlineServices::Mods {
struct ModInfo;
}
namespace Epic::OnlineServices::Mods {
class OnEnumerateModsCallback;
}
namespace Epic::OnlineServices::Mods {
class OnInstallModCallback;
}
namespace Epic::OnlineServices::Mods {
class OnUninstallModCallback;
}
namespace Epic::OnlineServices::Mods {
class OnUpdateModCallback;
}
namespace Epic::OnlineServices::Mods {
struct UninstallModOptions;
}
namespace Epic::OnlineServices::Mods {
struct UpdateModOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
class ModsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Mods::ModsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::ModsInterface*, "Epic.OnlineServices.Mods", "ModsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Mods {
// Is value type: false
// CS Name: Epic.OnlineServices.Mods.ModsInterface
class CORDL_TYPE ModsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyModInfo, addr 0x18050c620, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyModInfo(::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfo>>  outEnumeratedMods) ;

/// @brief Method EnumerateMods, addr 0x18050c6c0, size 0x220, virtual false, abstract: false, final false
inline void EnumerateMods(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback*  completionDelegate) ;

/// @brief Method InstallMod, addr 0x18050c8e0, size 0x270, virtual false, abstract: false, final false
inline void InstallMod(::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnInstallModCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::Mods::ModsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Mods::ModsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method UninstallMod, addr 0x18050cb50, size 0x260, virtual false, abstract: false, final false
inline void UninstallMod(::by_ref<::Epic::OnlineServices::Mods::UninstallModOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnUninstallModCallback*  completionDelegate) ;

/// @brief Method UpdateMod, addr 0x18050cdb0, size 0x290, virtual false, abstract: false, final false
inline void UpdateMod(::by_ref<::Epic::OnlineServices::Mods::UpdateModOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnUpdateModCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModsInterface(ModsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModsInterface(ModsInterface const& ) = delete;

/// @brief Field COPYMODINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYMODINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ENUMERATEMODS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENUMERATEMODS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INSTALLMOD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INSTALLMOD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MODINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  MODINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MOD_IDENTIFIER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  MOD_IDENTIFIER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNINSTALLMOD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNINSTALLMOD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATEMOD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATEMOD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Mods::ModsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
