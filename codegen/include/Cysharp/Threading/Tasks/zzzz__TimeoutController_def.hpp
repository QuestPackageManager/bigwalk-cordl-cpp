#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TimeoutController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeoutController)
namespace Cysharp::Threading::Tasks {
struct DelayType;
}
namespace Cysharp::Threading::Tasks {
class PlayerLoopTimer;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class TimeoutController;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::TimeoutController*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TimeoutController*, "Cysharp.Threading.Tasks", "TimeoutController");
// Dependencies Cysharp.Threading.Tasks.DelayType, Cysharp.Threading.Tasks.PlayerLoopTiming, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TimeoutController
class CORDL_TYPE TimeoutController : public ::System::Object {
public:
// Declarations
/// @brief Field CancelCancellationTokenSourceStateDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelCancellationTokenSourceStateDelegate, put=setStaticF_CancelCancellationTokenSourceStateDelegate)) ::System::Action_1<::System::Object*>*  CancelCancellationTokenSourceStateDelegate;

/// @brief Field delayTiming, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayTiming, put=__cordl_internal_set_delayTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming;

/// @brief Field delayType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayType, put=__cordl_internal_set_delayType)) ::Cysharp::Threading::Tasks::DelayType  delayType;

/// @brief Field isDisposed, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field linkedSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedSource, put=__cordl_internal_set_linkedSource)) ::System::Threading::CancellationTokenSource*  linkedSource;

/// @brief Field originalLinkCancellationTokenSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalLinkCancellationTokenSource, put=__cordl_internal_set_originalLinkCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  originalLinkCancellationTokenSource;

/// @brief Field timeoutSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeoutSource, put=__cordl_internal_set_timeoutSource)) ::System::Threading::CancellationTokenSource*  timeoutSource;

/// @brief Field timer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::Cysharp::Threading::Tasks::PlayerLoopTimer*  timer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CancelCancellationTokenSourceState, addr 0x181e5e150, size 0x90, virtual false, abstract: false, final false
static inline void CancelCancellationTokenSourceState(::System::Object*  state) ;

/// @brief Method Dispose, addr 0x181e63a30, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method IsTimeout, addr 0x181e63b00, size 0x20, virtual false, abstract: false, final false
inline bool IsTimeout() ;

static inline ::Cysharp::Threading::Tasks::TimeoutController* New_ctor(::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming) ;

static inline ::Cysharp::Threading::Tasks::TimeoutController* New_ctor(::System::Threading::CancellationTokenSource*  linkCancellationTokenSource, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming) ;

/// @brief Method Reset, addr 0x181e63b20, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Timeout, addr 0x181e63de0, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken Timeout(int32_t  millisecondsTimeout) ;

/// @brief Method Timeout, addr 0x181e63b30, size 0x2b0, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken Timeout(::System::TimeSpan  timeout) ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_delayTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_delayTiming() ;

constexpr ::Cysharp::Threading::Tasks::DelayType const& __cordl_internal_get_delayType() const;

constexpr ::Cysharp::Threading::Tasks::DelayType& __cordl_internal_get_delayType() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_linkedSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_linkedSource() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_originalLinkCancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_originalLinkCancellationTokenSource() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_timeoutSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_timeoutSource() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTimer* const& __cordl_internal_get_timer() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTimer*& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set_delayTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

constexpr void __cordl_internal_set_delayType(::Cysharp::Threading::Tasks::DelayType  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_linkedSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_originalLinkCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_timeoutSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_timer(::Cysharp::Threading::Tasks::PlayerLoopTimer*  value) ;

/// @brief Method .ctor, addr 0x181e63f40, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming) ;

/// @brief Method .ctor, addr 0x181e63e70, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationTokenSource*  linkCancellationTokenSource, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_CancelCancellationTokenSourceStateDelegate() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_CancelCancellationTokenSourceStateDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeoutController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeoutController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeoutController(TimeoutController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeoutController(TimeoutController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14268};

/// @brief Field timeoutSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___timeoutSource;

/// @brief Field linkedSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___linkedSource;

/// @brief Field timer, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTimer*  ___timer;

/// @brief Field isDisposed, offset: 0x28, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field delayType, offset: 0x2c, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::DelayType  ___delayType;

/// @brief Field delayTiming, offset: 0x30, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___delayTiming;

/// @brief Field originalLinkCancellationTokenSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___originalLinkCancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___timeoutSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___linkedSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___timer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___isDisposed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___delayType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___delayTiming) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::TimeoutController, ___originalLinkCancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::TimeoutController) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
