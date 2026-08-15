#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/HashUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashUtility)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Utility {
class HashUtility;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Utility::HashUtility*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::HashUtility*, "PlayEveryWare.EpicOnlineServices.Utility", "HashUtility");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.HashUtility
class CORDL_TYPE HashUtility : public ::System::Object {
public:
// Declarations
/// @brief Method Combine, addr 0x1805409e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Combine(::ArrayW<::System::Object*>  fields) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashUtility(HashUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashUtility(HashUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18939};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::HashUtility) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
