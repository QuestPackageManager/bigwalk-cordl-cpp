#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/EnumerableAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableAsyncExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class EnumerableAsyncExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::EnumerableAsyncExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumerableAsyncExtensions*, "Cysharp.Threading.Tasks", "EnumerableAsyncExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumerableAsyncExtensions
class CORDL_TYPE EnumerableAsyncExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  selector) ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask>*  selector) ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TR>
static inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<TR>>* Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  selector) ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TR>
static inline ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<TR>>* Select(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  selector) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableAsyncExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableAsyncExtensions(EnumerableAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableAsyncExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableAsyncExtensions(EnumerableAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::EnumerableAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
