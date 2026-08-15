#pragma once
// IWYU pragma private; include "Rewired/SteamAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamAction)
// Forward declare root types
namespace Rewired {
class SteamAction;
}
// Write type traits
MARK_REF_T(::Rewired::SteamAction*);
DEFINE_IL2CPP_CLASS(::Rewired::SteamAction*, "Rewired", "SteamAction");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.SteamAction
class CORDL_TYPE SteamAction : public ::System::Object {
public:
// Declarations
/// @brief Field handle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) uint64_t  handle;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Rewired::SteamAction* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr uint64_t const& __cordl_internal_get_handle() const;

constexpr uint64_t& __cordl_internal_get_handle() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_handle(uint64_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818474d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAction(SteamAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAction(SteamAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1800};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field handle, offset: 0x18, size: 0x8, def value: None
 uint64_t  ___handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::SteamAction, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::SteamAction, ___handle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::SteamAction) == 0x20, "Size mismatch!");

} // namespace end def Rewired
