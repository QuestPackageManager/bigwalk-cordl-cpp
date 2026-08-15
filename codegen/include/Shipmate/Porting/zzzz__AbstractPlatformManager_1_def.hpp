#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformManager_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformManager_1)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class AbstractPlatformEnvironment;
}
namespace Shipmate::Porting {
class AbstractPlatformAchievements;
}
namespace Shipmate::Porting {
class AbstractPlatformCore;
}
namespace Shipmate::Porting {
class AbstractPlatformLeaderboards;
}
namespace Shipmate::Porting {
class AbstractPlatformLobby;
}
namespace Shipmate::Porting {
template<typename T>
struct AbstractPlatformManager_1__Initialize_d__2;
}
namespace Shipmate::Porting {
class AbstractPlatformMarketplace;
}
namespace Shipmate::Porting {
class AbstractPlatformRichPresence;
}
namespace Shipmate::Porting {
class AbstractPlatformStorage;
}
namespace Shipmate::Porting {
class AbstractPlatformUsers;
}
namespace Shipmate::Porting {
class AbstractPlayablePlatform;
}
namespace Shipmate::Porting {
class IPlatformAddon;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmate::Porting {
template<typename T>
class AbstractPlatformManager_1;
}
namespace Shipmate::Porting {
template<typename T>
struct AbstractPlatformManager_1__Initialize_d__2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Shipmate::Porting::AbstractPlatformManager_1);
MARK_GEN_VAL_T(::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Shipmate::Porting::AbstractPlatformManager_1, "Shipmate.Porting", "AbstractPlatformManager`1");
DEFINE_IL2CPP_GEN_CLASS(::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2, "Shipmate.Porting", "AbstractPlatformManager`1/<Initialize>d__2");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformManager`1/<Initialize>d__2<T>
struct CORDL_TYPE AbstractPlatformManager_1__Initialize_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformManager_1__Initialize_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: None }, CppParam { name: "aPlatform", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlatformManager_1__Initialize_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<T>  __4__this, ::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<T>  __4__this;

/// @brief Field aPlatform, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Utils.SingletonBehaviour`1<T>
namespace Shipmate::Porting {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformManager`1<T>
class CORDL_TYPE AbstractPlatformManager_1 : public ::Shipmate::Utils::SingletonBehaviour_1<T> {
public:
// Declarations
using _Initialize_d__2 = ::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>;

 __declspec(property(get=get_Platform)) ::Shipmate::Porting::AbstractPlayablePlatform*  Platform;

/// @brief Field mPlatform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPlatform, put=__cordl_internal_set_mPlatform)) ::Shipmate::Porting::AbstractPlayablePlatform*  mPlatform;

/// @brief Field mRegisteredAddons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mRegisteredAddons, put=__cordl_internal_set_mRegisteredAddons)) ::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>*  mRegisteredAddons;

/// @brief Method GetAddon, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T2>
static inline T2 GetAddon() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask Initialize(::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform) ;

static inline ::Shipmate::Porting::AbstractPlatformManager_1<T>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlatformExists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool PlatformExists() ;

/// @brief Method RegisterAddon, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T2>
static inline T2 RegisterAddon(T2  addon) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Shipmate::Porting::AbstractPlayablePlatform* const& __cordl_internal_get_mPlatform() const;

constexpr ::Shipmate::Porting::AbstractPlayablePlatform*& __cordl_internal_get_mPlatform() ;

constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>* const& __cordl_internal_get_mRegisteredAddons() const;

constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>*& __cordl_internal_get_mRegisteredAddons() ;

constexpr void __cordl_internal_set_mPlatform(::Shipmate::Porting::AbstractPlayablePlatform*  value) ;

constexpr void __cordl_internal_set_mRegisteredAddons(::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Achievements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformAchievements* get_Achievements() ;

/// @brief Method get_Core, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformCore* get_Core() ;

/// @brief Method get_Environment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AbstractPlatformEnvironment* get_Environment() ;

/// @brief Method get_Initialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool get_Initialized() ;

/// @brief Method get_Leaderboards, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformLeaderboards* get_Leaderboards() ;

/// @brief Method get_Lobby, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformLobby* get_Lobby() ;

/// @brief Method get_Market, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformMarketplace* get_Market() ;

/// @brief Method get_Platform, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlayablePlatform* get_Platform() ;

/// @brief Method get_RichPresence, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformRichPresence* get_RichPresence() ;

/// @brief Method get_Storage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformStorage* get_Storage() ;

/// @brief Method get_Users, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::AbstractPlatformUsers* get_Users() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformManager_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformManager_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformManager_1(AbstractPlatformManager_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformManager_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformManager_1(AbstractPlatformManager_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20615};

/// @brief Field mPlatform, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  ___mPlatform;

/// @brief Field mRegisteredAddons, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>*  ___mRegisteredAddons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmate::Porting
