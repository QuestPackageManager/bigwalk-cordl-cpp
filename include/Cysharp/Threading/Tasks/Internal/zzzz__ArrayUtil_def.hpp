#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtil)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class ArrayUtil;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::ArrayUtil*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::ArrayUtil*, "Cysharp.Threading.Tasks.Internal", "ArrayUtil");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.ArrayUtil
class CORDL_TYPE ArrayUtil : public ::System::Object {
public:
// Declarations
/// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureCapacity(::by_ref<::ArrayW<T>>  array, int32_t  index) ;

/// @brief Method EnsureCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureCore(::by_ref<::ArrayW<T>>  array, int32_t  index) ;

/// @brief Method Materialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::ValueTuple_2<::ArrayW<T>,int32_t> Materialize(::System::Collections::Generic::IEnumerable_1<T>*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayUtil(ArrayUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayUtil(ArrayUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14712};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::ArrayUtil) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
