#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToAuthScopeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_def.hpp"
CORDL_MODULE_EXPORT(ListOfStringsToAuthScopeFlags)
namespace Epic::OnlineServices::Auth {
struct AuthScopeFlags;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ListOfStringsToAuthScopeFlags;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags*, "PlayEveryWare.EpicOnlineServices", "ListOfStringsToAuthScopeFlags");
// Dependencies Epic.OnlineServices.Auth.AuthScopeFlags, PlayEveryWare.EpicOnlineServices.ListOfStringsToEnumConverter`1<TEnum>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ListOfStringsToAuthScopeFlags
class CORDL_TYPE ListOfStringsToAuthScopeFlags : public ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<::Epic::OnlineServices::Auth::AuthScopeFlags> {
public:
// Declarations
/// @brief Method FromStringArray, addr 0x1805410c0, size 0x60, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::Auth::AuthScopeFlags FromStringArray(::Newtonsoft::Json::Linq::JArray*  array) ;

static inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags* New_ctor() ;

/// @brief Method .ctor, addr 0x180541120, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfStringsToAuthScopeFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToAuthScopeFlags", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfStringsToAuthScopeFlags(ListOfStringsToAuthScopeFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToAuthScopeFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfStringsToAuthScopeFlags(ListOfStringsToAuthScopeFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ListOfStringsToAuthScopeFlags) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
