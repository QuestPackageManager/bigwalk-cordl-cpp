#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSManagerPlatformSpecificsSingleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EOSManagerPlatformSpecificsSingleton)
namespace PlayEveryWare::EpicOnlineServices {
class IPlatformSpecifics;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class EOSManagerPlatformSpecificsSingleton;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton*, "PlayEveryWare.EpicOnlineServices", "EOSManagerPlatformSpecificsSingleton");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManagerPlatformSpecificsSingleton
class CORDL_TYPE EOSManagerPlatformSpecificsSingleton : public ::System::Object {
public:
// Declarations
/// @brief Field s_platformSpecifics, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_platformSpecifics, put=setStaticF_s_platformSpecifics)) ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*  s_platformSpecifics;

/// @brief Method InitOnPlayMode, addr 0x180538030, size 0x30, virtual false, abstract: false, final false
static inline void InitOnPlayMode() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton* New_ctor() ;

/// @brief Method SetEOSManagerPlatformSpecificsInterface, addr 0x180538060, size 0x110, virtual false, abstract: false, final false
static inline void SetEOSManagerPlatformSpecificsInterface(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*  platformSpecifics) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* getStaticF_s_platformSpecifics() ;

/// @brief Method get_Instance, addr 0x180538170, size 0x20, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* get_Instance() ;

static inline void setStaticF_s_platformSpecifics(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManagerPlatformSpecificsSingleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManagerPlatformSpecificsSingleton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManagerPlatformSpecificsSingleton(EOSManagerPlatformSpecificsSingleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManagerPlatformSpecificsSingleton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManagerPlatformSpecificsSingleton(EOSManagerPlatformSpecificsSingleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18884};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManagerPlatformSpecificsSingleton) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
