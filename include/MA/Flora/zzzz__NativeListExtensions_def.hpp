#pragma once
// IWYU pragma private; include "MA/Flora/NativeListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeListExtensions)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
// Forward declare root types
namespace MA::Flora {
class NativeListExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::NativeListExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeListExtensions*, "MA.Flora", "NativeListExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.NativeListExtensions
class CORDL_TYPE NativeListExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Fill(::Unity::Collections::NativeList_1<T>  list, T  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Initialize(::Unity::Collections::NativeList_1<T>  list, ::by_ref<T>  initValue, int32_t  count) ;

/// @brief Method IsValidIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsValidIndex(::by_ref<::Unity::Collections::NativeList_1<T>>  list, int32_t  index) ;

/// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Pop(::Unity::Collections::NativeList_1<T>  list) ;

/// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Reserve(::Unity::Collections::NativeList_1<T>  list, int32_t  count) ;

/// @brief Method SetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetOrAdd(::Unity::Collections::NativeList_1<T>  list, int32_t  index, T  value) ;

/// @brief Method TransferOwnershipToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::NativeArray_1<T> TransferOwnershipToNativeArray(::by_ref<::Unity::Collections::NativeList_1<T>>  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeListExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeListExtensions(NativeListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeListExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeListExtensions(NativeListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::NativeListExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
