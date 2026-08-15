#pragma once
// IWYU pragma private; include "Shipmate/Porting/EPlatformAchievement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EPlatformAchievement)
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
class EPlatformAchievement___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Shipmate::Porting {
class EPlatformAchievement;
}
namespace Shipmate::Porting {
class EPlatformAchievement___c;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::EPlatformAchievement*);
MARK_REF_T(::Shipmate::Porting::EPlatformAchievement___c*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::EPlatformAchievement*, "Shipmate.Porting", "EPlatformAchievement");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::EPlatformAchievement___c*, "Shipmate.Porting", "EPlatformAchievement/<>c");
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.EPlatformAchievement/<>c
class CORDL_TYPE EPlatformAchievement___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Shipmate::Porting::EPlatformAchievement___c*  __9;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>*  __9__28_0;

/// @brief Field <>9__28_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_1, put=setStaticF___9__28_1)) ::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>*  __9__28_1;

static inline ::Shipmate::Porting::EPlatformAchievement___c* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_StatTrackedAchievementStorageNames>b__28_0, addr 0x181ac8ff0, size 0x20, virtual false, abstract: false, final false
inline bool _get_StatTrackedAchievementStorageNames_b__28_0(::Shipmate::Porting::EPlatformAchievement*  a) ;

/// @brief Method <get_StatTrackedAchievementStorageNames>b__28_1, addr 0x181ac9010, size 0x50, virtual false, abstract: false, final false
inline ::StringW _get_StatTrackedAchievementStorageNames_b__28_1(::Shipmate::Porting::EPlatformAchievement*  a) ;

static inline ::Shipmate::Porting::EPlatformAchievement___c* getStaticF___9() ;

static inline ::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>* getStaticF___9__28_0() ;

static inline ::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>* getStaticF___9__28_1() ;

static inline void setStaticF___9(::Shipmate::Porting::EPlatformAchievement___c*  value) ;

static inline void setStaticF___9__28_0(::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>*  value) ;

static inline void setStaticF___9__28_1(::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EPlatformAchievement___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EPlatformAchievement___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EPlatformAchievement___c(EPlatformAchievement___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EPlatformAchievement___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EPlatformAchievement___c(EPlatformAchievement___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20598};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::EPlatformAchievement___c) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.EPlatformAchievement
class CORDL_TYPE EPlatformAchievement : public ::System::Object {
public:
// Declarations
using __c = ::Shipmate::Porting::EPlatformAchievement___c;

/// @brief Field ALL_ACHIEVEMENTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ALL_ACHIEVEMENTS, put=setStaticF_ALL_ACHIEVEMENTS)) ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  ALL_ACHIEVEMENTS;

 __declspec(property(get=get_IsStatTrackedAchievement)) bool  IsStatTrackedAchievement;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_PS4TrophyId)) int32_t  PS4TrophyId;

 __declspec(property(get=get_PS5TrophyId)) int32_t  PS5TrophyId;

 __declspec(property(get=get_SteamStatAPIName)) ::StringW  SteamStatAPIName;

 __declspec(property(get=get_StorageName)) ::StringW  StorageName;

 __declspec(property(get=get_UnlockCount)) int32_t  UnlockCount;

 __declspec(property(get=get_XboxId)) int32_t  XboxId;

/// @brief Field mName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mName, put=__cordl_internal_set_mName)) ::StringW  mName;

/// @brief Field mPS4TrophyId, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mPS4TrophyId, put=__cordl_internal_set_mPS4TrophyId)) int32_t  mPS4TrophyId;

/// @brief Field mPS5TrophyId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mPS5TrophyId, put=__cordl_internal_set_mPS5TrophyId)) int32_t  mPS5TrophyId;

/// @brief Field mSteamStatAPIName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mSteamStatAPIName, put=__cordl_internal_set_mSteamStatAPIName)) ::StringW  mSteamStatAPIName;

/// @brief Field mUnlockCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_mUnlockCount, put=__cordl_internal_set_mUnlockCount)) int32_t  mUnlockCount;

/// @brief Field mXboxId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mXboxId, put=__cordl_internal_set_mXboxId)) int32_t  mXboxId;

static inline ::Shipmate::Porting::EPlatformAchievement* New_ctor(::StringW  aName, int32_t  aXboxId, int32_t  aUnlockCount, ::StringW  aSteamStatAPIName, int32_t  aPS4TrophyId, int32_t  aPS5TrophyId) ;

constexpr ::StringW const& __cordl_internal_get_mName() const;

constexpr ::StringW& __cordl_internal_get_mName() ;

constexpr int32_t const& __cordl_internal_get_mPS4TrophyId() const;

constexpr int32_t& __cordl_internal_get_mPS4TrophyId() ;

constexpr int32_t const& __cordl_internal_get_mPS5TrophyId() const;

constexpr int32_t& __cordl_internal_get_mPS5TrophyId() ;

constexpr ::StringW const& __cordl_internal_get_mSteamStatAPIName() const;

constexpr ::StringW& __cordl_internal_get_mSteamStatAPIName() ;

constexpr int32_t const& __cordl_internal_get_mUnlockCount() const;

constexpr int32_t& __cordl_internal_get_mUnlockCount() ;

constexpr int32_t const& __cordl_internal_get_mXboxId() const;

constexpr int32_t& __cordl_internal_get_mXboxId() ;

constexpr void __cordl_internal_set_mName(::StringW  value) ;

constexpr void __cordl_internal_set_mPS4TrophyId(int32_t  value) ;

constexpr void __cordl_internal_set_mPS5TrophyId(int32_t  value) ;

constexpr void __cordl_internal_set_mSteamStatAPIName(::StringW  value) ;

constexpr void __cordl_internal_set_mUnlockCount(int32_t  value) ;

constexpr void __cordl_internal_set_mXboxId(int32_t  value) ;

/// @brief Method .ctor, addr 0x181ac6680, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::StringW  aName, int32_t  aXboxId, int32_t  aUnlockCount, ::StringW  aSteamStatAPIName, int32_t  aPS4TrophyId, int32_t  aPS5TrophyId) ;

static inline ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* getStaticF_ALL_ACHIEVEMENTS() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method get_AllAchievements, addr 0x181ac67e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* get_AllAchievements() ;

/// @brief Method get_IsStatTrackedAchievement, addr 0x181ac6820, size 0x10, virtual false, abstract: false, final false
inline bool get_IsStatTrackedAchievement() ;

/// @brief Method get_Name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_PS4TrophyId, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PS4TrophyId() ;

/// @brief Method get_PS5TrophyId, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PS5TrophyId() ;

/// @brief Method get_StatTrackedAchievementStorageNames, addr 0x181ac6830, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_StatTrackedAchievementStorageNames() ;

/// @brief Method get_SteamStatAPIName, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_SteamStatAPIName() ;

/// @brief Method get_StorageName, addr 0x181ac69a0, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_StorageName() ;

/// @brief Method get_UnlockCount, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_UnlockCount() ;

/// @brief Method get_XboxId, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_XboxId() ;

static inline void setStaticF_ALL_ACHIEVEMENTS(::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  value) ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EPlatformAchievement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EPlatformAchievement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EPlatformAchievement(EPlatformAchievement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EPlatformAchievement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EPlatformAchievement(EPlatformAchievement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20599};

/// @brief Field mName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mName;

/// @brief Field mXboxId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___mXboxId;

/// @brief Field mPS4TrophyId, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___mPS4TrophyId;

/// @brief Field mPS5TrophyId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___mPS5TrophyId;

/// @brief Field mUnlockCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___mUnlockCount;

/// @brief Field mSteamStatAPIName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___mSteamStatAPIName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::EPlatformAchievement, ___mName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::EPlatformAchievement, ___mXboxId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::EPlatformAchievement, ___mPS4TrophyId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::EPlatformAchievement, ___mPS5TrophyId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::EPlatformAchievement, ___mUnlockCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::EPlatformAchievement, ___mSteamStatAPIName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::EPlatformAchievement) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
