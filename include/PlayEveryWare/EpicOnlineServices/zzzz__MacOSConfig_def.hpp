#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/MacOSConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MacOSConfig)
namespace PlayEveryWare::EpicOnlineServices {
class MacOSConfig___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class MacOSConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class MacOSConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::MacOSConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::MacOSConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::MacOSConfig*, "PlayEveryWare.EpicOnlineServices", "MacOSConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::MacOSConfig___c*, "PlayEveryWare.EpicOnlineServices", "MacOSConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.MacOSConfig/<>c
class CORDL_TYPE MacOSConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::MacOSConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::MacOSConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x180548ce0, size 0x30, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::MacOSConfig* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::MacOSConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::MacOSConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MacOSConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MacOSConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacOSConfig___c(MacOSConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacOSConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacOSConfig___c(MacOSConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::MacOSConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.MacOSConfig
class CORDL_TYPE MacOSConfig : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::MacOSConfig___c;

static inline ::PlayEveryWare::EpicOnlineServices::MacOSConfig* New_ctor() ;

/// @brief Method .ctor, addr 0x1805416b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MacOSConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MacOSConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacOSConfig(MacOSConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacOSConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacOSConfig(MacOSConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::MacOSConfig) == 0xa0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
