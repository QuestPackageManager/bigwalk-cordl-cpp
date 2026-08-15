#pragma once
// IWYU pragma private; include "MA/Flora/NativeArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayExtensions)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace MA::Flora {
class NativeArrayExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::NativeArrayExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeArrayExtensions*, "MA.Flora", "NativeArrayExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.NativeArrayExtensions
class CORDL_TYPE NativeArrayExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method CheckIndexCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CheckIndexCount(::Unity::Collections::NativeArray_1<T>  array, int32_t  index, int32_t  count) ;

/// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Fill(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, T  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method GetUnsafePtrT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T* GetUnsafePtrT(::Unity::Collections::NativeArray_1<T>  array) ;

/// @brief Method GetUnsafeReadOnlyPtrT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T* GetUnsafeReadOnlyPtrT(::Unity::Collections::NativeArray_1<T>  array) ;

/// @brief Method IsValidIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsValidIndex(::Unity::Collections::NativeArray_1<T>  array, int32_t  index) ;

/// @brief Method MemClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void MemClear(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, int32_t  startIndex, int32_t  length) ;

/// @brief Method ResizeArraySafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ResizeArraySafe(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, int32_t  newSize, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeArrayExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeArrayExtensions(NativeArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeArrayExtensions(NativeArrayExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::NativeArrayExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
