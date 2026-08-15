#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformAchievements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformAchievements)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
struct AbstractPlatformAchievements__AsyncFetchAchievements_d__9;
}
namespace Shipmate::Porting {
class AbstractPlatformAchievements___c;
}
namespace Shipmate::Porting {
class EPlatformAchievement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformAchievements;
}
namespace Shipmate::Porting {
class AbstractPlatformAchievements___c;
}
namespace Shipmate::Porting {
struct AbstractPlatformAchievements__AsyncFetchAchievements_d__9;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformAchievements*);
MARK_REF_T(::Shipmate::Porting::AbstractPlatformAchievements___c*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformAchievements*, "Shipmate.Porting", "AbstractPlatformAchievements");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformAchievements___c*, "Shipmate.Porting", "AbstractPlatformAchievements/<>c");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9, "Shipmate.Porting", "AbstractPlatformAchievements/<AsyncFetchAchievements>d__9");
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformAchievements/<>c
class CORDL_TYPE AbstractPlatformAchievements___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Shipmate::Porting::AbstractPlatformAchievements___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>*  __9__12_0;

static inline ::Shipmate::Porting::AbstractPlatformAchievements___c* New_ctor() ;

/// @brief Method <GetAchievementById>b__12_0, addr 0x181ac8fd0, size 0x20, virtual false, abstract: false, final false
inline bool _GetAchievementById_b__12_0(::Shipmate::Porting::EPlatformAchievement*  platformAchievement, int32_t  id) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::AbstractPlatformAchievements___c* getStaticF___9() ;

static inline ::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::Shipmate::Porting::AbstractPlatformAchievements___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_3<::Shipmate::Porting::EPlatformAchievement*,int32_t,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformAchievements___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformAchievements___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformAchievements___c(AbstractPlatformAchievements___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformAchievements___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformAchievements___c(AbstractPlatformAchievements___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20595};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::AbstractPlatformAchievements___c) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformAchievements/<AsyncFetchAchievements>d__9
struct CORDL_TYPE AbstractPlatformAchievements__AsyncFetchAchievements_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7080, size 0x80, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformAchievements__AsyncFetchAchievements_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }]
constexpr AbstractPlatformAchievements__AsyncFetchAchievements_d__9(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformAchievements
class CORDL_TYPE AbstractPlatformAchievements : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
using _AsyncFetchAchievements_d__9 = ::Shipmate::Porting::AbstractPlatformAchievements__AsyncFetchAchievements_d__9;

using __c = ::Shipmate::Porting::AbstractPlatformAchievements___c;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Field OnAchievementUnlocked, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAchievementUnlocked, put=__cordl_internal_set_OnAchievementUnlocked)) ::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  OnAchievementUnlocked;

/// @brief Field mAchievementProgressLocked, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_mAchievementProgressLocked, put=__cordl_internal_set_mAchievementProgressLocked)) bool  mAchievementProgressLocked;

/// @brief Field mUnlockedAchievements, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mUnlockedAchievements, put=__cordl_internal_set_mUnlockedAchievements)) ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  mUnlockedAchievements;

/// @brief Method AsyncFetchAchievements, addr 0x181ac49b0, size 0x60, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask AsyncFetchAchievements() ;

/// @brief Method ClearCachedAchievements, addr 0x1818d6be0, size 0x40, virtual false, abstract: false, final false
inline void ClearCachedAchievements() ;

/// @brief Method GetAchievementById, addr 0x181ac4a10, size 0xf0, virtual false, abstract: false, final false
inline ::Shipmate::Porting::EPlatformAchievement* GetAchievementById(int32_t  aAchievementId) ;

/// @brief Method IsAchievementUnlocked, addr 0x181ac4b00, size 0x30, virtual true, abstract: false, final false
inline bool IsAchievementUnlocked(::Shipmate::Porting::EPlatformAchievement*  aAchievement) ;

static inline ::Shipmate::Porting::AbstractPlatformAchievements* New_ctor() ;

/// @brief Method SendUnlockedAchievementEvent, addr 0x181ac4b30, size 0x10, virtual false, abstract: false, final false
inline void SendUnlockedAchievementEvent(uint64_t  aUserId, ::Shipmate::Porting::EPlatformAchievement*  aAchievement) ;

/// @brief Method SetAchievementProgress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetAchievementProgress(::Shipmate::Porting::EPlatformAchievement*  aAchievement, int32_t  aProgress) ;

/// @brief Method SetAchievementProgressionLock, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void SetAchievementProgressionLock(bool  aLock) ;

/// @brief Method UnlockAchievement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask UnlockAchievement(::Shipmate::Porting::EPlatformAchievement*  aAchievement) ;

constexpr ::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>* const& __cordl_internal_get_OnAchievementUnlocked() const;

constexpr ::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*& __cordl_internal_get_OnAchievementUnlocked() ;

constexpr bool const& __cordl_internal_get_mAchievementProgressLocked() const;

constexpr bool& __cordl_internal_get_mAchievementProgressLocked() ;

constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* const& __cordl_internal_get_mUnlockedAchievements() const;

constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*& __cordl_internal_get_mUnlockedAchievements() ;

constexpr void __cordl_internal_set_OnAchievementUnlocked(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  value) ;

constexpr void __cordl_internal_set_mAchievementProgressLocked(bool  value) ;

constexpr void __cordl_internal_set_mUnlockedAchievements(::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  value) ;

/// @brief Method .ctor, addr 0x181ac4b90, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnAchievementUnlocked, addr 0x181ac4be0, size 0x90, virtual false, abstract: false, final false
inline void add_OnAchievementUnlocked(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  value) ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method remove_OnAchievementUnlocked, addr 0x181ac4c70, size 0x90, virtual false, abstract: false, final false
inline void remove_OnAchievementUnlocked(::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  value) ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformAchievements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformAchievements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformAchievements(AbstractPlatformAchievements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformAchievements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformAchievements(AbstractPlatformAchievements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20597};

/// @brief Field OnAchievementUnlocked, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<uint64_t,::Shipmate::Porting::EPlatformAchievement*>*  ___OnAchievementUnlocked;

/// @brief Field mAchievementProgressLocked, offset: 0x20, size: 0x1, def value: None
 bool  ___mAchievementProgressLocked;

/// @brief Field mUnlockedAchievements, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  ___mUnlockedAchievements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformAchievements, ___OnAchievementUnlocked) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformAchievements, ___mAchievementProgressLocked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformAchievements, ___mUnlockedAchievements) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformAchievements) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
