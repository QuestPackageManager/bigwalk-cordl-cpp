#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSInitializeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__InitializeOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EOSInitializeOptions)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class EOSInitializeOptions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*, "PlayEveryWare.EpicOnlineServices", "EOSInitializeOptions");
// Dependencies Epic.OnlineServices.Platform.InitializeOptions, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSInitializeOptions
class CORDL_TYPE EOSInitializeOptions : public ::System::Object {
public:
// Declarations
/// @brief Field options, offset 0x10, size 0x88 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::Epic::OnlineServices::Platform::InitializeOptions  options;

static inline ::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions* New_ctor() ;

constexpr ::Epic::OnlineServices::Platform::InitializeOptions const& __cordl_internal_get_options() const;

constexpr ::Epic::OnlineServices::Platform::InitializeOptions& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_options(::Epic::OnlineServices::Platform::InitializeOptions  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSInitializeOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSInitializeOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSInitializeOptions(EOSInitializeOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSInitializeOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSInitializeOptions(EOSInitializeOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18922};

/// @brief Field options, offset: 0x10, size: 0x88, def value: None
 ::Epic::OnlineServices::Platform::InitializeOptions  ___options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions, ___options) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions) == 0x98, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
