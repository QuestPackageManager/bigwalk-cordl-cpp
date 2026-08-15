#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSClientCredentials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EOSClientCredentials)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class EOSClientCredentials;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*, "PlayEveryWare.EpicOnlineServices", "EOSClientCredentials");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSClientCredentials
class CORDL_TYPE EOSClientCredentials : public ::System::Object {
public:
// Declarations
/// @brief Field ClientId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClientId, put=__cordl_internal_set_ClientId)) ::StringW  ClientId;

/// @brief Field ClientSecret, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClientSecret, put=__cordl_internal_set_ClientSecret)) ::StringW  ClientSecret;

 __declspec(property(get=get_EncryptionKey, put=set_EncryptionKey)) ::StringW  EncryptionKey;

 __declspec(property(get=get_IsComplete)) bool  IsComplete;

/// @brief Field <EncryptionKey>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__EncryptionKey_k__BackingField, put=__cordl_internal_set__EncryptionKey_k__BackingField)) ::StringW  _EncryptionKey_k__BackingField;

/// @brief Field s_invalidEncryptionKeyRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_invalidEncryptionKeyRegex, put=setStaticF_s_invalidEncryptionKeyRegex)) ::System::Text::RegularExpressions::Regex*  s_invalidEncryptionKeyRegex;

/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>"
constexpr operator  ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*() noexcept;

/// @brief Method Equals, addr 0x180537800, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*  other) ;

/// @brief Method Equals, addr 0x180537780, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GenerateEncryptionKey, addr 0x180537850, size 0x110, virtual false, abstract: false, final false
static inline ::StringW GenerateEncryptionKey() ;

/// @brief Method GetHashCode, addr 0x180537960, size 0x70, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsEncryptionKeyValid, addr 0x180537a50, size 0x90, virtual false, abstract: false, final false
inline bool IsEncryptionKeyValid() ;

/// @brief Method IsEncryptionKeyValid, addr 0x1805379d0, size 0x80, virtual false, abstract: false, final false
static inline bool IsEncryptionKeyValid(::StringW  encryptionKey) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials* New_ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials* New_ctor(::StringW  clientId, ::StringW  clientSecret, ::StringW  encryptionKey) ;

constexpr ::StringW const& __cordl_internal_get_ClientId() const;

constexpr ::StringW& __cordl_internal_get_ClientId() ;

constexpr ::StringW const& __cordl_internal_get_ClientSecret() const;

constexpr ::StringW& __cordl_internal_get_ClientSecret() ;

constexpr ::StringW const& __cordl_internal_get__EncryptionKey_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__EncryptionKey_k__BackingField() ;

constexpr void __cordl_internal_set_ClientId(::StringW  value) ;

constexpr void __cordl_internal_set_ClientSecret(::StringW  value) ;

constexpr void __cordl_internal_set__EncryptionKey_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x180537ba0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180537b40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  clientId, ::StringW  clientSecret, ::StringW  encryptionKey) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_invalidEncryptionKeyRegex() ;

/// @brief Method get_EncryptionKey, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_EncryptionKey() ;

/// @brief Method get_IsComplete, addr 0x180537be0, size 0x40, virtual false, abstract: false, final false
inline bool get_IsComplete() ;

/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>"
constexpr ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>* i___System__IEquatable_1___PlayEveryWare__EpicOnlineServices__EOSClientCredentials__() noexcept;

static inline void setStaticF_s_invalidEncryptionKeyRegex(::System::Text::RegularExpressions::Regex*  value) ;

/// @brief Method set_EncryptionKey, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_EncryptionKey(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSClientCredentials() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSClientCredentials", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSClientCredentials(EOSClientCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSClientCredentials", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSClientCredentials(EOSClientCredentials const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18886};

/// @brief Field ClientId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ClientId;

/// @brief Field ClientSecret, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ClientSecret;

/// @brief Field <EncryptionKey>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____EncryptionKey_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials, ___ClientId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials, ___ClientSecret) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials, ____EncryptionKey_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
