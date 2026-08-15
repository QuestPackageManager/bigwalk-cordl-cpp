#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WindowsConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WindowsConfig)
namespace PlayEveryWare::EpicOnlineServices {
class WindowsConfig___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class WindowsConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class WindowsConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::WindowsConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::WindowsConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::WindowsConfig*, "PlayEveryWare.EpicOnlineServices", "WindowsConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::WindowsConfig___c*, "PlayEveryWare.EpicOnlineServices", "WindowsConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.WindowsConfig/<>c
class CORDL_TYPE WindowsConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::WindowsConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::WindowsConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x180548c80, size 0x30, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::WindowsConfig* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::WindowsConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::WindowsConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsConfig___c(WindowsConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsConfig___c(WindowsConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18919};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::WindowsConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.WindowsConfig
class CORDL_TYPE WindowsConfig : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::WindowsConfig___c;

static inline ::PlayEveryWare::EpicOnlineServices::WindowsConfig* New_ctor() ;

/// @brief Method .ctor, addr 0x18054a780, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsConfig(WindowsConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsConfig(WindowsConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::WindowsConfig) == 0xa0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
