#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSCreateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__WindowsOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EOSCreateOptions)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class EOSCreateOptions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*, "PlayEveryWare.EpicOnlineServices", "EOSCreateOptions");
// Dependencies Epic.OnlineServices.Platform.WindowsOptions, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSCreateOptions
class CORDL_TYPE EOSCreateOptions : public ::System::Object {
public:
// Declarations
/// @brief Field options, offset 0x10, size 0xb0 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Epic::OnlineServices::Platform::WindowsOptions  options;

static inline ::PlayEveryWare::EpicOnlineServices::EOSCreateOptions* New_ctor() ;

constexpr ::Epic::OnlineServices::Platform::WindowsOptions const& __cordl_internal_get_options() const;

constexpr ::Epic::OnlineServices::Platform::WindowsOptions& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_options(::Epic::OnlineServices::Platform::WindowsOptions  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSCreateOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSCreateOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSCreateOptions(EOSCreateOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSCreateOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSCreateOptions(EOSCreateOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18921};

/// @brief Field options, offset: 0x10, size: 0xb0, def value: None
 ::Epic::OnlineServices::Platform::WindowsOptions  ___options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSCreateOptions, ___options) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSCreateOptions) == 0xc0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
