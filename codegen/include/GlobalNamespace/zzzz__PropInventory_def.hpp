#pragma once
// IWYU pragma private; include "GlobalNamespace/PropInventory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropInventory)
namespace GlobalNamespace {
class InventorySpawn;
}
namespace GlobalNamespace {
class InventoryZone;
}
namespace GlobalNamespace {
struct PropInventory_InventoryProp;
}
namespace GlobalNamespace {
class Prop;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PropInventory;
}
namespace GlobalNamespace {
struct PropInventory_InventoryProp;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropInventory*);
MARK_VAL_T(::GlobalNamespace::PropInventory_InventoryProp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropInventory*, "", "PropInventory");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropInventory_InventoryProp, "", "PropInventory/InventoryProp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropInventory/InventoryProp
struct CORDL_TYPE PropInventory_InventoryProp {
public:
// Declarations
/// @brief Method .ctor, addr 0x180394af0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Prop*  prop) ;

// Ctor Parameters []
// @brief default ctor
constexpr PropInventory_InventoryProp() ;

// Ctor Parameters [CppParam { name: "prop", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: None }, CppParam { name: "isInSpawnArea", ty: "bool", modifiers: "", def_value: None }]
constexpr PropInventory_InventoryProp(::UnityW<::GlobalNamespace::Prop>  prop, bool  isInSpawnArea) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field prop, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  prop;

/// @brief Field isInSpawnArea, offset: 0x8, size: 0x1, def value: None
 bool  isInSpawnArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropInventory_InventoryProp, prop) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropInventory_InventoryProp, isInSpawnArea) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropInventory_InventoryProp) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropInventory
class CORDL_TYPE PropInventory : public ::System::Object {
public:
// Declarations
using InventoryProp = ::GlobalNamespace::PropInventory_InventoryProp;

/// @brief Field _props, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__props, put=__cordl_internal_set__props)) ::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>*  _props;

/// @brief Field inventorySpawn, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inventorySpawn, put=__cordl_internal_set_inventorySpawn)) ::UnityW<::GlobalNamespace::InventorySpawn>  inventorySpawn;

/// @brief Field inventoryZones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inventoryZones, put=__cordl_internal_set_inventoryZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>*  inventoryZones;

/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field saveRequired, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveRequired, put=__cordl_internal_set_saveRequired)) bool  saveRequired;

/// @brief Method AddProp, addr 0x180384030, size 0x270, virtual false, abstract: false, final false
static inline void AddProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method AddZone, addr 0x1803842a0, size 0x110, virtual false, abstract: false, final false
static inline void AddZone(::GlobalNamespace::InventoryZone*  inventoryZone) ;

/// @brief Method FillSaveList, addr 0x1803843b0, size 0x350, virtual false, abstract: false, final false
static inline void FillSaveList(::System::Collections::Generic::List_1<::StringW>*  saveList) ;

/// @brief Method Initialize, addr 0x180384700, size 0x50, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::PropInventory* New_ctor() ;

/// @brief Method RecordSaveTypeChange, addr 0x180384750, size 0x40, virtual false, abstract: false, final false
static inline void RecordSaveTypeChange() ;

/// @brief Method RecordZoneChange, addr 0x180384750, size 0x40, virtual false, abstract: false, final false
static inline void RecordZoneChange() ;

/// @brief Method RemoveProp, addr 0x180384790, size 0x1e0, virtual false, abstract: false, final false
static inline void RemoveProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method RemoveZone, addr 0x180384970, size 0x50, virtual false, abstract: false, final false
static inline void RemoveZone(::GlobalNamespace::InventoryZone*  inventoryZone) ;

/// @brief Method ShouldSave, addr 0x1803849c0, size 0x40, virtual false, abstract: false, final false
static inline bool ShouldSave(::GlobalNamespace::Prop*  prop) ;

/// @brief Method Update, addr 0x180384a00, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>* const& __cordl_internal_get__props() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>*& __cordl_internal_get__props() ;

constexpr ::UnityW<::GlobalNamespace::InventorySpawn> const& __cordl_internal_get_inventorySpawn() const;

constexpr ::UnityW<::GlobalNamespace::InventorySpawn>& __cordl_internal_get_inventorySpawn() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>* const& __cordl_internal_get_inventoryZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>*& __cordl_internal_get_inventoryZones() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_saveRequired() const;

constexpr bool& __cordl_internal_get_saveRequired() ;

constexpr void __cordl_internal_set__props(::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>*  value) ;

constexpr void __cordl_internal_set_inventorySpawn(::UnityW<::GlobalNamespace::InventorySpawn>  value) ;

constexpr void __cordl_internal_set_inventoryZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_saveRequired(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180384a50, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PropInventory* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropInventory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropInventory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropInventory(PropInventory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropInventory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropInventory(PropInventory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5593};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field inventorySpawn, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InventorySpawn>  ___inventorySpawn;

/// @brief Field inventoryZones, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InventoryZone>>*  ___inventoryZones;

/// @brief Field saveRequired, offset: 0x28, size: 0x1, def value: None
 bool  ___saveRequired;

/// @brief Field _props, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PropInventory_InventoryProp>*  ____props;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropInventory, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropInventory, ___inventorySpawn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropInventory, ___inventoryZones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropInventory, ___saveRequired) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropInventory, ____props) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropInventory) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
