#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToInputStateButtonFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_def.hpp"
CORDL_MODULE_EXPORT(ListOfStringsToInputStateButtonFlags)
namespace Epic::OnlineServices::UI {
struct InputStateButtonFlags;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ListOfStringsToInputStateButtonFlags;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags*, "PlayEveryWare.EpicOnlineServices", "ListOfStringsToInputStateButtonFlags");
// Dependencies Epic.OnlineServices.UI.InputStateButtonFlags, PlayEveryWare.EpicOnlineServices.ListOfStringsToEnumConverter`1<TEnum>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ListOfStringsToInputStateButtonFlags
class CORDL_TYPE ListOfStringsToInputStateButtonFlags : public ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<::Epic::OnlineServices::UI::InputStateButtonFlags> {
public:
// Declarations
/// @brief Method FromStringArray, addr 0x180541130, size 0x10, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::UI::InputStateButtonFlags FromStringArray(::Newtonsoft::Json::Linq::JArray*  array) ;

static inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags* New_ctor() ;

/// @brief Method .ctor, addr 0x180541140, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfStringsToInputStateButtonFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToInputStateButtonFlags", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfStringsToInputStateButtonFlags(ListOfStringsToInputStateButtonFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToInputStateButtonFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfStringsToInputStateButtonFlags(ListOfStringsToInputStateButtonFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ListOfStringsToInputStateButtonFlags) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
