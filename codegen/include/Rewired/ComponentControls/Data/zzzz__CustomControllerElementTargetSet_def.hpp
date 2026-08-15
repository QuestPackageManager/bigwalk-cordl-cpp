#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTargetSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerElementTargetSet)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTarget;
}
// Forward declare root types
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSet;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*, "Rewired.ComponentControls.Data", "CustomControllerElementTargetSet");
// Dependencies System.Object
namespace Rewired::ComponentControls::Data {
// Is value type: false
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementTargetSet
class CORDL_TYPE CustomControllerElementTargetSet : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget*  Item[];

 __declspec(property(get=get_targetCount)) int32_t  targetCount;

/// @brief Method ClearElementCaches, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearElementCaches() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSet* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_Item(int32_t  index) ;

/// @brief Method get_targetCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_targetCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementTargetSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTargetSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerElementTargetSet(CustomControllerElementTargetSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTargetSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerElementTargetSet(CustomControllerElementTargetSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet) == 0x10, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
