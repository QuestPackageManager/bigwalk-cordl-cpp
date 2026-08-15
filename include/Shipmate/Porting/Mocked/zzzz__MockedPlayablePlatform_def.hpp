#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlayablePlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlayablePlatform_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlayablePlatform)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting::Mocked {
template<typename T>
struct MockedPlayablePlatform__Init_d__0_1;
}
namespace Shipmate::Porting {
template<typename T>
class AbstractPlatformManager_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlayablePlatform;
}
namespace Shipmate::Porting::Mocked {
template<typename T>
struct MockedPlayablePlatform__Init_d__0_1;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlayablePlatform*);
MARK_GEN_VAL_T(::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlayablePlatform*, "Shipmate.Porting.Mocked", "MockedPlayablePlatform");
DEFINE_IL2CPP_GEN_CLASS(::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1, "Shipmate.Porting.Mocked", "MockedPlayablePlatform/<Init>d__0`1");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting::Mocked {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Shipmate.Porting.Mocked.MockedPlayablePlatform/<Init>d__0`1<T>
struct CORDL_TYPE MockedPlayablePlatform__Init_d__0_1 {
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
constexpr MockedPlayablePlatform__Init_d__0_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Mocked::MockedPlayablePlatform*", modifiers: "", def_value: None }, CppParam { name: "aManager", ty: "::UnityW<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr MockedPlayablePlatform__Init_d__0_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::Mocked::MockedPlayablePlatform*  __4__this, ::UnityW<T>  aManager, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21525};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::Mocked::MockedPlayablePlatform*  __4__this;

/// @brief Field aManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<T>  aManager;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Shipmate::Porting::Mocked
// Dependencies Shipmate.Porting.AbstractPlayablePlatform
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlayablePlatform
class CORDL_TYPE MockedPlayablePlatform : public ::Shipmate::Porting::AbstractPlayablePlatform {
public:
// Declarations
template<typename T>
using _Init_d__0_1 = ::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Init(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager) ;

static inline ::Shipmate::Porting::Mocked::MockedPlayablePlatform* New_ctor() ;

/// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask __n__0(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlayablePlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlayablePlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlayablePlatform(MockedPlayablePlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlayablePlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlayablePlatform(MockedPlayablePlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21526};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlayablePlatform) == 0x68, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
