#pragma once
// IWYU pragma private; include "GlobalNamespace/OccasionalsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OccasionalsManager)
namespace GlobalNamespace {
class IOccasional;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OccasionalsManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OccasionalsManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OccasionalsManager*, "", "OccasionalsManager");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OccasionalsManager
class CORDL_TYPE OccasionalsManager : public ::System::Object {
public:
// Declarations
/// @brief Field activeOccasionals, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeOccasionals, put=__cordl_internal_set_activeOccasionals)) ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  activeOccasionals;

/// @brief Field changedList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_changedList, put=__cordl_internal_set_changedList)) ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  changedList;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::GlobalNamespace::OccasionalsManager*  instance;

/// @brief Field listHasChanged, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_listHasChanged, put=__cordl_internal_set_listHasChanged)) bool  listHasChanged;

/// @brief Field logVerbose, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method Add, addr 0x1803ed970, size 0xa0, virtual false, abstract: false, final false
static inline void Add(::GlobalNamespace::IOccasional*  occasional) ;

/// @brief Method Initialize, addr 0x1803eda10, size 0xa0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::OccasionalsManager* New_ctor() ;

/// @brief Method Remove, addr 0x1803edab0, size 0x60, virtual false, abstract: false, final false
static inline void Remove(::GlobalNamespace::IOccasional*  occasional) ;

/// @brief Method Update, addr 0x1803edb10, size 0x1a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>* const& __cordl_internal_get_activeOccasionals() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*& __cordl_internal_get_activeOccasionals() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>* const& __cordl_internal_get_changedList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*& __cordl_internal_get_changedList() ;

constexpr bool const& __cordl_internal_get_listHasChanged() const;

constexpr bool& __cordl_internal_get_listHasChanged() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_activeOccasionals(::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  value) ;

constexpr void __cordl_internal_set_changedList(::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  value) ;

constexpr void __cordl_internal_set_listHasChanged(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OccasionalsManager* getStaticF_instance() ;

static inline void setStaticF_instance(::GlobalNamespace::OccasionalsManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OccasionalsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OccasionalsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OccasionalsManager(OccasionalsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OccasionalsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OccasionalsManager(OccasionalsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4955};

/// @brief Field activeOccasionals, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  ___activeOccasionals;

/// @brief Field changedList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IOccasional*>*  ___changedList;

/// @brief Field listHasChanged, offset: 0x20, size: 0x1, def value: None
 bool  ___listHasChanged;

/// @brief Field logVerbose, offset: 0x21, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OccasionalsManager, ___activeOccasionals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OccasionalsManager, ___changedList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OccasionalsManager, ___listHasChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OccasionalsManager, ___logVerbose) == 0x21, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OccasionalsManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
