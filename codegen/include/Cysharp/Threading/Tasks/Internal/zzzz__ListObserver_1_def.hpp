#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ListObserver_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListObserver_1)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class ImmutableList_1;
}
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
class ListObserver_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::ListObserver_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::ListObserver_1, "Cysharp.Threading.Tasks.Internal", "ListObserver`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.ListObserver`1<T>
class CORDL_TYPE ListObserver_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _observers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__observers, put=__cordl_internal_set__observers)) ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  _observers;

/// @brief Convert operator to "::System::IObserver_1<T>"
constexpr operator  ::System::IObserver_1<T>*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::IObserver_1<T>* Add(::System::IObserver_1<T>*  observer) ;

static inline ::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>* New_ctor(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  observers) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::IObserver_1<T>* Remove(::System::IObserver_1<T>*  observer) ;

constexpr ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>* const& __cordl_internal_get__observers() const;

constexpr ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*& __cordl_internal_get__observers() ;

constexpr void __cordl_internal_set__observers(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  observers) ;

/// @brief Convert to "::System::IObserver_1<T>"
constexpr ::System::IObserver_1<T>* i___System__IObserver_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListObserver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListObserver_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListObserver_1(ListObserver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListObserver_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListObserver_1(ListObserver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14754};

/// @brief Field _observers, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  ____observers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
