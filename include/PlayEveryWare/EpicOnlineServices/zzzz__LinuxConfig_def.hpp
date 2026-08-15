#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/LinuxConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LinuxConfig)
namespace PlayEveryWare::EpicOnlineServices {
class LinuxConfig___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class LinuxConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class LinuxConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::LinuxConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::LinuxConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::LinuxConfig*, "PlayEveryWare.EpicOnlineServices", "LinuxConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::LinuxConfig___c*, "PlayEveryWare.EpicOnlineServices", "LinuxConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.LinuxConfig/<>c
class CORDL_TYPE LinuxConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::LinuxConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::LinuxConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x180548cb0, size 0x30, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::LinuxConfig* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::LinuxConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::LinuxConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinuxConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinuxConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinuxConfig___c(LinuxConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinuxConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinuxConfig___c(LinuxConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18917};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::LinuxConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.LinuxConfig
class CORDL_TYPE LinuxConfig : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::LinuxConfig___c;

static inline ::PlayEveryWare::EpicOnlineServices::LinuxConfig* New_ctor() ;

/// @brief Method .ctor, addr 0x1805410b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinuxConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinuxConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinuxConfig(LinuxConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinuxConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinuxConfig(LinuxConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::LinuxConfig) == 0xa0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
