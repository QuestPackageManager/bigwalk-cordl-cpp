#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PS5Config.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PS5Config)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace PlayEveryWare::EpicOnlineServices {
class PS5Config___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class PS5Config;
}
namespace PlayEveryWare::EpicOnlineServices {
class PS5Config___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PS5Config*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PS5Config___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PS5Config*, "PlayEveryWare.EpicOnlineServices", "PS5Config");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PS5Config___c*, "PlayEveryWare.EpicOnlineServices", "PS5Config/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PS5Config/<>c
class CORDL_TYPE PS5Config___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::PS5Config___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::PS5Config___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x180548f40, size 0x30, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::PS5Config* __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::PS5Config___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::PS5Config___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PS5Config___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PS5Config___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5Config___c(PS5Config___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5Config___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5Config___c(PS5Config___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PS5Config___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PS5Config
class CORDL_TYPE PS5Config : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::PS5Config___c;

/// @brief Field IsPSPlusRequired, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPSPlusRequired, put=__cordl_internal_set_IsPSPlusRequired)) bool  IsPSPlusRequired;

/// @brief Field clientID, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientID, put=__cordl_internal_set_clientID)) ::StringW  clientID;

/// @brief Field clientSecret, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientSecret, put=__cordl_internal_set_clientSecret)) ::StringW  clientSecret;

/// @brief Method GetDefaultIntegratedPlatformManagementFlags, addr 0x180542390, size 0x10, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags GetDefaultIntegratedPlatformManagementFlags() ;

/// @brief Method InitializationRoutine, addr 0x1805423a0, size 0x10, virtual false, abstract: false, final false
static inline void InitializationRoutine() ;

static inline ::PlayEveryWare::EpicOnlineServices::PS5Config* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsPSPlusRequired() const;

constexpr bool& __cordl_internal_get_IsPSPlusRequired() ;

constexpr ::StringW const& __cordl_internal_get_clientID() const;

constexpr ::StringW& __cordl_internal_get_clientID() ;

constexpr ::StringW const& __cordl_internal_get_clientSecret() const;

constexpr ::StringW& __cordl_internal_get_clientSecret() ;

constexpr void __cordl_internal_set_IsPSPlusRequired(bool  value) ;

constexpr void __cordl_internal_set_clientID(::StringW  value) ;

constexpr void __cordl_internal_set_clientSecret(::StringW  value) ;

/// @brief Method .ctor, addr 0x180542550, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PS5Config() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PS5Config", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5Config(PS5Config && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5Config", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5Config(PS5Config const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18929};

/// @brief Field IsPSPlusRequired, offset: 0xa0, size: 0x1, def value: None
 bool  ___IsPSPlusRequired;

/// @brief Field clientID, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___clientID;

/// @brief Field clientSecret, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___clientSecret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PS5Config, ___IsPSPlusRequired) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PS5Config, ___clientID) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PS5Config, ___clientSecret) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PS5Config) == 0xb8, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
