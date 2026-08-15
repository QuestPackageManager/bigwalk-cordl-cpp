#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToPlatformFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
CORDL_MODULE_EXPORT(ListOfStringsToPlatformFlags)
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace PlayEveryWare::EpicOnlineServices {
struct WrappedPlatformFlags;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ListOfStringsToPlatformFlags;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags*, "PlayEveryWare.EpicOnlineServices", "ListOfStringsToPlatformFlags");
// Dependencies PlayEveryWare.EpicOnlineServices.ListOfStringsToEnumConverter`1<TEnum>, PlayEveryWare.EpicOnlineServices.WrappedPlatformFlags
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ListOfStringsToPlatformFlags
class CORDL_TYPE ListOfStringsToPlatformFlags : public ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags> {
public:
// Declarations
/// @brief Method FromStringArray, addr 0x1805411c0, size 0x120, virtual true, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags FromStringArray(::Newtonsoft::Json::Linq::JArray*  array) ;

static inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags* New_ctor() ;

/// @brief Method .ctor, addr 0x1805412e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfStringsToPlatformFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToPlatformFlags", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfStringsToPlatformFlags(ListOfStringsToPlatformFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToPlatformFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfStringsToPlatformFlags(ListOfStringsToPlatformFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18841};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ListOfStringsToPlatformFlags) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
