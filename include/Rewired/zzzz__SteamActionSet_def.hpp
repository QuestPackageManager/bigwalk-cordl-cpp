#pragma once
// IWYU pragma private; include "Rewired/SteamActionSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamActionSet)
namespace Rewired {
class SteamAction;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Rewired {
class SteamActionSet;
}
// Write type traits
MARK_REF_T(::Rewired::SteamActionSet*);
DEFINE_IL2CPP_CLASS(::Rewired::SteamActionSet*, "Rewired", "SteamActionSet");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.SteamActionSet
class CORDL_TYPE SteamActionSet : public ::System::Object {
public:
// Declarations
/// @brief Field actions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_actions, put=__cordl_internal_set_actions)) ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>*  actions;

/// @brief Field handle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) uint64_t  handle;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method AddAction, addr 0x181847430, size 0x40, virtual false, abstract: false, final false
inline void AddAction(::Rewired::SteamAction*  action) ;

static inline ::Rewired::SteamActionSet* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>* const& __cordl_internal_get_actions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>*& __cordl_internal_get_actions() ;

constexpr uint64_t const& __cordl_internal_get_handle() const;

constexpr uint64_t& __cordl_internal_get_handle() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_actions(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>*  value) ;

constexpr void __cordl_internal_set_handle(uint64_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x181847470, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamActionSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamActionSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamActionSet(SteamActionSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamActionSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamActionSet(SteamActionSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1801};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field handle, offset: 0x18, size: 0x8, def value: None
 uint64_t  ___handle;

/// @brief Field actions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::SteamAction*>*  ___actions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::SteamActionSet, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::SteamActionSet, ___handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::SteamActionSet, ___actions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::SteamActionSet) == 0x28, "Size mismatch!");

} // namespace end def Rewired
