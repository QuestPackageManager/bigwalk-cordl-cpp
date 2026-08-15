#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTargetSetForBoolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSet_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerElementTargetSetForBoolean)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTarget;
}
// Forward declare root types
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForBoolean;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*, "Rewired.ComponentControls.Data", "CustomControllerElementTargetSetForBoolean");
// Dependencies Rewired.ComponentControls.Data.CustomControllerElementTargetSet
namespace Rewired::ComponentControls::Data {
// Is value type: false
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementTargetSetForBoolean
class CORDL_TYPE CustomControllerElementTargetSetForBoolean : public ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  Item[];

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _target;

 __declspec(property(get=get_target)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  target;

 __declspec(property(get=get_targetCount)) int32_t  targetCount;

/// @brief Method ClearElementCaches, addr 0x1818effd0, size 0x20, virtual true, abstract: false, final false
inline void ClearElementCaches() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* New_ctor() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* New_ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget* const& __cordl_internal_get__target() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget*& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__target(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  value) ;

/// @brief Method .ctor, addr 0x1818f00e0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818efff0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Item, addr 0x181806fb0, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_Item(int32_t  index) ;

/// @brief Method get_target, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_target() ;

/// @brief Method get_targetCount, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_targetCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementTargetSetForBoolean() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTargetSetForBoolean", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerElementTargetSetForBoolean(CustomControllerElementTargetSetForBoolean && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTargetSetForBoolean", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerElementTargetSetForBoolean(CustomControllerElementTargetSetForBoolean const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2809};

/// @brief Field tpqoYvCxPEZhBxaNxCSxERVFFHvQ offset 0xffffffff size 0x4
static constexpr int32_t  tpqoYvCxPEZhBxaNxCSxERVFFHvQ{static_cast<int32_t>(0x1)};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean, ____target) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean) == 0x18, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
