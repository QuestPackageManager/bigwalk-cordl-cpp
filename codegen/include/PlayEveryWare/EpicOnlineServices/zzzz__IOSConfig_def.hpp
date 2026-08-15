#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IOSConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IOSConfig)
namespace PlayEveryWare::EpicOnlineServices {
class IOSConfig___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IOSConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class IOSConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IOSConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IOSConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IOSConfig*, "PlayEveryWare.EpicOnlineServices", "IOSConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IOSConfig___c*, "PlayEveryWare.EpicOnlineServices", "IOSConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IOSConfig/<>c
class CORDL_TYPE IOSConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::IOSConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::IOSConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x180548d50, size 0x30, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::IOSConfig* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::IOSConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::IOSConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IOSConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IOSConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IOSConfig___c(IOSConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IOSConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOSConfig___c(IOSConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18924};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::IOSConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IOSConfig
class CORDL_TYPE IOSConfig : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::IOSConfig___c;

static inline ::PlayEveryWare::EpicOnlineServices::IOSConfig* New_ctor() ;

/// @brief Method .ctor, addr 0x180540a70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IOSConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IOSConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IOSConfig(IOSConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IOSConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOSConfig(IOSConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::IOSConfig) == 0xa0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
