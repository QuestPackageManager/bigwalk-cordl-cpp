#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToIntegratedPlatformManagementFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_def.hpp"
CORDL_MODULE_EXPORT(ListOfStringsToIntegratedPlatformManagementFlags)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ListOfStringsToIntegratedPlatformManagementFlags;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags*, "PlayEveryWare.EpicOnlineServices", "ListOfStringsToIntegratedPlatformManagementFlags");
// Dependencies Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags, PlayEveryWare.EpicOnlineServices.ListOfStringsToEnumConverter`1<TEnum>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ListOfStringsToIntegratedPlatformManagementFlags
class CORDL_TYPE ListOfStringsToIntegratedPlatformManagementFlags : public ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags> {
public:
// Declarations
/// @brief Method FromStringArray, addr 0x180541150, size 0x60, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags FromStringArray(::Newtonsoft::Json::Linq::JArray*  array) ;

static inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags* New_ctor() ;

/// @brief Method .ctor, addr 0x1805411b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfStringsToIntegratedPlatformManagementFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToIntegratedPlatformManagementFlags", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfStringsToIntegratedPlatformManagementFlags(ListOfStringsToIntegratedPlatformManagementFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToIntegratedPlatformManagementFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfStringsToIntegratedPlatformManagementFlags(ListOfStringsToIntegratedPlatformManagementFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ListOfStringsToIntegratedPlatformManagementFlags) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
