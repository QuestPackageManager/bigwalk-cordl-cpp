#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/AndroidConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AndroidConfig)
namespace PlayEveryWare::EpicOnlineServices {
class AndroidConfig___c;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class AndroidConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class AndroidConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::AndroidConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AndroidConfig*, "PlayEveryWare.EpicOnlineServices", "AndroidConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*, "PlayEveryWare.EpicOnlineServices", "AndroidConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.AndroidConfig/<>c
class CORDL_TYPE AndroidConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__2_0, addr 0x180548ee0, size 0x30, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig* __cctor_b__2_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidConfig___c(AndroidConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidConfig___c(AndroidConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18804};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AndroidConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformConfig
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.AndroidConfig
class CORDL_TYPE AndroidConfig : public ::PlayEveryWare::EpicOnlineServices::PlatformConfig {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c;

/// @brief Field GoogleLoginClientID, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleLoginClientID, put=__cordl_internal_set_GoogleLoginClientID)) ::StringW  GoogleLoginClientID;

/// @brief Field GoogleLoginNonce, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleLoginNonce, put=__cordl_internal_set_GoogleLoginNonce)) ::StringW  GoogleLoginNonce;

static inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_GoogleLoginClientID() const;

constexpr ::StringW& __cordl_internal_get_GoogleLoginClientID() ;

constexpr ::StringW const& __cordl_internal_get_GoogleLoginNonce() const;

constexpr ::StringW& __cordl_internal_get_GoogleLoginNonce() ;

constexpr void __cordl_internal_set_GoogleLoginClientID(::StringW  value) ;

constexpr void __cordl_internal_set_GoogleLoginNonce(::StringW  value) ;

/// @brief Method .ctor, addr 0x1805348d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidConfig(AndroidConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidConfig(AndroidConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18805};

/// @brief Field GoogleLoginClientID, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___GoogleLoginClientID;

/// @brief Field GoogleLoginNonce, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___GoogleLoginNonce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::AndroidConfig, ___GoogleLoginClientID) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::AndroidConfig, ___GoogleLoginNonce) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AndroidConfig) == 0xb0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
