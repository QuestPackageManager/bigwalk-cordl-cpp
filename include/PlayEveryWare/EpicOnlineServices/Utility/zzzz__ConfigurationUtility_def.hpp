#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/ConfigurationUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationUtility)
namespace PlayEveryWare::EpicOnlineServices {
class EOSCreateOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSInitializeOptions;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Utility {
class ConfigurationUtility;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility*, "PlayEveryWare.EpicOnlineServices.Utility", "ConfigurationUtility");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.ConfigurationUtility
class CORDL_TYPE ConfigurationUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetEOSCreateOptions, addr 0x1805362b0, size 0x3a0, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::EOSCreateOptions* GetEOSCreateOptions() ;

/// @brief Method GetEOSInitializeOptions, addr 0x180536650, size 0x280, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions* GetEOSInitializeOptions() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationUtility(ConfigurationUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationUtility(ConfigurationUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::ConfigurationUtility) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
