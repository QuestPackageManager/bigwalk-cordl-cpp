#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TriggerEvent_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TriggerEvent_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITriggerHandler_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
struct TriggerEvent_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::TriggerEvent_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::TriggerEvent_1, "Cysharp.Threading.Tasks", "TriggerEvent`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.TriggerEvent`1<T>
struct CORDL_TYPE TriggerEvent_1 {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler) ;

/// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LogError(::System::Exception*  ex) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler) ;

/// @brief Method SetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCompleted() ;

/// @brief Method SetError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetError(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TriggerEvent_1() ;

// Ctor Parameters [CppParam { name: "head", ty: "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*", modifiers: "", def_value: None }, CppParam { name: "iteratingHead", ty: "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*", modifiers: "", def_value: None }, CppParam { name: "iteratingNode", ty: "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*", modifiers: "", def_value: None }]
constexpr TriggerEvent_1(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  head, ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  iteratingHead, ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  iteratingNode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field head, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  head;

/// @brief Field iteratingHead, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  iteratingHead;

/// @brief Field iteratingNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  iteratingNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
