#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ITriggerHandler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITriggerHandler_1)
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITriggerHandler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::ITriggerHandler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::ITriggerHandler_1, "Cysharp.Threading.Tasks", "ITriggerHandler`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ITriggerHandler`1<T>
class CORDL_TYPE ITriggerHandler_1 {
public:
// Declarations
 __declspec(property(get=get_Next, put=set_Next)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Next;

 __declspec(property(get=get_Prev, put=set_Prev)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Prev;

/// @brief Method OnCanceled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnCompleted() ;

/// @brief Method OnError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnError(::System::Exception*  ex) ;

/// @brief Method OnNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnNext(T  value) ;

/// @brief Method get_Next, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* get_Next() ;

/// @brief Method get_Prev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* get_Prev() ;

/// @brief Method set_Next, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

/// @brief Method set_Prev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITriggerHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITriggerHandler_1(ITriggerHandler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14269};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
