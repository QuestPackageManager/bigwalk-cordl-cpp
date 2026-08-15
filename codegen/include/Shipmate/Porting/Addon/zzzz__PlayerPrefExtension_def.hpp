#pragma once
// IWYU pragma private; include "Shipmate/Porting/Addon/PlayerPrefExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefExtension)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Shipmate::Porting::Addon {
struct PlayerPrefExtension__PreparePrefs_d__3;
}
namespace Shipmate::Porting::Addon {
struct PlayerPrefExtension__SavePlayerPrefTask_d__5;
}
namespace Shipmate::Porting {
template<typename T>
class AbstractPlatformManager_1;
}
namespace Shipmate::Porting {
class AbstractPlatformStorage;
}
namespace Shipmate::Porting {
class IPlatformAddon;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Shipmate::Porting::Addon {
class PlayerPrefExtension;
}
namespace Shipmate::Porting::Addon {
struct PlayerPrefExtension__PreparePrefs_d__3;
}
namespace Shipmate::Porting::Addon {
struct PlayerPrefExtension__SavePlayerPrefTask_d__5;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Addon::PlayerPrefExtension*);
MARK_VAL_T(::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3);
MARK_VAL_T(::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::PlayerPrefExtension*, "Shipmate.Porting.Addon", "PlayerPrefExtension");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3, "Shipmate.Porting.Addon", "PlayerPrefExtension/<PreparePrefs>d__3");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5, "Shipmate.Porting.Addon", "PlayerPrefExtension/<SavePlayerPrefTask>d__5");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
namespace Shipmate::Porting::Addon {
// Is value type: true
// CS Name: Shipmate.Porting.Addon.PlayerPrefExtension/<PreparePrefs>d__3
struct CORDL_TYPE PlayerPrefExtension__PreparePrefs_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac4770, size 0x90, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefExtension__PreparePrefs_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }]
constexpr PlayerPrefExtension__PreparePrefs_d__3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
namespace Shipmate::Porting::Addon {
// Is value type: true
// CS Name: Shipmate.Porting.Addon.PlayerPrefExtension/<SavePlayerPrefTask>d__5
struct CORDL_TYPE PlayerPrefExtension__SavePlayerPrefTask_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac4800, size 0xa0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefExtension__SavePlayerPrefTask_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }]
constexpr PlayerPrefExtension__SavePlayerPrefTask_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies System.Object
namespace Shipmate::Porting::Addon {
// Is value type: false
// CS Name: Shipmate.Porting.Addon.PlayerPrefExtension
class CORDL_TYPE PlayerPrefExtension : public ::System::Object {
public:
// Declarations
using _PreparePrefs_d__3 = ::Shipmate::Porting::Addon::PlayerPrefExtension__PreparePrefs_d__3;

using _SavePlayerPrefTask_d__5 = ::Shipmate::Porting::Addon::PlayerPrefExtension__SavePlayerPrefTask_d__5;

/// @brief Field storage, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_storage, put=__cordl_internal_set_storage)) ::Shipmate::Porting::AbstractPlatformStorage*  storage;

/// @brief Convert operator to "::Shipmate::Porting::IPlatformAddon"
constexpr operator  ::Shipmate::Porting::IPlatformAddon*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void Initialize(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager) ;

static inline ::Shipmate::Porting::Addon::PlayerPrefExtension* New_ctor() ;

/// @brief Method PreparePrefs, addr 0x181ac2a70, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid PreparePrefs() ;

/// @brief Method Save, addr 0x181ac2af0, size 0x40, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method SavePlayerPrefTask, addr 0x181ac2ab0, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid SavePlayerPrefTask() ;

constexpr ::Shipmate::Porting::AbstractPlatformStorage* const& __cordl_internal_get_storage() const;

constexpr ::Shipmate::Porting::AbstractPlatformStorage*& __cordl_internal_get_storage() ;

constexpr void __cordl_internal_set_storage(::Shipmate::Porting::AbstractPlatformStorage*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Shipmate::Porting::IPlatformAddon"
constexpr ::Shipmate::Porting::IPlatformAddon* i___Shipmate__Porting__IPlatformAddon() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefExtension(PlayerPrefExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefExtension(PlayerPrefExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21504};

/// @brief Field fileName offset 0xffffffff size 0x8
static constexpr ::ConstString  fileName{u"PlayerPrefData"};

/// @brief Field storage, offset: 0x10, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  ___storage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::PlayerPrefExtension, ___storage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::PlayerPrefExtension) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
