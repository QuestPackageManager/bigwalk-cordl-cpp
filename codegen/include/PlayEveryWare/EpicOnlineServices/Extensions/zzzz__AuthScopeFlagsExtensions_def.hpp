#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Extensions/AuthScopeFlagsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthScopeFlagsExtensions)
namespace Epic::OnlineServices::Auth {
struct AuthScopeFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Extensions {
class AuthScopeFlagsExtensions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*, "PlayEveryWare.EpicOnlineServices.Extensions", "AuthScopeFlagsExtensions");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Extensions.AuthScopeFlagsExtensions
class CORDL_TYPE AuthScopeFlagsExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field <CustomMappings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CustomMappings_k__BackingField, put=setStaticF__CustomMappings_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*  _CustomMappings_k__BackingField;

/// @brief Method GetDescription, addr 0x180534eb0, size 0x120, virtual false, abstract: false, final false
static inline ::StringW GetDescription(::Epic::OnlineServices::Auth::AuthScopeFlags  flags) ;

/// @brief Method TryParse, addr 0x180534fd0, size 0x60, virtual false, abstract: false, final false
static inline bool TryParse(::System::Collections::Generic::IList_1<::StringW>*  stringFlags, ::by_ref<::Epic::OnlineServices::Auth::AuthScopeFlags>  result) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>* getStaticF__CustomMappings_k__BackingField() ;

/// @brief Method get_CustomMappings, addr 0x180535150, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>* get_CustomMappings() ;

static inline void setStaticF__CustomMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthScopeFlagsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthScopeFlagsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthScopeFlagsExtensions(AuthScopeFlagsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthScopeFlagsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthScopeFlagsExtensions(AuthScopeFlagsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18933};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Extensions
