#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleVolumetricClouds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleVolumetricClouds)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
namespace Shipmates::RemotePlayerDebug {
struct ToggleVolumetricClouds__ToggleClouds_d__3;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleVolumetricClouds;
}
namespace Shipmates::RemotePlayerDebug {
struct ToggleVolumetricClouds__ToggleClouds_d__3;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds*);
MARK_VAL_T(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds*, "Shipmates.RemotePlayerDebug", "ToggleVolumetricClouds");
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3, "Shipmates.RemotePlayerDebug", "ToggleVolumetricClouds/<ToggleClouds>d__3");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmates::RemotePlayerDebug {
// Is value type: true
// CS Name: Shipmates.RemotePlayerDebug.ToggleVolumetricClouds/<ToggleClouds>d__3
struct CORDL_TYPE ToggleVolumetricClouds__ToggleClouds_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1803b5620, size 0x590, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ToggleVolumetricClouds__ToggleClouds_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "newValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr ToggleVolumetricClouds__ToggleClouds_d__3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, bool  newValue, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5721};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field newValue, offset: 0x10, size: 0x1, def value: None
 bool  newValue;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3, newValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3) == 0x28, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
// Dependencies Shipmates.RemotePlayerDebug.BaseJSRemoteDebuggingOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleVolumetricClouds
class CORDL_TYPE ToggleVolumetricClouds : public ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation {
public:
// Declarations
using _ToggleClouds_d__3 = ::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds__ToggleClouds_d__3;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803b52c0, size 0x130, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds* New_ctor() ;

/// @brief Method ToggleClouds, addr 0x1803b53f0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid ToggleClouds(bool  newValue) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b5450, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleVolumetricClouds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleVolumetricClouds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleVolumetricClouds(ToggleVolumetricClouds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleVolumetricClouds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleVolumetricClouds(ToggleVolumetricClouds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleVolumetricClouds) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
