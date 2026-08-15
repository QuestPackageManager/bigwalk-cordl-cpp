#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSPackageInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EOSPackageInfo)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class EOSPackageInfo;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSPackageInfo*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSPackageInfo*, "PlayEveryWare.EpicOnlineServices", "EOSPackageInfo");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSPackageInfo
class CORDL_TYPE EOSPackageInfo : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSPackageInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSPackageInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSPackageInfo(EOSPackageInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSPackageInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSPackageInfo(EOSPackageInfo const& ) = delete;

/// @brief Field NativeLibSDKVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  NativeLibSDKVersion{u"todo value"};

/// @brief Field PackageName offset 0xffffffff size 0x8
static constexpr ::ConstString  PackageName{u"com.playeveryware.eos"};

/// @brief Field Version offset 0xffffffff size 0x8
static constexpr ::ConstString  Version{u"6.0.2"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18885};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSPackageInfo) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
