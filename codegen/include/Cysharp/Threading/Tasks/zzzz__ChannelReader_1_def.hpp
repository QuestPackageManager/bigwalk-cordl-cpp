#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ChannelReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelReader_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct ChannelReader_1__ReadAsyncCore_d__5;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class ChannelReader_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct ChannelReader_1__ReadAsyncCore_d__5;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::ChannelReader_1);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::ChannelReader_1__ReadAsyncCore_d__5);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::ChannelReader_1, "Cysharp.Threading.Tasks", "ChannelReader`1");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::ChannelReader_1__ReadAsyncCore_d__5, "Cysharp.Threading.Tasks", "ChannelReader`1/<ReadAsyncCore>d__5");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.ChannelReader`1/<ReadAsyncCore>d__5<T>
struct CORDL_TYPE ChannelReader_1__ReadAsyncCore_d__5 {
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
constexpr ChannelReader_1__ReadAsyncCore_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::ChannelReader_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
constexpr ChannelReader_1__ReadAsyncCore_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::Cysharp::Threading::Tasks::ChannelReader_1<T>*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ChannelReader_1<T>*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ChannelReader`1<T>
class CORDL_TYPE ChannelReader_1 : public ::System::Object {
public:
// Declarations
using _ReadAsyncCore_d__5 = ::Cysharp::Threading::Tasks::ChannelReader_1__ReadAsyncCore_d__5<T>;

 __declspec(property(get=get_Completion)) ::Cysharp::Threading::Tasks::UniTask  Completion;

static inline ::Cysharp::Threading::Tasks::ChannelReader_1<T>* New_ctor() ;

/// @brief Method ReadAllAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* ReadAllAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> ReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsyncCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> ReadAsyncCore(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryRead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryRead(::by_ref<T>  item) ;

/// @brief Method WaitToReadAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> WaitToReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Completion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Completion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelReader_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelReader_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelReader_1(ChannelReader_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelReader_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelReader_1(ChannelReader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
