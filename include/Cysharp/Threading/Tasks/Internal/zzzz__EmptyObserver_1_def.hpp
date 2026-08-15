#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/EmptyObserver_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyObserver_1)
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IObserver_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class EmptyObserver_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::EmptyObserver_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::EmptyObserver_1, "Cysharp.Threading.Tasks.Internal", "EmptyObserver`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.EmptyObserver`1<T>
class CORDL_TYPE EmptyObserver_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>*  Instance;

/// @brief Convert operator to "::System::IObserver_1<T>"
constexpr operator  ::System::IObserver_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>* getStaticF_Instance() ;

/// @brief Convert to "::System::IObserver_1<T>"
constexpr ::System::IObserver_1<T>* i___System__IObserver_1_T_() noexcept;

static inline void setStaticF_Instance(::Cysharp::Threading::Tasks::Internal::EmptyObserver_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyObserver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyObserver_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyObserver_1(EmptyObserver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyObserver_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyObserver_1(EmptyObserver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
