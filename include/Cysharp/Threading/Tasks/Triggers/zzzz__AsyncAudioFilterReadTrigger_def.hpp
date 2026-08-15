#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncAudioFilterReadTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncAudioFilterReadTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnAudioFilterReadHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncAudioFilterReadTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncAudioFilterReadTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncAudioFilterReadTrigger
class CORDL_TYPE AsyncAudioFilterReadTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> {
public:
// Declarations
/// @brief Method GetOnAudioFilterReadAsyncHandler, addr 0x181e74c30, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler() ;

/// @brief Method GetOnAudioFilterReadAsyncHandler, addr 0x181e74bd0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x181e74d50, size 0x50, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

/// @brief Method OnAudioFilterReadAsync, addr 0x181e74cf0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> OnAudioFilterReadAsync() ;

/// @brief Method OnAudioFilterReadAsync, addr 0x181e74c70, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> OnAudioFilterReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncAudioFilterReadTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncAudioFilterReadTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncAudioFilterReadTrigger(AsyncAudioFilterReadTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncAudioFilterReadTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncAudioFilterReadTrigger(AsyncAudioFilterReadTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
