#pragma once
// IWYU pragma private; include "GlobalNamespace/ParentalRestrictionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_def.hpp"
CORDL_MODULE_EXPORT(ParentalRestrictionManager)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ParentalRestrictionManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParentalRestrictionManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParentalRestrictionManager*, "", "ParentalRestrictionManager");
// Dependencies Shipmate.Utils.SingletonBehaviour`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParentalRestrictionManager
class CORDL_TYPE ParentalRestrictionManager : public ::Shipmate::Utils::SingletonBehaviour_1<::UnityW<::GlobalNamespace::ParentalRestrictionManager>> {
public:
// Declarations
/// @brief Field OnParentalRestrictionsChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnParentalRestrictionsChanged, put=setStaticF_OnParentalRestrictionsChanged)) ::System::Action_1<bool>*  OnParentalRestrictionsChanged;

/// @brief Field _currentParentalRestricted, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentParentalRestricted, put=__cordl_internal_set__currentParentalRestricted)) bool  _currentParentalRestricted;

static inline ::GlobalNamespace::ParentalRestrictionManager* New_ctor() ;

constexpr bool const& __cordl_internal_get__currentParentalRestricted() const;

constexpr bool& __cordl_internal_get__currentParentalRestricted() ;

constexpr void __cordl_internal_set__currentParentalRestricted(bool  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnParentalRestrictionsChanged, addr 0x181acd060, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnParentalRestrictionsChanged(::System::Action_1<bool>*  value) ;

static inline ::System::Action_1<bool>* getStaticF_OnParentalRestrictionsChanged() ;

/// @brief Method get_CurrentParentalRestricted, addr 0x181acd110, size 0x60, virtual false, abstract: false, final false
static inline bool get_CurrentParentalRestricted() ;

/// @brief Method remove_OnParentalRestrictionsChanged, addr 0x181acd170, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnParentalRestrictionsChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_OnParentalRestrictionsChanged(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParentalRestrictionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParentalRestrictionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParentalRestrictionManager(ParentalRestrictionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParentalRestrictionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParentalRestrictionManager(ParentalRestrictionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21047};

/// @brief Field _currentParentalRestricted, offset: 0x20, size: 0x1, def value: None
 bool  ____currentParentalRestricted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParentalRestrictionManager, ____currentParentalRestricted) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParentalRestrictionManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
