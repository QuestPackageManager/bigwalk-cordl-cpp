#pragma once
// IWYU pragma private; include "MA/Flora/ParallelBitArrayHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelBitArrayHelpers)
namespace MA::Flora {
struct ParallelBitArray;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace MA::Flora {
class ParallelBitArrayHelpers;
}
// Write type traits
MARK_REF_T(::MA::Flora::ParallelBitArrayHelpers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelBitArrayHelpers*, "MA.Flora", "ParallelBitArrayHelpers");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ParallelBitArrayHelpers
class CORDL_TYPE ParallelBitArrayHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method AsParallelBitArray, addr 0x181460a20, size 0x150, virtual false, abstract: false, final false
static inline ::MA::Flora::ParallelBitArray AsParallelBitArray(::Unity::Collections::NativeArray_1<int64_t>  bits) ;

/// @brief Method AsParallelBitArray, addr 0x1814609d0, size 0x50, virtual false, abstract: false, final false
static inline ::MA::Flora::ParallelBitArray AsParallelBitArray(::Unity::Collections::NativeArray_1<uint64_t>  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelBitArrayHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelBitArrayHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelBitArrayHelpers(ParallelBitArrayHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelBitArrayHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelBitArrayHelpers(ParallelBitArrayHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ParallelBitArrayHelpers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
