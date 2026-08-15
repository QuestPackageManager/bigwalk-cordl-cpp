#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportPoint)
namespace GlobalNamespace {
class TeleportPoint___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportPoint;
}
namespace GlobalNamespace {
class TeleportPoint___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportPoint*);
MARK_REF_T(::GlobalNamespace::TeleportPoint___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportPoint*, "", "TeleportPoint");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportPoint___c*, "", "TeleportPoint/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportPoint/<>c
class CORDL_TYPE TeleportPoint___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::TeleportPoint___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  __9__11_0;

static inline ::GlobalNamespace::TeleportPoint___c* New_ctor() ;

/// @brief Method <SortListIfNeeded>b__11_0, addr 0x1803f25a0, size 0xa0, virtual false, abstract: false, final false
inline int32_t _SortListIfNeeded_b__11_0(::GlobalNamespace::TeleportPoint*  teleport1, ::GlobalNamespace::TeleportPoint*  teleport2) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TeleportPoint___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::GlobalNamespace::TeleportPoint___c*  value) ;

static inline void setStaticF___9__11_0(::System::Comparison_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportPoint___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportPoint___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportPoint___c(TeleportPoint___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportPoint___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportPoint___c(TeleportPoint___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TeleportPoint___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportPoint
class CORDL_TYPE TeleportPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::TeleportPoint___c;

/// @brief Field allPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allPoints, put=setStaticF_allPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  allPoints;

/// @brief Field cheatCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cheatCode, put=__cordl_internal_set_cheatCode)) ::StringW  cheatCode;

/// @brief Field customName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_customName, put=__cordl_internal_set_customName)) ::StringW  customName;

/// @brief Field listIsSorted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_listIsSorted, put=setStaticF_listIsSorted)) bool  listIsSorted;

/// @brief Field onTeleport, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onTeleport, put=setStaticF_onTeleport)) ::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  onTeleport;

 __declspec(property(get=get_sortName)) ::StringW  sortName;

/// @brief Field teleportAtSpawn, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_teleportAtSpawn, put=__cordl_internal_set_teleportAtSpawn)) bool  teleportAtSpawn;

static inline ::GlobalNamespace::TeleportPoint* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803f1720, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803f1770, size 0x120, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x1803f1890, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTeleport, addr 0x1803f1980, size 0x30, virtual false, abstract: false, final false
static inline void OnTeleport(::GlobalNamespace::TeleportPoint*  destination) ;

/// @brief Method OnValidate, addr 0x1803f19b0, size 0x120, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SortListIfNeeded, addr 0x1803f1ad0, size 0xf0, virtual false, abstract: false, final false
static inline void SortListIfNeeded() ;

constexpr ::StringW const& __cordl_internal_get_cheatCode() const;

constexpr ::StringW& __cordl_internal_get_cheatCode() ;

constexpr ::StringW const& __cordl_internal_get_customName() const;

constexpr ::StringW& __cordl_internal_get_customName() ;

constexpr bool const& __cordl_internal_get_teleportAtSpawn() const;

constexpr bool& __cordl_internal_get_teleportAtSpawn() ;

constexpr void __cordl_internal_set_cheatCode(::StringW  value) ;

constexpr void __cordl_internal_set_customName(::StringW  value) ;

constexpr void __cordl_internal_set_teleportAtSpawn(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>* getStaticF_allPoints() ;

static inline bool getStaticF_listIsSorted() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>* getStaticF_onTeleport() ;

/// @brief Method get_sortName, addr 0x1803f1bc0, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_sortName() ;

static inline void setStaticF_allPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  value) ;

static inline void setStaticF_listIsSorted(bool  value) ;

static inline void setStaticF_onTeleport(::System::Action_1<::UnityW<::GlobalNamespace::TeleportPoint>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportPoint(TeleportPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportPoint(TeleportPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4921};

/// @brief Field customName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___customName;

/// @brief Field cheatCode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___cheatCode;

/// @brief Field teleportAtSpawn, offset: 0x30, size: 0x1, def value: None
 bool  ___teleportAtSpawn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportPoint, ___customName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportPoint, ___cheatCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportPoint, ___teleportAtSpawn) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportPoint) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
